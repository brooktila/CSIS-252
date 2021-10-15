// File:     unit.h
// Author:   Brook Tilahun
// Date: 10/7/2021

// Description
// This file contains the specification for a Unit  class

#ifndef _UNIT_H_
#define _UNIT_H_
#include <string>

const double factor = 745.7;  // used in Unit conversion calculations from HP to W
using namespace std;

class Unit
{
   public:
      // method - constructor
      Unit();
      Unit (double hp);
    double getUnit() const; // get the value
    void setUnit(double); // set the value
    Unit(const Unit &u1); //copy constructor
    void operator = (const Unit &u1); //overloaded assignment operator
  
      // overload comparison operators
      bool operator < (const Unit&) const;
      bool operator == (const Unit&) const;
      bool operator != (const Unit&) const;
      bool operator <= (const Unit&) const;
      bool operator > (const Unit&) const;
      bool operator >= (const Unit&) const;
      
           //get abbreviated name
    string getAbb() const;  
      //get plural name
    string getPlural() const; 
        //get single name
    string getSingular() const; 
   
   private:
      double theHp; // Stores amount of horsepower from the input of user
   
};

ostream& operator << (ostream&, const Unit&);
istream& operator >> (istream&, Unit&);

#endif

