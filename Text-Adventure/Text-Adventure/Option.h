#ifndef OPTION_H
#define OPTION_H

#include <vector>
#include <string>

using std::vector;
using std::string;

class Option {
public:
	Option(const string& message);
	Option(const string& name, const string& message, const string& outcomeTag);
	Option(const string& name, const string& message, const string& outcomeTag,
		const string& closingTag);
	~Option();

	void registerOption(Option* o);

protected:
	string mMessage;

private:
	float outcomeProbability;

	string mName;
	string mOutcomeTag;
	string mClosingTag;

	vector<Option*> mChildOptions;
};


#endif // OPTION_H