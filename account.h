#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
#include <iostream>
#include "print.h"

class Account: public IPrint {
	protected:
		std::string name;
		double balance;

	public:
		Account(std::string name = "account", double balance = 0.0);
		virtual bool deposit(double amount) = 0;
		virtual bool withdraw(double amount) = 0;
		double get_balance();
		bool operator+=(double amount);
		bool operator-=(double amount);
		virtual ~Account() = default;
};

#endif