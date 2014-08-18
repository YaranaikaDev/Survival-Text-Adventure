#include "stdafx.h"		// Required by VS
#include "Visuals.h"
using std::cout;		using std::endl;
using std::string;

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
	cout << "x : quit game" << endl;
	cout << endl;
}

// Notify user that their last input was not accepted
void invalidInput(string selection_oper)
{
	cout << "'" << selection_oper << "' is not a valid command" << endl;
	cout << "Enter 'v' to view a list of valid commands\n" << endl;
}