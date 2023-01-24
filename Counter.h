//
//  Counter.h
//  Wordle
//
//  Created by Tomas Teixeira on 2023-01-23.
//
#include <string>

using namespace std;

#ifndef Counter_h
#define Counter_h

class Counter {
private:
    const static int SIZE = 26;
    int counter[SIZE];
public:
    Counter();
    int getLetter(int letter);
    void addWord(string word);
    void removeWord(string word);
    void printCounter();
};


#endif /* Counter_h */
