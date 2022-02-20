#include <fstream>
#include <iostream>
#include <ostream>
#include <string>
#include "time.h"

using std::string;

class stats {
private:
	string name;
	double reputation; // up to 100
	double sanity; //-100-100 stats if sanity <= 4, messed up things start happening	
	int rowdiness; //
	int knowledge; //can buff from classes & studying
	int adaptability; // Up to 20
	int athleticism; // Up to 20
	int charisma; // Up to 20
	int luck; // Up to 20
	//int totalFriendship;

public:
	stats();
	stats(string name, double NewReputation, double NewSanity, int NewRowdiness, int NewKnowledge, int NewAdaptabilty, int NewAthleticism,int charisma, int NewLuck);
	~stats();
	//getters
	string GetName() const;
	double GetReputation() const;
	double GetSanity() const;
	int GetRowdiness() const;
	int GetKnowledge() const;
	int GetAdaptability() const;
	int GetAthleticism() const;
	int GetCharisma() const;
	int GetLuck() const;
	//int GetTotalFriendship() const;
	//setters
	void SetName(string newName);
	void SetReputation(double newRep);
	void SetSanity(double newSanity);
	void SetRowdiness(int newRowdiness);
	void SetKnowledge(int newKnowledge);
	void SetAdaptability(int newAdapt);
	void SetAthleticism(int newAthleticism);
	void SetCharisma(int newCharisma);
	void SetLuck(int newLuck);
	//void setTotalFriendship(int newTotalFriendship);
	//Others
	void changeReputation(double amountChange);
	void randomLuck();
};
