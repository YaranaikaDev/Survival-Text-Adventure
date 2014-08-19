#include "stdafx.h"		// Required by VS
#include "Credits.h"
#include "Visuals.h"
using std::vector;		using std::string;

// Display a list of the people involved in working various parts of the game
void credits()
{
	vector<string> programmers;
	programmers.push_back("King_Boo");
//	programmers.push_back("Jakkarra");		Commented until contributes
//	programmers.push_back("Ophemancer");	Commented until contributes

	vector<string> writers;
	writers.push_back("Kilted_Kaboodle");
//	writers.push_back("Penguinsaver");		Commented until contributes
//	writers.push_back("Reldio");			Commented until contributes
//	writers.push_back("Gobra");				Commented until contributes

	creditDisplay(programmers, writers);	// Displays credits
}