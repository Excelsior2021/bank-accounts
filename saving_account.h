#ifndef _SAVING_ACCOUNT_H_
#define _SAVING_ACCOUNT_H_
#include "account.h"

class Saving_Account: public Account {
	protected:
		double interest_rate;

	public:
		Saving_Account(std::string name = "saving account", double balance = 0.0, double interest_rate = 0.0);
		virtual void print(std::ostream &os) const override;
		virtual bool deposit(double amount) override;
		virtual bool withdraw(double amount) override;
		virtual ~Saving_Account() = default;
};

#endif