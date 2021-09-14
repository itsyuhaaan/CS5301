//
//  main.cpp
//  7.2.2: Structs and functions
/*
 Define a function SetBirth, with int parameters monthVal and dayVal, that returns a struct of type BirthdayDate. The function should assign BirthdayDate's data member numMonths with monthVal and numDays with dayVal.
 */

#include <iostream>
using namespace std;

struct BirthdayDate {
   int numMonths;
   int numDays;
};

BirthdayDate SetBirth(int m1, int n1) {
    BirthdayDate date;
    date.numMonths = m1;
    date.numDays = n1;
    return date;
}

int main() {
   BirthdayDate myBirthday;
   int monthVal;
   int dayVal;

   cin >> monthVal >> dayVal;

   myBirthday = SetBirth(monthVal, dayVal);

   cout << "I was born on " << myBirthday.numMonths << "/" << myBirthday.numDays << "." << endl;

   return 0;
}
