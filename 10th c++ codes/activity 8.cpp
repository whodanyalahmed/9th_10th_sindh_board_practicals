#include <iostream>
using namespace std;
int none8(){
	float length,meter;
	cout << "\n\t\t\t Program to Convert length in Centimeter into Meter";
	cout << "\n\t\t\t ===================================================";
	
	cout << "\n\t\t\t\t Enter length in Centimeter: ";
	cin >> length;
	
	meter = length /100;
	cout << "\n\t\t\t\t The Length in meters is: " << meter;
	return 0;


}
