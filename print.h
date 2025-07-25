#ifndef _PRINT_H_
#define _PRINT_H_
#include <iostream>

class IPrint {
	friend std::ostream &operator<<(std::ostream &os, const IPrint &obj);
	public:
		virtual void print(std::ostream &os) const = 0;
		virtual ~IPrint() = default;
};

#endif