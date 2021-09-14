//
//  main.cpp
//  6.4.5: Printing array elements separated by commas
//
/*
 Write a for loop to print all NUM_VALS elements of array hourlyTemp. Separate elements with a comma and space. Ex: If hourlyTemp = {90, 92, 94, 95}, print:
 90, 92, 94, 95
 Your code's output should end with the last element, without a subsequent comma, space, or newline.
 */
#include <iostream>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   int hourlyTemp[NUM_VALS];
   int i;

   for (i = 0; i < NUM_VALS; ++i) {
      cout << "Type in hourlyTemp:";
      cin >> hourlyTemp[i];
   }
//***
   for (i = 0; i < NUM_VALS; ++i) {
      cout << hourlyTemp[i];
      if(i < NUM_VALS - 1){
         cout<<", ";
      }
   }
    cout << endl;

   return 0;
}

/*Result
 Type in hourlyTemp:90
 Type in hourlyTemp:92
 Type in hourlyTemp:94
 Type in hourlyTemp:95
 90, 92, 94, 95
 Program ended with exit code: 0
 */
