#ifndef _MESSAGE_H
#define _MESSAGE_H

#include <iostream>
#include <string>

class Message
{
public:
	Message(const std::string& m): message(m) {}

	friend std::ostream& operator<<(std::ostream& os, const Message& obj) {
		return obj.printObject(os);
	}
private:
	std::string message;
	std::ostream& printObject(std::ostream& os) const;
};

#endif //_MESSAGE_H