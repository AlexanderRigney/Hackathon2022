#include "Friend.h"

Friend::Friend()
{
	name = " ";
	friendship_level = 0;

}

Friend::~Friend()
{

}

Friend::Friend(string newName, int friendLevel){
	name = newName;
	friendship_level = friendLevel;
}

int Friend::GetFriendshipLevel()
{
	return friendship_level;
}
int Friend::getDepth()
{
	return depth;
}
void Friend::SetFriendshipLevel(int newLevel)
{
	friendship_level = newLevel;
}
void Friend::SetDepth(int newDepth)
{
	depth = newDepth;
}
void Friend::changeFriendshipLevel(int change)
{
	friendship_level += change;
}