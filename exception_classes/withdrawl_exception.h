#ifndef _WITHDRAWL_EXCEPTION_
#define _WITHDRAWL_EXCEPTION_
#include <exception>

class WithdrawlException: public std::exception {
	const char* msg;
	public:
		WithdrawlException(const char* msg_arg) noexcept : msg{msg_arg} {};
		WithdrawlException() noexcept : WithdrawlException("Withdrawl Exception.") {};
		~WithdrawlException() noexcept = default;
		virtual const char* what() const noexcept override {
			return msg;
		}
};

#endif