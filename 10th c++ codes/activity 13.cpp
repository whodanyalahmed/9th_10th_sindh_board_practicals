#include <iostream>
using namespace std;
int main(){
	int num,a,fact=1 ;
	cout << "\n\t\t\t\t Factorial of Number";
	cout << "\n\t\t\t\t ===================";
	
	cout << "\n\n\t\t\t Enter Positive Integer Number: ";
	cin >> num;
	for(a =1;a <=num;a++){
		fact = fact * a;
	}
	cout << "\n\n\t\t\t Factorial of a Given Number is: " <<fact;
	
	 return 0;
}
