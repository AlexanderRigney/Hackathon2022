#include "Header.h"

int KylegetNextDialogue(Friend Kyle, stats Character)
{
	int depth = Kyle.getDepth();
	int relationship = Kyle.GetFriendshipLevel();
	int choice = 0;
	if (depth == 0 && relationship == 0)
	{
		cout << "Hey Dude! You here for the keg stand? No? That's fine little dude I'm sure you'll do it eventually." << endl;
		cout << "Anyway " << Character.GetName() <<" what brings you here ? " << endl;
		cout << "1. " << endl;
		cout << "2. " << endl;
		while (choice < 1 || choice > 2)
		{
			cin >> choice;
			cout << "Bro, what the hell did you say? It's a little loud here." << endl;
		}
		if (choice == 1)
		{
			cout << "First Dialogue Option (Positive)" << endl;
			//response to inital dialogue
		}
		else
		{
			cout << "Second Dialogue Option (Negative)" << endl;
		}

		Kyle.SetDepth(Kyle.getDepth() + 1);
		return 0;
	}
	else if (depth > 0 && relationship == 0)
	{
		// second meeting 
		return 0;
	}
	else
	{
		return 0;
	}
}