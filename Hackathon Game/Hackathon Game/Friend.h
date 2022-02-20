#pragma once
#include <string>
#include <iostream>
using std::string;

class Friend
{
private:	
	string name; 
	int depth; //How many times you have met this friend
	int friendship_level; //0 - 5
	//0 - No friend, 1 - Acquaintence, 2 - Friends, 3- Good Friends, 4- Close Friends, 5- Best Friends
public:
	Friend();
	Friend(string newName, int friendLevel);
	~Friend();
	int GetFriendshipLevel();
	int getDepth();

	void SetFriendshipLevel(int newLevel);
	void SetDepth(int newDepth);
	void changeFriendshipLevel(int change);
	
};

