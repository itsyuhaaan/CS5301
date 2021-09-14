//
//  main.cpp
//  6.11.2: Modify an array parameter
/*
 Write a function SwapArrayEnds() that swaps the first and last elements of the function's array parameter. Ex: sortArray = {10, 20, 30, 40} becomes {40, 20, 30, 10}.
 */
#include <iostream>
using namespace std;
//666
void SwapArrayEnds(int arr[], const int size) {
    if(size > 0) {
        int temp = arr[0];
        arr[0] = arr[size-1];
        arr[size-1] = temp;
    }
}


int main() {
   const int SORT_ARR_SIZE = 4;
   int sortArray[SORT_ARR_SIZE];
   int i;
   int userNum;

   for (i = 0; i < SORT_ARR_SIZE; ++i) {
       cout << "Enter 4 #:";
      cin >> userNum;
      sortArray[i] = userNum;
   }

   SwapArrayEnds(sortArray, SORT_ARR_SIZE);

   for (i = 0; i < SORT_ARR_SIZE; ++i) {
      cout <<  sortArray[i] << " ";
   }
   cout << endl;

   return 0;
}
/*
 Enter 4 #:99
 Enter 4 #:1
 Enter 4 #:3
 Enter 4 #:0
 0 1 3 99
 Program ended with exit code: 0
 */
