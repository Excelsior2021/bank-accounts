#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "account.h"

class SavingsAccount: public Account {
	protected:
		double interest_rate;

	public:
		SavingsAccount(std::string name = "savings account", double balance = 0.0, double interest_rate = 0.0);
		virtual void print(std::ostream &os) const override;
		virtual bool deposit(double amount) override;
		virtual bool withdraw(double amount) override;
		virtual ~SavingsAccount() = default;
};

#endif