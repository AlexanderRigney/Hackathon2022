#pragma once
#include "stats.h"
#include "Friend.h"
#include "location.h"
#include <fstream>
#include <iostream>
#include <ostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::fstream;


int AlexgetNextDialogue(Friend Alex, stats Character);
int JaredGetNextDialogue(Friend Jared, stats Character);
int ChadgetNextDialogue(Friend Chad, stats Character);
int KylegetNextDialogue(Friend Kyle, stats Character);