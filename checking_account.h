#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "account.h"

class Checking_Account: public Account {
static constexpr const double withdraw_fee {1.5};

public:
	Checking_Account(std::string name = "checking account", double balance = 0.0);
	virtual void print(std::ostream &os) const override;
	virtual bool deposit(double amount) override;
	virtual bool withdraw(double amount) override;
	virtual ~Checking_Account() = default;
};

#endif