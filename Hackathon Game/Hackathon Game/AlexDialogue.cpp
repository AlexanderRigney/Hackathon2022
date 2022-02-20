#include "Header.h"

int AlexgetNextDialogue(Friend Alex, stats Character)
{
	int depth = Alex.getDepth();
	int relationship = Alex.GetFriendshipLevel();
	string string;
	int choice = 0;
	if(depth == 0 && relationship == 0)
	{
		// Meeting Space: Dorm

		cout << "Narrator: It's your first day in Washington State University.  School starts next week. You just got to your dorm room moving in, ..." << endl;
		cout << "wow .. it's ... fine .. a little smaller than you expected ... but it works. You wonder where your roommate is..." << endl;
		//cout << "MC: Yooo, this room is really nice. ... *looks around*" << endl; //animation
		//cout <<	"I wonder where my roomate is..." << endl;  //pause
		cout << "???: *walks in* Oh hey dude, you must be my roommate. I'm Alex." << endl;
		cout << "Alex: What's your name?" << endl;
		
		cin >> string;
		Character.SetName(string);

		cout << "Alex: Sick name bro.. Seems like we're going to be roomming" << endl;
		cout << "together from now on. Have you seen this school before enrolling?" << endl; //slight pause
		cout << "No..? Yeah.. I have been here before. My older brother used to go here " << endl;
		cout << "so I like know my way around a bit. I can show you around if you like?" << endl;
		
		cout << "1) Yeah dude sounds fun!" << endl;
		cout << "2) I guess..." << endl;
		cout << "3) Nah I think I can handle it myself" << endl;
		cout << "4) lol fuck no" << endl;
		
		cin >> choice;
		while (choice < 1 || choice > 4)
		{
			cin >> choice;
			cout << "What? I didn't quite hear you." << endl;
		}
		if (choice == 1)
		{
			cout << "Really? Sweet we could go after you finish unpacking. Lemme help you with that. Oh there's this sweet soup shop downtown." << endl;
			cout << "They have the sickest fits." << endl;
			Alex.SetFriendshipLevel(1);
			//response to inital dialogue
			//add "credits" like extra narration on effects
		}
		else if (choice == 2)
		{
			cout << "...Are you sure? I mean it takes a while to unpack anyways.. so I guess if you finish in a few hours we can." << endl;
			Alex.SetFriendshipLevel(1); //gets harder as it goes along so it won't be as easy to get to a new level

			//add "credits" like extra narration on effects
		}
		else if (choice == 3)
		{
			cout << "Ok.. Well I'll leave you to unpack then." << endl;
			//add "credits" like extra narration on effects
		}
		else if (choice == 4)
		{
			cout << "...fine geez.. fuck you too i guess." << endl;
			//add "credits" like extra narration on effects
		}

		Alex.SetDepth(Alex.getDepth() + 1);
		return 0;
	}
	else if (depth == 1 && relationship == 0)
	{
		// second meeting right before class
		cout << "Narrator: And so it's time for your next class ... History 105 ..." << endl;
		cout << "Alex: ouch!... oh." << endl;
		//Worst Option from e1
		//(mutters - like making font smaller if you can lol)
		cout << "Alex: it's you... (mutters) it's this dickhead." << endl; 
		
		//Bad and neutral option
		cout <<	"Alex: hey. I didn't see you there, my bad. How was class?" << endl; //idk change prolly
		
		//Best option
		cout << "Alex: oops, sorry I didn't mean to run into, .. but I'm glad I did, I was wondering would you like to" << endl;
		cout << "Alex: grab dinner together around 6:00 after classes?" << endl;
		
		
		//add "credits" like extra narration on effects
		//cout << "Alex: Sick name bro.. Seems like we're going to be rooming" << endl;
		//cout << "together from now on. Have you seen this school before enrolling?" << endl; //slight pause
		//cout << "No..? Yeah.. I have been here before. My older brother used to go here " << endl;
		//cout << "so I like know my way around a bit. I can show you around if you like?" << endl;
		return 0;

	}
	else
	{
		return 0;
	}
}