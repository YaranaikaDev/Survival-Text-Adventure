#include "Event.h"
#include "Option.h"

#include <fstream>

int main(int argc, char* argv []) {

	// IN THE ACTUAL THING, TEXT WILL NEED BE PASSED AS AN ARGUMENT TO OPTION MODULES - IT WILL BE
	// BETTER TO LOAD FROM FILE.
	// THIS IS A TEST, IN THE ACTUAL THING WE'LL LOAD EVENTS AND OPTIONS FROM FILES
	// EVENTS AND OPTIONS NEED AN ID SYSTEM. 
	// I THINK WE CAN IMPLEMENT THIS IN A VERY SIMPLE WAY BY LOADING ALL EVENTS AND OPTIONS
	// FROM A FILE AT RUNTIME AND THEN CONNECTING THEM TOGETHER BEFORE THE PLAYER BEGINS THEIR GAME.

	// I REMOVED OPTION'S DISPLAY MESSAGE FUNCTIONS FOR NOW. TO OUTPUT TEXT FOR EACH NEW OPTION,
	// IMPLEMENT A FUNCTION CALLED DISPLAY MESSAGE OR SOMETHING AND COUT THE MESSAGE MEMBER STRING.
	// EVENT WILL BE ABLE TO INVOKE THIS FUNCTION TOO BECAUSE IT INHERITS OPTION - WHERE YOU SHOULD
	// HAVE MADE THAT OUTPUT FUNCTION

	// ALSO, CAREFUL MAKING LINES LONGER THAN 80 CHARACTERS - WE'LL GET WEIRD LINE CUTOFFS OTHERWISE

	// test event
	Event* e = new Event(
		"[DAY]\n",
		"Walking through the forest, you hear a twig snap behind you.\n"
		"Turning towards the noise you see a flash of brown dart through\n"
		"the trees. Startled, you stand still for a moment, giving the animal\n"
		"ample time to get further away. Looking to the ground you notice that\n"
		"there are blood stains.\n");

	// test option1
	Option* o1 = new Option(
		"Following the blood trail you quickly find its end. You don’t see\n"
		"anything in your immediate view but you do hear a something panting nearby.\n");

	// test option2
	Option* o2 = new Option(
		"Scouring the area you find a dead rabbit.\n"
		"It\'s been partially eaten but there appears to be some meat left.\n"
		"It\'s unclear if it was killed by the animal you just saw\n"
		"and you can\'t really tell how long it’s been lying out here.\n");

	// test option3
	Option* o3 = new Option(
		"While the prospect of a potential meal is enticing, you decide\n"
		"it\'s better to keep moving.\n");

	// This makes the options show up for our event
	e->registerOption(o1);
	e->registerOption(o2);
	e->registerOption(o3);

	// You can register options for options like so:
	o1->registerOption(o2);
	// .. which will be used for options within an option - kinda like a linked list


	// This should ideally lead us through the entire event, including all registered options
	// until the next event. We should return back to main scope upon end of each event, rather than 
	// invoking e->start for further events while in the scope of the below event - we can do this
	// using an infinite loop.
	e->start();


	// This will obviously be cleaner once we load from files into arrays of event/option objects
	delete e;
	delete o1;
	delete o2;
	delete o3;

	// This is for debug only, should be removed for release builds
	system("pause");
	return 0;
}