#include "stdafx.h"		// Required by VS
#include "Inputs.h"
#include "Visuals.h"
using std::cin;		using std::string;

inputVars InputVars;

// User chooses whether to view credits, begin the game, or exit the game
void menuCommand(string& termination_oper)
{
	inputText();	// Tell user to input a value
	cin >> InputVars.selection_oper;
	switch (InputVars.selection_oper[0])
	{
		case 'v':
			commandList();
			break;
		case 'x':
			if (InputVars.selection_oper == "x")
				break;
		default:
			invalidInput(InputVars.selection_oper);		// Notify user that their last input was not accepted
			break;
	}
	termination_oper = InputVars.selection_oper;
}