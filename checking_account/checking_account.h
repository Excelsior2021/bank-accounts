#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "../account/account.h"

class CheckingAccount: public Account {
static constexpr const double withdraw_fee {1.5};
static constexpr const char* checking_account_insufficient_funds_exception_msg{ "Insufficient funds (including withdraw fee)."};

public:
	CheckingAccount(std::string name = "checking account", double balance = 0.0);
	virtual void print(std::ostream &os) const override;
	virtual bool deposit(double amount) override;
	virtual bool withdraw(double amount) override;
	virtual ~CheckingAccount() = default;
};

#endif