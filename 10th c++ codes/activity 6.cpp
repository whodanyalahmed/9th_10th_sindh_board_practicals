#include <iostream>

using namespace std;
int none6(){
	int num ;
	cout << "\n\t\t\t Program to Check whether a Number is Positve, Negative or Zero.";
	cout << "\n\t\t\t ===============================================================";
	
	cout << "\n\t\t\t Enter a number: ";
	cin >> num;
	 if(num > 0){
	 	cout << "\n\n\t\t\t The Number is Positive";
	 	
	 }
	 else if (num < 0){
	 	cout << "\n\n\t\t\t The Number is Negative";
	 }
	 else{
	 	cout << "\n\n\t\t\t The Number is 0";
	 }
	 return 0;
}
