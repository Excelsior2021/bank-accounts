#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
#include <iostream>
#include "../print/print.h"
#include "../exception_classes/deposit_exception.h"
#include "../exception_classes/withdrawl_exception.h"

class Account: public IPrint {
	//exception messages
	static constexpr char const* illegal_balance_exception_msg{ "Can not create an account with a negative balance." };
	static constexpr char const* deposit_exception_msg{ "Can not deposit a negative amount." };
	static constexpr char const* insufficient_funds_exception_msg{ "Insufficient funds." };


	protected:
		std::string name;
		double balance;

	public:
		Account(std::string name = "account", double balance = 0.0);
		virtual bool deposit(double amount) = 0;
		virtual bool withdraw(double amount) = 0;
		double get_balance() const;
		bool operator+=(double amount);
		bool operator-=(double amount);
		virtual ~Account() = default;
};

#endif