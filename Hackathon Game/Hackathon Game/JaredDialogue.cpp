#include "Header.h"
#include <SFML/Graphics.hpp>

int JaredGetNextDialogue(Friend Jared, stats Character)
{
	int choice = 0, relationship = Jared.GetFriendshipLevel(), depth = Jared.getDepth(); //, talleyRelationship ;
	string Yes = "Yes";
	string No = "No";
	string input = " ";
	relationship = 0;
	if (depth == 0 && relationship == 0) //First interaction with Jared
	{  //Jared appears here
		cout << "Hey dude, I'm Jared. What's your name? \n" << Character.GetName() << "? K" <<endl;
		cout << "You ready for today? " << endl;
		cout << "1) Yep \n2) Nope" << endl;
		while (choice < 1 || choice > 2){
			cin >> choice;
			if (choice < 1 || choice > 2)
			{
				cout << "Uh dude, I didn't understand what you said" << endl;
			}
		}
		if (choice == 1)
		{
			cout << "Well that makes one of us\n" << endl;
		}
		else if (choice == 2)
		{
			cout << "Heh, same dude.\n" << endl;
		}
		cout << "I just hope that the professor has mercy on us, I heard this class can be rough," << endl;
		cout << "so uh, mind if we swap numbers? I'm hoping you can help with studying'" << endl;
		cout << "1) Sure thing \n2) Nope" << endl;
		while (choice < 1 || choice > 2)
		{
			cin >> choice;
			if (choice < 1 || choice > 2)
			{
				cout << "Uh dude, I didn't understand what you said" << endl;
			}
		}
		if (choice == 1)
		{
			cout << "Sweet, dude! I appreciate the help" << endl;
			Jared.changeFriendshipLevel(1);
		}
		else if (choice == 2)
		{
			cout << "Ouch \nWell I'll give you my number anyways, in case you change your mind" << endl;
		}
		Character.SetKnowledge(Character.GetKnowledge() + 1);
		Jared.SetDepth(Jared.getDepth() + 1); 
		return 1;
	} 
	else if (depth > 1 || depth < 4)
	{
		//cout << "Hey " << character.getName() <<endl;
		if (relationship != 0){
			cout << "Good to see you again" << std::endl;
		}
		cout << "Have you been understanding stuff in your classes? I feel like I'm barely getting in anything sometimes"  << std::endl;
		while (choice < 1 || choice > 2)
		{
			cin >> choice;
			if (choice < 1 || choice > 2)
			{
				cout << "Uh dude, I didn't understand what you said" << endl;
			}
		}
		if (choice == 1)
		{
			cout << "Then I'm guessing you're smarter than I am." << endl;
			
		}
		else if (choice == 2)
		{
			cout << "I'm in a similar boat. I guess I'm gonna have to head to the library later to study.'" << endl;
			
		}
		if (relationship == 1) {
		cout << "So, uh, would you be willing to get together to study sometime soon? I kinda need help in this subject" << endl;
		cout <<" 1) Sure thing dude!\n2) No way" << endl;			
		while (choice < 1 || choice > 2) {
			cin >> choice;
			if (choice < 1 || choice > 2)
				{
				cout << "Uh dude, I didn't understand what you said" << endl;
				}
			}
			if (choice == 1)
			{
				cout << "Great! Thank you so much! I appreciate it!" << endl;
				Jared.changeFriendshipLevel(1);
			}
			else if (choice == 2)
			{
				cout << "Oh, ok then. Well uh. I guess I'll find someone else to help me out'" << endl;
			}
			cout << "Oh, class is starting, I guess we'll talk sometime later then" << endl;
			Character.SetKnowledge(Character.GetKnowledge() + 1);
			Jared.SetDepth(Jared.getDepth() + 1);
			return 1;
		}
		else if (relationship == 0)
		{
		cout << "So, I know you didn't want to share numbers, but I really need help with this subject," << endl;
		cout << "and I was wondering if you'd be willing to help me with it'" << endl;
		cout <<" 1) Sure thing \n2) No way" << endl;
			while (choice < 1 || choice > 2) 
			{
				cin >> choice;
				if (choice < 1 || choice > 2)
				{
					cout << "Uh dude, I didn't understand what you said" << endl;
				}
			}
			if (choice == 1)
			{
				cout << "Great! Thank you so much! I really appreciate it!" << endl;
				Jared.changeFriendshipLevel(1);
			}
			else if (choice == 2)
			{
				cout << "Oh. Well uh. I guess I'll find someone else to help me out'" << endl;
			}
			Character.SetKnowledge(Character.GetKnowledge() + 1);
			Jared.SetDepth(Jared.getDepth() + 1);
			return 1;
		}
	}
	else
	{
		return 0;
	}
} 

