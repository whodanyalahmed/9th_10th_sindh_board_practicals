#include <iostream>
using namespace std;
int none5() {
	int num1, num2 , num3 , num4, num5, num6,total;
	float avg;
	cout << "\n\t\t Calculate the Total and Average of 6 Numbers";
	cout << "\n\t\t ============================================";
	
	cout << "\n\t\t\t Enter 1st number: ";
	cin >> num1;
	cout << "\n\t\t\t Enter 2nd number: ";
	cin >> num2;
	cout << "\n\t\t\t Enter 3rd number: ";
	cin >> num3;
	cout << "\n\t\t\t Enter 4th number: ";
	cin >> num4;
	cout << "\n\t\t\t Enter 5th number: ";
	cin >> num5;
	cout << "\n\t\t\t Enter 6th number: ";
	cin >> num6;
	
	
	total = num1 + num2 + num3 + num4 + num5 + num6;
	avg = total / 6;
	cout << "\n\t\t The Total of Six Numbers is : " << total;
	cout << "\n\t\t The Average of Six Numbers is : " << avg;
	return 0;
	

}

