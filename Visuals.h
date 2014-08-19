#ifndef GUARD_Visuals
#define GUARD_Visuals

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

void title();		// Display game logo and title screen
void inputText();	// Notify user that an input is needed to continue
void commandList();	// Displays a list of valid inputs
void invalidInput(std::string selection_oper);	// Notify user that their last input was not accepted
void creditDisplay(std::vector<std::string> programmers, std::vector<std::string> writers);		// Display a list of the people involved in working various parts of the game

#endif