#include "Option.h"

Option::Option(const string& message)
	: mMessage(message) {
}

Option::Option(const string& name, const string& message, const string& outcomeTag)
	: mName(name),
	mMessage(message),
	mOutcomeTag(outcomeTag) {
}

Option::Option(const string& name, const string& message, const string& outcomeTag,
	const string& closingTag)
	: mName(name),
	mMessage(message),
	mOutcomeTag(outcomeTag),
	mClosingTag(closingTag) {
}

Option::~Option() {
	mChildOptions.clear();
}

void Option::displayMessage() {
	std::cout << mMessage << std::endl;
}

void Option::registerOption(Option* o) {
	mChildOptions.push_back(o);
}
