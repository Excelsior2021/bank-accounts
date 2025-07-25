#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "saving_account.h"

class Trust_Account: public Saving_Account {
	static constexpr double max_withdrawal_rate {0.2};
	static constexpr double max_withdrawals {3};
	static constexpr double bonus_amount {50};
	static constexpr double bonus_threshold {5000};

	protected:
		size_t withdrawals {0};

	public:
		Trust_Account(std::string name = "trust account", double balance = 0.0, double interest_rate = 0.0);
		virtual void print(std::ostream &os) const override;
		virtual bool deposit(double amount) override;
		virtual bool withdraw(double amount) override;
		virtual ~Trust_Account() = default;
};

#endif