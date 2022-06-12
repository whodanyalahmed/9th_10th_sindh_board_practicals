#include <iostream>
#include <conio.h>
using namespace std;
int none2(void){
	int i;
	char ch[11];
	cout << "\n\t\t TEN CHARACTERS AS STRING INPUT";	
	cout << "\n\t\t ==============================";
	cout << "\n\t\t Enter Ten Characters \n";
	for (i = 0; i <= 9; i++){
		cout << "\t\t";
		ch[i] = getch();
		cout << ch[i];
		cout << "\n";
		
	}
	cout << "\t\t\t Ten Characters as String are: \t" << ch;
	return 0;
}
