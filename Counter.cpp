//
//  Counter.cpp
//  Wordle
//
//  Created by Tomas Teixeira on 2023-01-23.
//

#include <stdio.h>
#include <iostream>
#include "Counter.h"

/* Helper Functions */
namespace
{
    /*
     Function: letterToInt
      Purpose: returns to number associated to the letter provided
           in: the letter to be changed into a number
      Returns: the number associated to the provided number
     */
    int letterToInt(char letter)
    {
        switch (letter) {
            case 'a':
                return 1;
            case 'b':
                return 2;
            case 'c':
                return 3;
            case 'd':
                return 4;
            case 'e':
                return 5;
            case 'f':
                return 6;
            case 'g':
                return 7;
            case 'h':
                return 8;
            case 'i':
                return 9;
            case 'j':
                return 10;
            case 'k':
                return 11;
            case 'l':
                return 12;
            case 'm':
                return 13;
            case 'n':
                return 14;
            case 'o':
                return 15;
            case 'p':
                return 16;
            case 'q':
                return 17;
            case 'r':
                return 18;
            case 's':
                return 19;
            case 't':
                return 20;
            case 'u':
                return 21;
            case 'v':
                return 22;
            case 'w':
                return 23;
            case 'x':
                return 24;
            case 'y':
                return 25;
            case 'z':
                return 26;
            default:
                return -1;
        }
    }
}

/*
 Constructor
 */
Counter::Counter(){
    for (int i = 0; i < SIZE; ++i){
        counter[i] = 0;
    }
}

/*
 Function: getLetter
  Purpose: gets the amount of words that contain at least one
           of the specified letter
       in: the integer associated to the letter to check (1 to 26)
  Returns: the amount of words that contain that letter
 */
int Counter::getLetter(int letter)
{
    return counter[letter - 1];
}

/*
 Function: addWord
  Purpose: add 1 to each value in the counter for every letter
           in the word. Duplicate letters are not counted
       in: the 5 letter word to be added
 */
void Counter::addWord(string word)
{
    counter[letterToInt(word[0]) - 1] += 1;
    for (int i = 1; i < word.size(); ++i){
        if (word.substr(0, i).find(word[i]) == string::npos){
            counter[letterToInt(word[i]) - 1] += 1;
        }
    }
}

/*
 Function: removeWord
  Purpose: remove 1 from each value in the counter for every
           letter in the word. Duplicate letters are not counted
       in: the 5 letter word to be removed
 */
void Counter::removeWord(string word)
{
    counter[letterToInt(word[0]) - 1] -= 1;
    for (int i = 1; i < word.size(); ++i){
        if (word.substr(0, i).find(word[i]) == string::npos){
            counter[letterToInt(word[i]) - 1] -= 1;
        }
    }
}

/*
 Function: printCounter
  Purpose: prints the amount of times every letter appears
           in the current word list
 */
void Counter::printCounter()
{
    for (int i = 0; i < SIZE; ++i){
        cout << (char)(i + 65) << ": " << counter[i] << endl;
    }
}
