#pragma once
#include <string>
#include "Friend.h"
using std::string;
class location
{
public:
	location();
	~location();
	location(string LocationName, Friend);
	void SetName(string NewName);
	string GetName();
private:
	string locationName;
	Friend* FriendObject;
};

