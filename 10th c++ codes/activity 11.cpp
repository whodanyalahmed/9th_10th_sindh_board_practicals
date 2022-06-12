#include <iostream>
#include <algorithm>
using namespace std;
int none11(){
	int num[10],i ;
	cout << "\n\t DESCENDING ORDER SORTING";
	cout << "\n\t ========================";
		
	cout << "\n\t Enter any 10 Numbers: ";
	
	for (i = 0;i<=9;i++){
		cin >> num[i];
		cout << "\t\t\t\t";
		
	}
	sort(num,num+10);
	cout << "\n\t Numbers in DESCENDING Order \n";
	cout << "\n\t\t\t\t " << num[9];
	cout << "\n\t\t\t\t " << num[8];
	cout << "\n\t\t\t\t " << num[7];
	cout << "\n\t\t\t\t " << num[6];
	cout << "\n\t\t\t\t " << num[5];
	cout << "\n\t\t\t\t " << num[4];
	cout << "\n\t\t\t\t " << num[3];
	cout << "\n\t\t\t\t " << num[2];
	cout << "\n\t\t\t\t " << num[1];
	cout << "\n\t\t\t\t " << num[0];
	
	
	
	
	
	
		
	
	 return 0;
}
