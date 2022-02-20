#include "Stats.h"

stats::stats()
{
	name = " ";
	reputation = 0.0;
	sanity = 0.0;
	rowdiness = 0;
	knowledge = 0;
	adaptability = 0;
	athleticism = 0;
	charisma = 0;
	luck = 0;
}

stats::stats(string newName, double NewReputation, double NewSanity, int NewRowdiness, int NewKnowledge, int NewAdaptabilty, int NewAthleticism,int NewCharisma, int NewLuck)
{
	this->name = newName;
	this->reputation = NewReputation;
	this->sanity = NewSanity;
	this->rowdiness = NewRowdiness;
	this->knowledge = NewKnowledge;
	this->adaptability = NewAdaptabilty;
	this->athleticism = NewAthleticism;
	this->charisma = NewCharisma;
	this->luck = NewLuck;
}

stats::~stats()
{

}

//Getters
string stats::GetName() const
{
	return name;
}

double stats::GetReputation() const
{
	return reputation;
}
double stats::GetSanity() const
{
	return sanity;
}
int stats::GetRowdiness() const
{
	return rowdiness;
}
int stats::GetKnowledge() const
{
	return knowledge;
}
int stats::GetAdaptability() const
{
	return adaptability;
}
int stats::GetAthleticism() const
{
	return athleticism;
}
int stats::GetCharisma() const
{
	return charisma;
}
int stats::GetLuck() const
{
	return luck;
}
/*
ínt stats::GetTotalFriendship() const
{
	return totalFriendship;
}*/
//Setters

void stats::SetName(string newName)
{
	name = newName; 
}

void stats::SetReputation(double NewReputation)
{
	reputation = NewReputation;
}
void stats::SetSanity(double NewSanity)
{
	sanity = NewSanity;
}
void stats::SetRowdiness(int newRowdiness)
{
	rowdiness = newRowdiness;
}
void stats::SetKnowledge(int newKnowledge)  
{
	knowledge = newKnowledge;
}
void stats::SetAdaptability(int newAdapt)
{
	adaptability = newAdapt; 
}
void stats::SetAthleticism(int newAthleticism)
{
	athleticism = newAthleticism;
}
void stats::SetCharisma(int newCharisma)
{
	charisma = newCharisma;
}
void stats::SetLuck(int newLuck)
{
	luck = newLuck;
}
/*
void stats::setTotalFriendship(int newTotalFriendship)
{
	totalFriendship = newTotalFriendship;
}*/ 
//Other functions
void stats::changeReputation(double amountChange)
{
	reputation += amountChange;
}
void stats::randomLuck()
{
	luck = (rand() % 20) + 1;
}
