//
//  main.cpp
//  7.1.2: Declaring a struct
/*
 Define a struct named PatientData that contains two integer data members named heightInches and weightPounds. Sample output for the given program with inputs 63 115:
 Patient data: 63 in, 115 lbs
 */
#include <iostream>
using namespace std;

struct PatientData {
   int heightInches;
   int weightPounds;
};


int main() {
   PatientData lunaLovegood;

   cin >> lunaLovegood.heightInches;
   cin >> lunaLovegood.weightPounds;

   cout << "Patient data: "
        << lunaLovegood.heightInches << " in, "
        << lunaLovegood.weightPounds << " lbs" << endl;

   return 0;
}

/*
 7.1.3: Accessing a struct's data members.
 Write a statement to print the data members of InventoryTag. End with newline. Ex: if itemID is 314 and quantityRemaining is 500, print:
 Inventory ID: 314, Qty: 500
 */
#include <iostream>
using namespace std;

struct InventoryTag {
   int itemID;
   int quantityRemaining;
};

int main() {
   InventoryTag redSweater;

   cin >> redSweater.itemID;
   cin >> redSweater.quantityRemaining;

   cout << "Inventory ID: "
        << redSweater.itemID<< ", Qty: "
        << redSweater.quantityRemaining << endl;


   return 0;
}
