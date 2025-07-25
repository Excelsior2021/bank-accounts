#include "account.h"


Account::Account(std::string name, double balance):name{name}, balance{balance} {}

bool Account::deposit(double amount) {
	if(amount <= 0) return false;
	else {
		balance += amount;
		std::cout<<name<<" deposited: "<<amount<<std::endl;
		return true;
	}
}

bool Account::withdraw(double amount) {
	if(amount > balance) {
		std::cout<<name<<" insufficient funds"<<std::endl;
		return false;
	}
	else {
		balance -= amount;
		std::cout<<name<<" withdrew: "<<amount<<std::endl;
		return true;
	}
}

double Account::get_balance() {
	return balance;
}

bool Account::operator+=(double amount) {
	return this->deposit(amount);
};

bool Account::operator-=(double amount) {
	return this->withdraw(amount);
};