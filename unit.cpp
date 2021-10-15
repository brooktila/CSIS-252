// File:     unit.cpp
// Author:   Brook Tilahun
// Date: 10/07/2021

// Description
// This file contains the implementation for a unit class

#include "unit.h"
#include <string>
#include <iostream>
using namespace std;
//default constructor
Unit::Unit()
{
    theHp=0;
}
Unit::Unit(double hp) //constructor with a double
{
    theHp = hp;
}
Unit::Unit(const Unit &u1) {
    theHp = u1.theHp;
};

void Unit::operator = (const Unit &u1) {
    theHp = u1.theHp;
};

double Unit::getUnit() const{
    return theHp;
};
void Unit::setUnit(double hp){
    theHp = hp;
};
// method to return names
string Unit::getAbb() const
{
    return "hp";
}
string Unit::getPlural() const
{
    return "Horsepowers";
}
string Unit::getSingular() const
{
    return "Horsepower";
}
istream& operator >> (istream& input, Unit& u5)
{
    double u5Num;
    string u5Name;
    input >> u5Num >> u5Name;
    
    if (u5Name == u5.getPlural() or u5Name == u5.getSingular() or u5Name == u5.getAbb())
    {
        u5.setUnit(u5Num);
    }
    else {
        cout << "Error reading input"  <<endl;
    }
   
    return input;
   
}
ostream& operator << (ostream& o, const Unit& u5)
{
    string UnitName;
    if (u5.getUnit() >1)
    {
        UnitName = u5.getPlural();
    }
    else 
    {
        UnitName = u5.getSingular();
    }
    cout  << u5.getUnit() << " " << UnitName;
    return cout;
}

bool Unit::operator < (const Unit& u1) const
{
   std::cout << "I'm in the operator <\n";
   return getUnit() < u1.getUnit();
}

bool Unit::operator == (const Unit& u1) const
{
   std::cout << "I'm in the operator ==\n";
   return getUnit() == u1.getUnit();
}

bool Unit::operator != (const Unit& u1) const
{
   std::cout << "I'm in the operator !=\n";
   return not (*this == u1);
}

bool Unit::operator >= (const Unit& u1) const
{
   std::cout << "I'm in the operator >=\n";
   return not (*this < u1);
}

bool Unit::operator <= (const Unit& u1) const
{
   std::cout << "I'm in the operator <=\n";
   return *this < u1 || *this == u1;
}

bool Unit::operator > (const Unit& u1) const
{
   std::cout << "I'm in the operator >\n";
   return not (*this <= u1);
}
