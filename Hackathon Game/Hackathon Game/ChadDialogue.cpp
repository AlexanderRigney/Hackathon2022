#include "Header.h"
#include <SFML/Graphics.hpp>

int ChadgetNextDialogue(Friend Chad, stats Character)
{
	int depth = Chad.getDepth();
	int relationship = Chad.GetFriendshipLevel();
	int choice = 0;
	if (depth == 0  && relationship == 0)
	{
		//Event 1: GYM
		cout << "[Narration] While you get your first glimpse at the equipment provided, one of the most fit men in the room is quick to notice your arrival" << endl;
		cout << "???: Hey, bro. I don't think I've seen you in the gym before. Want me to show you around?" << endl;
		cout << "1) Sure | 2) No thanks" << endl;

		cin >> choice;
		while (choice < 1 || choice > 2)
		{
			cin >> choice;
			cout << "Bro, what'd you say?" << endl;
		}
		if (choice == 1)
		{
			cout << "???: Alright, bro! Always happy to show someone what the gym's packing. Name's Chad, by the way." << endl;
			cout << "[Narration] Chad quite confidently shows you to each piece of equipment in the gym, giving you a clear idea of what machine is good for." << endl;

		}
		else
		{
			cout << "Aw man. Alright, then. Have fun with your workout, bro. If you change your mind, ask for someone to point you to Chad." << endl;
			cout << "[Narration] He leaves you to figure out the equipment in the gym by yourself, which you only have moderate success with." << endl;

		}
		Chad.SetDepth(Chad.getDepth() + 1);
		return 0;
	}
	else if (depth == 1 && relationship == 0)
	{
		//Event 2: GYM
		cout << "[Narration] Entering the gym again, you have some time to yourself before a familar figure approaches you." << endl;
		cout << "Chad: Hey, bro. Sorry to bother you, but can you help me find my water bottle? I lost track of it while working out." << endl;

		cout << "1) Sure, I'll help" << endl;
		cout << "2) Sorry, no can do. Good luck with finding it though." << endl;
		cout << "3) Ha, no. Look for it yourself" << endl;

		cin >> choice;
		while (choice < 1 || choice > 3)
		{
			cin >> choice;
			cout << "Chad: Huh. What'd you say, bro?" << endl;
		}
		if (choice == 1)
		{
			cout << "Chad: Thanks, bro! Knew I could count on you to lend a hand." << endl;
			cout << "[Narration] With your combined efforts, it doesn't take long to locate Chad's water bottle. He seems quite happy that you helped." << endl;
			Chad.SetFriendshipLevel(1);

		}
		else if (choice == 2)
		{
			cout << "Chad: Shucks. Thanks for the good luck, I guess." << endl;
			cout << "[Narration] It took Chad a while, but it looks like your wish for him to have good luck paid off, as he found his water bottle after some persistent searching." << endl;

		}
		else
		{
			cout << "Chad: Bro, you don't need to be rude about it. Guess I will though if you're going to be a prick about it." << endl;
			cout << "[Narration] Chad walks off with a disappointed glare, off to look for his water bottle. Clearly, you didn't care enough to figure out if he found it." << endl;
		}
		Chad.SetDepth(Chad.getDepth() + 1);
		return 0;
	}
	else if(depth == 2 && relationship == 0)
	{
		//Event 3: GYM
		cout << "[Narration] It was pretty late at night, but you decided to do a late night gym work out anyways. The Chinook's gym was lit up in the distance." << endl;
		cout << "Chad: Yo? Bro! &s is that you? How have you been? Wanna go get your grid on together? I really need to work on my arms, been working legs mostly this week." << Character.GetName() << endl;

		cout << "1) Of course dude! We're a great team." << endl; //access if at least 1/2 relationship
		cout << "2) Yeah, that sounds like fun." << endl;
		cout << "3) Not right now... I want to work out by myself this time." << endl;
		//cout << "3) No. Not really..." << endl; //rudeish?
		cout << "4) Fuck no. We aren't exactly 'friends', you should just go and fuck off." << endl; // 0 relationship access


		//DO THIS LATER (LIKE IMPLEMENT IT)
		cin >> choice;
		while (choice < 1 || choice > 4)
		{
			cin >> choice;
			cout << "Chad: Huh. What'd you say, bro?" << endl;
		}
		if (choice == 1)
		{
			cout << "Chad: YEAH! Bro this is gonna be like so awesome. Let's go!" << endl;
			cout << "[Narration] With that comment you both walked over to the gym. You two stayed up until closing time and with that you got some sweet, sweet arm gains." << endl; //bonus to athletic trait
			Chad.SetFriendshipLevel(3);
		}
		else if (choice == 2)
		{
			cout << "Chad: Nice bro. This is gonna be fun! Let's get these gains." << endl;
			cout << "[Narration] You and Chad headed into the gym. Chad teaching you how to properly work out your arms, you improved your athletics bit by bit. " << endl; //decent gains less than choice 1

		}
		else if (choice == 3)
		{
			cout << "Chad: ... that's understandable bro, good luck working out." << endl;
			cout << "[Narration] Chad walks off with a disappointed stare, he goes to the bench presses. You make your way over to the tread mill to try and work out some legs." << endl; //chance of gaining a point for athletic
		}
		else 
		{
			cout << "Chad: What the fuck man?. Look if you didn't want to work out with me you could just say no and leave. You're being an ass." << endl; //idk is that chad like
			cout << "[Narration] Chad walks off with a disappointed and angry glare, not even bothering going to this gym to even try and tolerate your insufferable ass." << endl;
		}
		Chad.SetDepth(Chad.getDepth() + 1);

		
		return 0;
	}
		else if(depth == 3 && relationship == 0)
	{
		//Event 4: 
		cout << "[Narration] " << endl;
		cout << "Chad: " << Character.GetName() << endl;

		cout << "1) Of course dude! We're a great team." << endl; //access if at least 1/2 relationship
		cout << "2) Yeah, that sounds like fun." << endl;
		cout << "3) Not right now... I want to work out by myself this time." << endl;
		//cout << "3) No. Not really..." << endl; //rudeish?
		cout << "4) Fuck no. We aren't exactly 'friends', you should just go and fuck off." << endl; // 0 relationship access


		//DO THIS LATER (LIKE IMPLEMENT IT)
		cin >> choice;
		while (choice < 1 || choice > 4)
		{
			cin >> choice;
			cout << "Chad: Huh. What'd you say, bro?" << endl;
		}

		//if (choice == 1)
		//{
		//	cout << "Chad: YEAH! Bro this is gonna be like so awesome. Let's go!" << endl;
		//	cout << "[Narration] With that comment you both walked over to the gym. You two stayed up until closing time and with that you got some sweet, sweet arm gains." << endl; //bonus to athletic trait
		//	Chad.SetFriendshipLevel(3);
		//}
		//else if (choice == 2)
		//{
		//	cout << "Chad: Nice bro. This is gonna be fun! Let's get these gains." << endl;
		//	cout << "[Narration] You and Chad headed into the gym. Chad teaching you how to properly work out your arms, you improved your athletics bit by bit. " << endl; //decent gains less than choice 1

		//}
		//else if (choice == 3)
		//{
		//	cout << "Chad: ... that's understandable bro, good luck working out." << endl;
		//	cout << "[Narration] Chad walks off with a disappointed stare, he goes to the bench presses. You make your way over to the tread mill to try and work out some legs." << endl; //chance of gaining a point for athletic
		//}
		//else 
		//{
		//	cout << "Chad: What the fuck man?. Look if you didn't want to work out with me you could just say no and leave. You're being an ass." << endl; //idk is that chad like
		//	cout << "[Narration] Chad walks off with a disappointed and angry glare, not even bothering going to this gym to even try and tolerate your insufferable ass." << endl;
		//}
		Chad.SetDepth(Chad.getDepth() + 1);

		
		return 0;
	}

}
