#pragma once
#include "Library.h"
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <fstream>
#include <sstream>

using namespace std;

Library::Library() {
	
	librarySize = 0; //Empty list

}

int Library::getSize() {
	return librarySize;
}

int Library::readFile(string fileName) {
	string temp;
	
	ifstream MyReadFile("words.txt");
;
	
	if (!MyReadFile.is_open())
	{
		cout << "File not found" << endl;
		return 0;
	}

	while (getline(MyReadFile, temp)) {
		library.push_back(temp);
		librarySize++;
		//Read line
		//cout << temp << endl;
	}

	MyReadFile.close();

	return 1;
}