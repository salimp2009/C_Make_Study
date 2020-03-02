#include "message.hpp"
#include <iostream>
#include <string>

std::ostream& Message::printObject(std::ostream& os) const {
	os<<"This my Cmake message: \n";
	os<<this->message<<'\n';
	return os;
}