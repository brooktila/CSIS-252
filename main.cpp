// File:     main.cpp
// Author:   Brook Tilahun
// Date: 10/07/2021

// Description
// This program will test the Unit class

#include <iostream>
#include <iomanip>
#include "unit.h"
using namespace std;
  
int main()
{
    cout << "This program Tests the Horsepower class."<<endl; //tells the user what this program does
    Unit u1 = 1245;    // Constructor test using a double
    Unit u2= Unit (u1);  //Copy constructor
    Unit u3;           //Default constructor
    Unit u4= 525;
    Unit u5; 
   
    cout << "Default constructor" << endl;
    cout << "u3: " << u3.getUnit() << endl;
    
    cout << "Constructor that takes a double" << endl;
    cout << "u4: " << u4.getUnit() << endl;
    
    cout << "Copy constructor" << endl;
    cout << "u2: " << u2.getUnit() << endl;
    
    cout << "Overloaded assignment operator" << endl;
    u1 = u4; //overloaded assignment operator test
    cout << "u1: " << u1.getUnit() << endl;

    cout << "Getting and setting the value" << endl;
            u5.setUnit(420);
    cout << "u5: " << u5.getUnit() << endl;
    
    cout << " Input and output for unit" << endl;
    cout << "Unit amount and name?" << endl;
    cin >> u5;
    cout << u5<<endl;
    
    cout << "Return all the potential names of the unit" << endl;
    cout << u5.getSingular() << endl;
    cout << u5.getAbb() << endl;
    cout << u5.getPlural() << endl;

   cout << "Comparison of class" << endl;
    if (u1 == u4) 
        cout << "u1 and u2 are equivalent" << endl;
    else
        cout << "They are not equivalent" << endl; 
    if (u1 > u4) 
        cout << "u1 is greater than u2" << endl;
    if (u1 < u4)
        cout << "u1 is less than u4" << endl;
    if (u1 != u4)
        cout << "u1 and u4 are not equivalent" << endl;
 
   return 0;
} 
