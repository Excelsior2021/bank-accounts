#include "account.h"

Account::Account(std::string name, double balance):name{name}, balance{balance} {
	if(balance < 0)
		throw DepositException{illegal_balance_exception_msg};
}

bool Account::deposit(double amount) {
	std::cout << name <<" - ";
	if (amount <= 0) {
		throw DepositException{deposit_exception_msg};
		return false;
	}
	else {
		balance += amount;
		std::cout<<"Deposited: "<<amount<<std::endl;
		return true;
	}
}

bool Account::withdraw(double amount) {
	std::cout << name <<" - ";
	if(amount > balance) {
		throw WithdrawlException{insufficient_funds_exception_msg};
		return false;
	}
	else {
		balance -= amount;
		std::cout<<"Withdrew: "<<amount<<std::endl;
		return true;
	}
}

double Account::get_balance() const {
	return balance;
}

bool Account::operator+=(double amount) {
	return this->deposit(amount);
};

bool Account::operator-=(double amount) {
	return this->withdraw(amount);
};