#include "saving_account.h"

Saving_Account::Saving_Account(std::string name, double balance, double interest_rate)
:Account(name, balance), interest_rate{interest_rate} {}

void Saving_Account::print(std::ostream &os) const {
	os<<"Saving Account: "<<name<<", Balanace: "<<balance<<", Interest: "<<interest_rate<<std::endl;
}

bool Saving_Account::deposit(double amount) {
	bool deposited = Account::deposit(amount);
	if(deposited)
		balance += amount*interest_rate/100;
	return deposited;
}

bool Saving_Account::withdraw(double amount) {
	return Account::withdraw(amount);
}