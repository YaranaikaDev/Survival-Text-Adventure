#include "stdafx.h"		// Required by VS
#include "Visuals.h"
using std::cout;		using std::endl;
using std::string;		using std::vector;

// Display game logo and title screen
void title()
{
	cout << "                            *****  ***   * *  *****" << endl;
	cout << "                            *     *   * * * * *    " << endl;
	cout << "                            * *** ***** * * * ***  " << endl;
	cout << "                            *   * *   * *   * *    " << endl;
	cout << "                            ***** *   * *   * *****" << endl;
	cout << "                              A game by Yaranaika  " << endl;
}

// Notify user that an input is needed to continue
void inputText()
{
	cout << "selection: ";
}

// Displays a list of valid inputs
void commandList()
{
	cout << endl;
	cout << " Commands" << endl;
	cout << "v : view commands" << endl;
	cout << "v : credits" << endl;
	cout << "x : quit game" << endl;
	cout << endl;
}

// Notify user that their last input was not accepted
void invalidInput(string selection_oper)
{
	cout << "'" << selection_oper << "' is not a valid command" << endl;
	cout << "Enter 'v' to view a list of valid commands\n" << endl;
}

// Display a list of the people involved in working various parts of the game
void creditDisplay(vector<string> programmers, vector<string> writers)
{
	cout << endl;
	cout << "    Programmers" << endl;
	for (int i = 0; i != programmers.size(); ++i)
		cout << programmers[i] << endl;
	cout << endl;
	cout << "    Writers" << endl;
	for (int i = 0; i != writers.size(); ++i)
		cout << writers[i] << endl;
	cout << endl;
}