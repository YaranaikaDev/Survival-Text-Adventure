#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// Displays a list of valid inputs and their descriptions
void Commands()
{
    cout << endl;
    cout << " Commands" << endl;
    cout << "v : view commands" << endl;
    cout << "x : quit game" << endl;
    cout << endl;
}

void InvalidInput(string selectionOper)
{
    cout << "'" << selectionOper << "' is not a valid command" << endl;
    cout << "Enter 'v' to view a list of valid commands\n" << endl;
}

main()
{
    // Display game title screen
    cout << "                            *****  ***   * *  *****" << endl;
    cout << "                            *     *   * * * * *    " << endl;
    cout << "                            * *** ***** * * * ***  " << endl;
    cout << "                            *   * *   * *   * *    " << endl;
    cout << "                            ***** *   * *   * *****" << endl;
    
    // Display possible inputs to player
    cout << endl << endl;
    cout << "Enter 'v' to view a list of valid commands\n" << endl;
    
    string selectionOper;    // Operator for selecting event options, viewing credits, and exiting the game
    // Prompt user for a course of action
    while (selectionOper != "x")
    {
        cin >> selectionOper;
        switch (selectionOper[0])
        {
            case 'v':
                Commands();
                break; 
            case 'x':
                if (selectionOper == "x")
                    break;
            default:
                InvalidInput(selectionOper);
                break;
                
        }
    }
    
    // Enter loop
    
    return 0;
}