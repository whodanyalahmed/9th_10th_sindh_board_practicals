#include <iostream>
using namespace std;
int main(){
	int num,multiple;
	cout << "\n\t\t\t Program to Print Multiples of a Number upto 10";
	cout << "\n\t\t\t ============================================";
	
	cout << "\n\t\t\t\t Enter Number: ";
	cin >> num;
	
	for (multiple = 1;multiple <= 10; multiple++){
		cout << "\n\t\t\t\t " << num << " x " << multiple << " = " << num * multiple << "\n";
	}

	return 0;


}
