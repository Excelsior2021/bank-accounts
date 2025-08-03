#ifndef _DEPOSIT_EXCEPTION_
#define _DEPOSIT_EXCEPTION_
#include <exception>

class DepositException: public std::exception {
	const char* msg;
	public:
		DepositException(const char* msg) noexcept : msg{ msg } {};
		DepositException() noexcept : msg{ "Deposit Exception."} {};
		~DepositException() noexcept = default;
		virtual const char* what() const noexcept override {
			return msg;
		}
};

#endif