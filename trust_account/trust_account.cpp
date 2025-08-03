#include "trust_account.h"

TrustAccount::TrustAccount(std::string name, double balance, double interest_rate)
:SavingsAccount(name, balance, interest_rate) {}

void TrustAccount::print(std::ostream &os) const {
	os<<"Trust Account: "<<name<<", Balanace: "<<balance<<", Interest: "<<interest_rate<<", Withdrawls: "<<withdrawals<<std::endl;
}

bool TrustAccount::deposit(double amount) {
	if(amount >= bonus_threshold) 
		balance += bonus_amount;
	return SavingsAccount::deposit(amount);
}

bool TrustAccount::withdraw(double amount) {
	if(withdrawals >= 3) {
		std::cout<<name<<" - "<<max_withdrawls_msg<<" withdrawals: "<<withdrawals<<std::endl;
		return false;
	} else if(amount > max_withdrawal_rate*balance) {
		std::cout<<name<<" - " <<max_withdrawls_rate_msg<<std::endl;
		return false;
	} else {
		bool withdrawn = SavingsAccount::withdraw(amount);
		if(withdrawn)
			std::cout<<name<<" withdrawls: "<<++withdrawals<<std::endl;
		return withdrawn;
	}
}