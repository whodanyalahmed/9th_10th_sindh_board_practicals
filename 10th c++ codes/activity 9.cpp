#include <iostream>
using namespace std;
int none9(){
	float fahrenheit,celsius;
	cout << "\n\t\t\t Program to Convert Temperature from Fahrenhiet to Celsius";
	cout << "\n\t\t\t =========================================================";
	
	cout << "\n\t\t\t\t Enter Temperature in Fahrenhiet: ";
	cin >> fahrenheit;
	
	celsius = (fahrenheit - 32 ) * (5.0/9.0);
	
	cout << "\n\t\t\t\t Temperature in Celsius is: " << celsius;
	

	return 0;


}
