#include "stdafx.h"		// Required by VS
#include "Inputs.h"
#include "Visuals.h"
#include "Credits.h"
using std::cin;		using std::string;

inputVars InputVars;

// User chooses whether to view credits, view list of valid commands, or exit the game
void menuCommand(string& termination_oper)
{
	inputText();	// Tell user to input a value
	cin >> InputVars.selection_oper;
	switch (InputVars.selection_oper[0])
	{
		case 'v':	// Display list of valid inputs
			commandList();
			break;
		case 'c':	// Display credits
			credits();
			break;
		case 'x':	// Exit game
			if (InputVars.selection_oper == "x")
				break;
		default:	// Notify user that their last input was not accepted
			invalidInput(InputVars.selection_oper);
			break;
	}
	termination_oper = InputVars.selection_oper;
}