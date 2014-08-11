#ifndef EVENT_H
#define EVENT_H

#include <iostream>
#include <string>
#include <vector>

#include "Option.h"

using std::string;

class Event : public Option {
public:
	Event(const std::string& openingTag, const string& message);
	~Event();

	void start();

private:
	string mOpeningTag;
};

#endif // EVENT_H