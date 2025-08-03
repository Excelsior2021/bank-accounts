#include <iostream>
#include <vector>
#include "account.h"
#include "savings_account.h"
#include "checking_account.h"
#include "trust_account.h"

int main() {
	//EXAMPLE PROGRAM
	std::unique_ptr<Account> jonathan_acc;

	try {
		std::unique_ptr<Account> jonathan_acc = std::make_unique<CheckingAccount>("jonathan's account", 1000);
		*jonathan_acc-=400;
		std::cout << *jonathan_acc << std::endl;
	} catch (const DepositException &ex) {
		std::cerr << ex.what() << std::endl;
	} catch (const WithdrawlException &ex) {
		std::cerr << ex.what() << std::endl;
	}

	std::cout << "program ended." << std::endl;
	return 0;
}