#ifndef GUARD_Visuals
#define GUARD_Visuals

#include<iostream>
#include<string>

void title();		// Display game logo and title screen
void inputText();	// Notify user that an input is needed to continue
void commandList();	// Displays a list of valid inputs
void invalidInput(std::string selection_oper);	// Notify user that their last input was not accepted
#endif