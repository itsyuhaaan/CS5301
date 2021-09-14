//
//  main.cpp
//  5.9.1: Function pass by reference: Transforming coordinates.
//  
/*
 Define a function CoordTransform() that transforms the function's first two input parameters xVal and yVal into two output parameters xValNew and yValNew. The function returns void. The transformation is new = (old + 1) * 2. Ex: If xVal = 3 and yVal = 4, then xValNew is 8 and yValNew is 10.
 */

#include <iostream>
using namespace std;

void CoordTransform(int xOld, int yOld, int &xValNew, int &yValNew){
   xValNew = (xOld + 1) * 2;
   yValNew = (yOld + 1) * 2;
}

int main() {
   int xValNew;
   int yValNew;
   int xValUser;
   int yValUser;

   cin >> xValUser;
   cin >> yValUser;

   CoordTransform(xValUser, yValUser, xValNew, yValNew);
   cout << "(" << xValUser << ", " << yValUser << ") becomes (" << xValNew << ", " << yValNew << ")" << endl;

   return 0;
}
