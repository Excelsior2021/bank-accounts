#include "checking_account.h"

CheckingAccount::CheckingAccount(std::string name, double balance)
:Account(name, balance) {}

void CheckingAccount::print(std::ostream &os) const {
	os<<"Checking Account: "<<name<<", Balanace: "<<balance<<std::endl;
}

bool CheckingAccount::deposit(double amount) {
	return Account::deposit(amount);
}

bool CheckingAccount::withdraw(double amount) {
	if(amount + withdraw_fee >= balance) {
		std::cout << name << " - ";
		throw WithdrawlException{ checking_account_insufficient_funds_exception_msg };
		return false;
	} else {		
		balance -= withdraw_fee;
		return Account::withdraw(amount);
	}
}