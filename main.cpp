#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    bool Altuve_to_m = true; //initializes the bool as true
    int Altuve;              //declares Altuve as an int type
    int m;                   //declares m as an int type
    int input_number=1;      //declares and intializes input_number as an int type
	while (input_number ==1) { //initilaizes a while loop that runs the program again when input is 1 
 	  cout << "Choose from the following:"<<endl 
        	<< "(1) Altuve to m" <<endl
        	<< "(2) m to Altuve" <<endl
       	 	<< "Type the corresponding number to the task you want to perform" <<endl;
	cin >> input_number;       //takes input from user and stores it in input_number
	if (input_number == 1) {   // checks to see which way the conversion is going
    		Altuve_to_m = true;
	} else {
    		Altuve_to_m = false;
	};
	if (Altuve_to_m) {          //starts the conversion for the first condition
    		cout << "Please enter in the number of Altuve:" <<endl;
    		cin >> Altuve;
    		m = Altuve/1.65;    //performs the conversion
    		cout<< Altuve << " Altuve is " << m << " meters." <<endl; //displays the converted value
	} else {                    //starts the conversion for the second condition
    		cout << "Please enter in the number of meters:" <<endl;
    		cin >> m;
    		Altuve= m*1.65;     //performs the conversion
    		cout<< m << " meter is " << Altuve << " Altuve." <<endl; //displays the converted value
	};
	cout << "Choose from the following:" <<endl //asks the user to continue with more conversions or end
        << "(1) to convert again" <<endl
        << "(2) to exit" <<endl
        << "type in the corresponding number, 1 or 2, to choose that option" <<endl;
	cin >> input_number; //if user enters 1 program restarts conversion or else quits
	};
	return 0;
};


