#include "Header.h"

#include <fstream>
#include <iostream>
#include <ostream>
#include <string>
#include <SFML/Graphics.hpp>

#include "io.h"
#include "direct.h"
#include "time.h"
//#include "SFML/Graphics.hpp"

//std::string get_current_dir() {
//   char buff[FILENAME_MAX]; //create string buffer to hold path
//   GetCurrentDir( buff, FILENAME_MAX );
//   string current_working_dir(buff);
//   return current_working_dir;
//}

/*
	Friends: 
		Chad - Athletes - Gym ()
		Jared - Peer - (Study) - Classroom
		Kyle - Greek Row - Fraternity - Frat house
		Erin - Choir (Overachiever) - Music Room
		Alex - Roomate (Gender Confusion) - Dorm
	
	Locations:
		Gym
		Classroom
		Frat house
		Music Room
		Dorm

	Potential Dialogue:
		Alex - Roommate - First encounter(Dorm):
			"TBD"
		Jared -  Peer - First encounter(Classroom):
			"TBD"
		Kyle - Greek Row - First encounter(Frat House):
			"TBD"
		Chad - Athlete - First encounter(Gym):
			"TBD"
		Erin - Choir - First encounter(Music room):
			"TBD"


*/


//
int main(int arg, char** argv) 
{
	int Day = 0;
	bool AlexToken = false;
	bool JaredToken = false;
	int ChadToken = 0;
	bool KyleToken = false;

	Friend Alex("Alex", 0);
	Friend Jared("Jared", 0); 
	Friend Kyle("Kyle", 0); 
	Friend Chad("Chad", 0);
	Friend Erin("Erin", 0);

	location Gym("Gym", Chad);
	location Classroom("Classroom", Jared);
	location FratHouse("Frat House", Kyle);
	location MusicRoom("Music Room", Erin);
	location Dorm("Dorm", Alex);

	//srand(time(NULL));	
	//int day = 0; (Day system before end of the game. However long the game will run for)
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Works");
	
	//sf::Event event;

	sf::Texture ChatBoxTexture;
	if (!ChatBoxTexture.loadFromFile("ChatBox.png"))
	{
		cout << "The Chat box texture did not load" << endl;
	}
	sf::Sprite ChatBoxSprite;
	ChatBoxSprite.setTexture(ChatBoxTexture);
	ChatBoxSprite.setScale(sf::Vector2f(1.8f, 2.f));
	ChatBoxSprite.setPosition(sf::Vector2f(195.0f, 390.0f));

	// Character Sprites
	sf::Texture EyeTexture;
	if (!EyeTexture.loadFromFile("EdgyEye.png", sf::IntRect(0, 0, 600, 600)))
	{
		cout << "The Eye file did not load" << endl;
	}
	sf::Sprite EyeSprite;
	EyeSprite.setTexture(EyeTexture);

	sf::Texture JaredTexture;
	if (!JaredTexture.loadFromFile("Jared.png"))
	{
		cout << "The jared file did not load" << endl;
	}
	sf::Sprite JaredSprite;
	JaredSprite.setTexture(JaredTexture);

	sf::Texture ChadTexture;
	if (!ChadTexture.loadFromFile("Chad.png"))
	{
		cout << "The Chad file did not load" << endl;
	}
	sf::Sprite ChadSprite;
	ChadSprite.setTexture(ChadTexture);

	sf::Texture KyleTexture;
	if (!KyleTexture.loadFromFile("Kyle.png"))
	{
		cout << "The Kyle file did not load" << endl;
	}
	sf::Sprite KyleSprite;
	KyleSprite.setTexture(KyleTexture);
	

	//Backgrounds
	sf::Texture AlleyTexture;
	if (!AlleyTexture.loadFromFile("alley.png"))
	{
		cout << "The alley file did not load" << endl;
	}
	sf::Sprite AlleySprite;
	AlleySprite.setTexture(AlleyTexture);
	AlleySprite.setScale(sf::Vector2f(2.f, 2.f));

	sf::Texture GymTexture;
	if (!GymTexture.loadFromFile("Gym.png"))
	{
		cout << "The Gym file did not load" << endl;
	}
	sf::Sprite GymSprite;
	GymSprite.setTexture(GymTexture);
	GymSprite.setScale(sf::Vector2f(0.6f, 0.6f));

	sf::Texture FratTexture;
	if (!FratTexture.loadFromFile("house.png"))
	{
		cout << "The Frat file did not load" << endl;
	}
	sf::Sprite FratSprite;
	FratSprite.setTexture(FratTexture);

	sf::Texture ClassTexture;
	if (!ClassTexture.loadFromFile("Classroom.png"))
	{
		cout << "The Classroom file did not load" << endl;
	}
	sf::Sprite ClassSprite;
	ClassSprite.setTexture(ClassTexture);


	sf::Font amatic;
	if (!amatic.loadFromFile("Amatic-Bold.ttf"))
	{
		cout << "Font File did not load" << endl;
	}

	//Yes Button
	sf::RectangleShape YesButton(sf::Vector2f(200.f, 200.f));
	YesButton.setPosition(sf::Vector2f(0.f, 400.f));
	YesButton.setFillColor(sf::Color::Magenta);
	sf::Text YesButtonText;
	YesButtonText.setFont(amatic);
	YesButtonText.setString("Yes");
	YesButtonText.setCharacterSize(150);
	YesButtonText.setFillColor(sf::Color::Black);
	YesButtonText.setPosition(sf::Vector2f(50.f, 400.0f));

	//No Button
	sf::RectangleShape NoButton(sf::Vector2f(200.f, 200.f));
	NoButton.setPosition(sf::Vector2f(600.f, 400.f));
	NoButton.setFillColor(sf::Color::Magenta);
	sf::Text NoButtonText;
	NoButtonText.setFont(amatic);
	NoButtonText.setString("No");
	NoButtonText.setCharacterSize(150);
	NoButtonText.setFillColor(sf::Color::Black);
	NoButtonText.setPosition(sf::Vector2f(650.f, 400.0f));

	//Continue Button
	sf::RectangleShape ContinueButton(sf::Vector2f(200.f, 200.f));
	ContinueButton.setPosition(sf::Vector2f(600.f, 400.f));
	ContinueButton.setFillColor(sf::Color::White);
	sf::Text ContinueButtonText;
	ContinueButtonText.setFont(amatic);
	ContinueButtonText.setString("No");
	ContinueButtonText.setCharacterSize(150);
	ContinueButtonText.setFillColor(sf::Color::Black);
	ContinueButtonText.setPosition(sf::Vector2f(650.f, 400.0f));

	//Alex Button
	sf::RectangleShape AlexButton(sf::Vector2f(300.f, 300.f));
	//AlexButton.setPosition(sf::Vector2f(0.f, 0.f));
	AlexButton.setFillColor(sf::Color::Black);
	sf::Text AlexButtonText;
	AlexButtonText.setFont(amatic);
	AlexButtonText.setString("Vist Alex");
	AlexButtonText.setCharacterSize(150);
	AlexButtonText.setFillColor(sf::Color::White);
	AlexButtonText.setPosition(sf::Vector2f(50.f, 50.f));

	//Jared Button
	sf::RectangleShape JaredButton(sf::Vector2f(300.f, 300.f));
	//JaredButton.setPosition(sf::Vector2f(300.f, 0.f));
	JaredButton.setFillColor(sf::Color::Red);
	sf::Text JaredButtonText;
	JaredButtonText.setFont(amatic);
	JaredButtonText.setString("Vist Alex");
	JaredButtonText.setCharacterSize(150);
	JaredButtonText.setFillColor(sf::Color::Black);
	JaredButtonText.setPosition(sf::Vector2f(50.f, 50.f));

	//Chad Button
	sf::RectangleShape ChadButton(sf::Vector2f(300.f, 300.f));
	//ChadButton.setPosition(sf::Vector2f(0.f, 300.f));
	ChadButton.setFillColor(sf::Color::Blue);
	sf::Text ChadButtonText;
	ChadButtonText.setFont(amatic);
	ChadButtonText.setString("Vist Alex");
	ChadButtonText.setCharacterSize(150);
	ChadButtonText.setFillColor(sf::Color::Black);
	ChadButtonText.setPosition(sf::Vector2f(50.f, 50.f));

	//Kyle Button
	sf::RectangleShape KyleButton(sf::Vector2f(300.f, 300.f));
	//KyleButton.setPosition(sf::Vector2f(300.f, 300.f));
	KyleButton.setFillColor(sf::Color::Green);
	sf::Text KyleButtonText;
	KyleButtonText.setFont(amatic);
	KyleButtonText.setString("Vist Alex");
	KyleButtonText.setCharacterSize(150);
	KyleButtonText.setFillColor(sf::Color::Black);
	KyleButtonText.setPosition(sf::Vector2f(50.f, 50.f));

	//Sleep Button
	sf::RectangleShape SleepButton(sf::Vector2f(200.f, 600.f));
	SleepButton.setPosition(sf::Vector2f(600.f, 0.f));
	SleepButton.setFillColor(sf::Color::White);
	sf::Text SleepButtonText;
	SleepButtonText.setFont(amatic);
	SleepButtonText.setString("Go\nTo\nSleep");
	SleepButtonText.setCharacterSize(150);
	SleepButtonText.setFillColor(sf::Color::Black);
	SleepButtonText.setPosition(sf::Vector2f(650.f, 150.f));

	//End Screen
	sf::RectangleShape EndScreen(sf::Vector2f(800.f, 600.f));
	EndScreen.setPosition(sf::Vector2f(0.f,0.f));
	EndScreen.setFillColor(sf::Color::Blue);

	//Lose Text
	sf::Text LoseText;
	LoseText.setFont(amatic);
	LoseText.setString("You\nLose");
	LoseText.setCharacterSize(150);
	LoseText.setFillColor(sf::Color::Black);
	LoseText.setPosition(sf::Vector2f(400.f, 300.f));
	
	//Win Text
	sf::Text WinText;
	WinText.setFont(amatic);
	WinText.setString("You\nWin");
	WinText.setCharacterSize(150);
	WinText.setFillColor(sf::Color::Black);
	WinText.setPosition(sf::Vector2f(400.f, 300.f));

	//Visited Text
	sf::Text VisitedText;
	VisitedText.setFont(amatic);
	VisitedText.setString("You Have Already Visisted This person");
	VisitedText.setCharacterSize(150);
	VisitedText.setFillColor(sf::Color::Black);
	VisitedText.setPosition(sf::Vector2f(400.f, 300.f));

	//Not Visited Text
	sf::Text NotVisitedText;
	NotVisitedText.setFont(amatic);
	NotVisitedText.setString("You Have Not Visited Someone");
	NotVisitedText.setCharacterSize(150);
	NotVisitedText.setFillColor(sf::Color::Black);
	NotVisitedText.setPosition(sf::Vector2f(400.f, 300.f));

	//Chat Text
	sf::Text ChatText;
	ChatText.setFont(amatic);
	ChatText.setCharacterSize(50);
	ChatText.setFillColor(sf::Color::Black);
	ChatText.setPosition(sf::Vector2f(200.f, 425.f));

	//texture.loadFromFile("EdgyEye.png");
	//texture.loadFromFile("Hackathon Game/images/EdgyEye.png"); //Hackathon Game\Hackathon Game
	//sf::Sprite sprite(texture);
	//sf::Image EvilEye;
	//if (!EvilEye.loadFromFile("EdgyEye.png"))
	//{
	//	cout << "File didn't load" << endl;
	//}
	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
			window.clear(sf::Color::Cyan);
			//Backgrounds
			window.draw(GymSprite);
			/*window.draw(AlleySprite);*/
			//Character Sprites
			/*window.draw(EyeSprite);*/
			window.draw(ChadSprite);
			ChadSprite.setPosition(sf::Vector2f(50.0f, 0.0f));

			window.draw(AlleySprite);
			window.draw(EyeSprite);

			//Yes Button
			window.draw(YesButton);
			window.draw(YesButtonText);
			//No Button
			window.draw(NoButton);
			window.draw(NoButtonText);
			//Continue Button
			//window.draw(ContinueButton);
			//window.draw(ContinueButtonText);
			//Chat Box
			window.draw(ChatBoxSprite);
			//window.draw(VisitedText);
			window.draw(ChatText);
			if (ChadToken <1)
			{
				ChatText.setString("You are talking to Alex.\nDo you want to talk to Chad?");
			}
		/*	window.draw(AlexButton);
			window.draw(JaredButton);
			window.draw(ChadButton);
			window.draw(KyleButton);
			window.draw(SleepButton);
			AlexButton.setPosition(0.f, 0.f);
			JaredButton.setPosition(300.0f, 0.f);
			ChadButton.setPosition(0.f, 300.f);
			KyleButton.setPosition(300.f, 300.f);
			SleepButton.setPosition(600.f, 0.0f);*/

			/*while (Day == 0)
			{*/
				if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
				{
					sf::Vector2i localPosition = sf::Mouse::getPosition(window);
					cout << localPosition.x << ", " << localPosition.y << endl;

					//AlexButton.setPosition(0.f, 0.f);
					//if (localPosition.x > 0 && localPosition.x < 300 && localPosition.y > 0 && localPosition.y < 300 && AlexToken == 0)
					//{
					//	//Alex Path
					//	AlexToken++;
					//}
					//else if (localPosition.x > 0 && localPosition.x < 300 && localPosition.y > 0 && localPosition.y < 300 && AlexToken == 1)
					//{
					//	//Visited Alex
					//	VisitedText.setPosition(sf::Vector2f(400.f, 300.f));
					//	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
					//	{
					//		VisitedText.setPosition(sf::Vector2f(1200.f, 1200.f));
					//	}
					//}
					//if (localPosition.x > 300 && localPosition.x < 600 && localPosition.y > 0 && localPosition.y < 300 && JaredToken == 0)
					//{
					//	//Jared Path
					//	JaredToken++;
					//}
					//else if (localPosition.x > 300 && localPosition.x < 600 && localPosition.y > 0 && localPosition.y < 300 && JaredToken == 1)
					//{
					//	//Visited Jared
					//	VisitedText.setPosition(sf::Vector2f(400.f, 300.f));
					//	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
					//	{
					//		VisitedText.setPosition(sf::Vector2f(1200.f, 1200.f));
					//	}
					//}
					//if (localPosition.x > 0 && localPosition.x < 300 && localPosition.y > 300 && localPosition.y < 600 && ChadToken == 0)
					//{
					//	//Chad Path
					//	ChadToken++;
					//}
					//else if (localPosition.x > 0 && localPosition.x < 300 && localPosition.y > 300 && localPosition.y < 600 && ChadToken == 1)
					//{
					//	//Visited Chad
					//	VisitedText.setPosition(sf::Vector2f(400.f, 300.f));
					//	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
					//	{
					//		VisitedText.setPosition(sf::Vector2f(1200.f, 1200.f));
					//	}
					//}
					//if (localPosition.x > 300 && localPosition.x < 600 && localPosition.y > 300 && localPosition.y < 600 && KyleToken == 0)
					//{
					//	//Kyle Path
					//	KyleToken++;
					//}
					//else if (localPosition.x > 300 && localPosition.x < 600 && localPosition.y > 300 && localPosition.y < 600 && KyleToken == 1)
					//{
					//	//Visited Kyle
					//	VisitedText.setPosition(sf::Vector2f(400.f, 300.f));
					//	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
					//	{
					//		VisitedText.setPosition(sf::Vector2f(1200.f, 1200.f));
					//	}
					//}
					//if (localPosition.x > 0 && localPosition.x < 300 && localPosition.y > 0 && localPosition.y < 300 ||
					//	AlexToken == 0 || JaredToken == 0 || ChadToken == 0 || KyleToken == 1)
					//{
					//	//Hasn't visited someone
					//}
					//else if (localPosition.x > 0 && localPosition.x < 300 && localPosition.y > 0 && localPosition.y < 300 &&
					//	AlexToken == 1 && JaredToken == 1 && ChadToken == 1 && KyleToken == 1)
					//{
					//	//Visited all people
					//}
					//else
					//{
					//	cout << "An error with Day 1 has occurred" << endl;
					//}
				}
			//}
			/*while (Day == 1)
			{*/
				if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
				{
					sf::Vector2i localPosition = sf::Mouse::getPosition(window);
					cout << localPosition.x << ", " << localPosition.y << endl;
					//AlexToken = 0, JaredToken = 0, ChadToken = 0, KyleToken = 0;
					//ChadSprite.setPosition(sf::Vector2f(900.0f, 900.0f));
					if (localPosition.x > 0 && localPosition.x < 200 && localPosition.y > 400 && localPosition.y < 600)
					{
						ChadToken++;
						cout << "Button 1 Pressed (yes)" << endl;
						EyeSprite.setPosition(sf::Vector2f(900.f, 900.f));
						AlleySprite.setPosition(sf::Vector2f(900.f, 900.f));
						ChadSprite.setPosition(sf::Vector2f(50.0f, 0.0f));
						GymSprite.setPosition(sf::Vector2f(0.f, 0.f));
						ChatText.setString("Yeah dude I'm Chad.");
					}
					else if (localPosition.x > 600 && localPosition.x < 800 && localPosition.y > 400 && localPosition.y < 600)
					{
						cout << "Button 2 Pressed (no)" << endl;
					}
					else if (localPosition.x > 363 && localPosition.x < 380 && localPosition.y >96 && localPosition.y < 115) //x,y 363,104 394,106 380,92 379,120
					{
						cout << "Eye Pressed (ow)" << endl;
					}
				}

			/*}*/
			window.display();
		}
	}
	return 0;
}