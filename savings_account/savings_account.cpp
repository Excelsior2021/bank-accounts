#include "savings_account.h"

SavingsAccount::SavingsAccount(std::string name, double balance, double interest_rate)
	:Account(name, balance), interest_rate{ interest_rate } {
}

void SavingsAccount::print(std::ostream& os) const {
	os << "Saving Account: " << name << ", Balanace: " << balance << ", Interest: " << interest_rate << std::endl;
}

bool SavingsAccount::deposit(double amount) {
	bool deposited = Account::deposit(amount);
	if (deposited)
		balance += amount * interest_rate / 100;
	return deposited;
}

bool SavingsAccount::withdraw(double amount) {
	return Account::withdraw(amount);
}