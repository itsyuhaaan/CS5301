//
//  main.cpp
//  6.13 LAB: People's weights (Arrays)
/*
 Output each floating-point value with two digits after the decimal point, which can be achieved by executing
 cout << fixed << setprecision(2); once before all other cout statements.

 (1) Prompt the user to enter five numbers, being five people's weights. Store the numbers in an array of doubles. Output the array's numbers on one line, each number followed by one space.

 (2) Output the total weight, by summing the array's elements.

 (3) Output the average of the array's elements.

 (4) Output the maximum array element.

 Your program must define and call the following two functions:

 double totalWeight (double weights[]) to compute and return the total weight.

 double maxWeight (double weights[]) to return the maximum value in the array.

 Your program must not use a vector. Your program must use an array to store the weights, and loops to input and process the values.

 Ex:

 Enter weight 1:
 236.0
 Enter weight 2:
 89.5
 Enter weight 3:
 142.0
 Enter weight 4:
 166.3
 Enter weight 5:
 93.0
 You entered: 236.00 89.50 142.00 166.30 93.00

 Total weight: 726.80
 Average weight: 145.36
 Max weight: 236.00
 */
#include <iostream>
#include <iomanip> /// For setprecision
using namespace std;

double totalWeight (double weights[]){
    double sum = 0.0;
    for ( int i = 1; i <= 5; i++){
        sum += weights[i];
    }
    return sum;
}

double maxWeight (double weights[]){
    double max = weights[1];
    for ( int i = 1; i <= 5; i++){
        if(max < weights[i]){
            max = weights[i];
        }
    }
    return max;
}

int main() {
   const int size = 5;    // Array size
    int i = 5;
   double enterWeight[i];  // User test scores
    double total, average, maximum;
   
    //Enter number and save to an array
   for ( int i = 1; i <= 5; i++){
      cout << "Enter weight " << i << ":" << endl;
      cin >> enterWeight[i];
   }
    // Print Array
   cout << "You entered: ";
    
   for (i = 1; i <= size; i++) {
       cout << fixed << setprecision(2) << enterWeight[i] << " ";
   }
    cout << endl;

    total = totalWeight (enterWeight);// to compute and return the total weight.
    cout << endl << "Total weight: " << total << endl;
    average = total / size;
    cout << "Average weight: " << average << endl;
    maximum = maxWeight (enterWeight);// to return the maximum value in the array.
    cout << "Max weight: " << maximum << endl;
   return 0;
}
/*
 Enter weight 1:
 1
 Enter weight 2:
 2
 Enter weight 3:
 3
 Enter weight 4:
 4
 Enter weight 5:
 5
 You entered: 1.00 2.00 3.00 4.00 5.00

 Total weight: 15.00
 Average weight: 3.00
 Max weight: 5.00
 Program ended with exit code: 0
 */
