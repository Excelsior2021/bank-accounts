#include "print.h"

std::ostream &operator<<(std::ostream &os, const IPrint &obj) {
	obj.print(os);
	return os;
}