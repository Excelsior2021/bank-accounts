#include "checking_account.h"

Checking_Account::Checking_Account(std::string name, double balance)
:Account(name, balance) {}

void Checking_Account::print(std::ostream &os) const {
	os<<"Checking Account: "<<name<<", Balanace: "<<balance<<std::endl;
}

bool Checking_Account::deposit(double amount) {
	return Account::deposit(amount);
}

bool Checking_Account::withdraw(double amount) {
	if(balance >= amount - withdraw_fee) {
		balance -= withdraw_fee;
		return Account::withdraw(amount);
	} else {		
		std::cout<<name<<" insufficient funds (including withdraw fee)"<<std::endl;
		return false;
	}
}