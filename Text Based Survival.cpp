#include "stdafx.h"		// Required by VS
#include "Visuals.h"
#include "Inputs.h"

int _tmain(int argc, _TCHAR* argv[])
{
	title();		// Display game logo and title screen
	commandList();	// Displays a list of valid inputs
	std::string termination_oper;
	while (termination_oper != "x")
	{
		menuCommand(termination_oper);	// User chooses whether to view credits, view list of valid commands, or exit the game
	}
	return 0;
}