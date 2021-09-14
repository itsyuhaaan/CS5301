//
//  main.cpp
//  6.4.3: Populating an array with a for loop
//
/*
 Write a for loop to populate array userGuesses with NUM_GUESSES integers. Read integers using cin. Ex: If NUM_GUESSES is 3 and user enters 9 5 2, then userGuesses is {9, 5, 2}.
 */

#include <iostream>
using namespace std;

int main() {
   const int NUM_GUESSES = 3;
   int userGuesses[NUM_GUESSES];
   int i;

   for (i = 0; i < NUM_GUESSES; ++i) {
     cin >> userGuesses[i];
   }

   for (i = 0; i < NUM_GUESSES; ++i) {
     cout << userGuesses[i] << " ";
   }

   return 0;
}
