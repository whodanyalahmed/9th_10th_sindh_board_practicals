#include <iostream>
using namespace std;
int none3() {
	int num1, num2;
	int sum,sub,multi,div;
	cout << "\t Addition, Subtraction, Multiplication & Division of Two Numbers Using Arithematic Operators\n";
	cout << "\t ============================================================================================\n";
	
	cout << "\n\t\t\t Enter 1st number: ";
	cin >> num1;
	
	cout << "\n\t\t\t Enter 2nd number: ";
	cin >> num2; 
	
	sum = num1 + num2;
	sub = num1 - num2;
	multi = num1 * num2;
	div = num1/num2;
	
	cout << "\n\t\t\t The Sum of two numbers is: " << sum;	
	cout << "\n\t\t\t The Subtraction of two numbers is: " << sub;
	cout << "\n\t\t\t The Mulitplication of two numbers is: " << multi;
	cout << "\n\t\t\t The Division of two numbers is: " << div;
	return 0;
}
