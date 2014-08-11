#include "Event.h"

Event::Event(const std::string& openingTag, const string& message)
	: Option(message),
	mOpeningTag(openingTag) {
}

Event::~Event() {
}

void Event::start() {
	std::cout << mMessage << std::endl;
}