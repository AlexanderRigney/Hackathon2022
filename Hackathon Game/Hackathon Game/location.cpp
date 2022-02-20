#include "location.h"

location::location()
{
	locationName = " ";
	this->FriendObject = nullptr;
}

location::location(string LocationName, Friend)
{

}

location::~location()
{
	delete(this->FriendObject);
}

void location::SetName(string NewName)
{
	locationName = NewName;
}

string location::GetName()
{
	return locationName;
}

