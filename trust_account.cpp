#include "trust_account.h"

Trust_Account::Trust_Account(std::string name, double balance, double interest_rate)
:Saving_Account(name, balance, interest_rate) {}

void Trust_Account::print(std::ostream &os) const {
	os<<"Trust Account: "<<name<<", Balanace: "<<balance<<", Interest: "<<interest_rate<<", Withdrawls: "<<withdrawals<<std::endl;
}

bool Trust_Account::deposit(double amount) {
	if(amount >= bonus_threshold) 
		balance += bonus_amount;
	return Saving_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
	if(withdrawals >= 3) {
		std::cout<<name<<": max widthdrawals reached. withdrawals: "<<withdrawals<<std::endl;
		return false;
	} else if(amount > max_withdrawal_rate*balance) {
		std::cout<<name<<": amount greater than maximum that can be withdrawn"<<std::endl;
		return false;
	} else {
		bool withdrawn = Saving_Account::withdraw(amount);
		if(withdrawn)
			std::cout<<name<<" withdrawls: "<<++withdrawals<<std::endl;
		return withdrawn;
	}
}