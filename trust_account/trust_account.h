#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "savings_account.h"

class TrustAccount: public SavingsAccount {
	//class constants
	static constexpr double max_withdrawal_rate {0.2};
	static constexpr double max_withdrawals {3};
	static constexpr double bonus_amount {50};
	static constexpr double bonus_threshold {5000};
	static constexpr char const* max_withdrawls_msg{ "max widthdrawals reached." };
	static constexpr char const* max_withdrawls_rate_msg{ "amount greater than maximum that can be withdrawn." };

	protected:
		size_t withdrawals {0};

	public:
		TrustAccount(std::string name = "trust account", double balance = 0.0, double interest_rate = 0.0);
		virtual void print(std::ostream &os) const override;
		virtual bool deposit(double amount) override;
		virtual bool withdraw(double amount) override;
		virtual ~TrustAccount() = default;
};

#endif