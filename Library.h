#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;

class Library {

//Protected variables
protected:
	int librarySize; //Size of library
	list<string> library; //List of all words

public:
	Library();
	int getSize();
	int readFile(string);

};

