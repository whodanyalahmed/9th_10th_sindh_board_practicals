#include <iostream>
using namespace std;
int none1() {
    // Write C++ code here
    
    int math,eng,urdu,phy,chem,tot,per;
    cout << "\t\tCALCULATION OF TOTAL MARKS,PERCENTAGE AND GRADE\n";
    cout << "\t\t=====================\n";
    
    
    cout << "\t\t\tEnter marks of Maths: ";
    cin >> math;
    
    cout << "\t\t\tEnter marks of English: ";
    cin >> eng;
    
    cout << "\t\t\tEnter marks of Urdu: ";
    cin >> urdu;
    
    cout << "\t\t\tEnter marks of Physics: ";
    cin >> phy;
    
    cout << "\t\t\tEnter marks of Chemistry: ";
    cin >> chem;
    
    tot = math + eng + urdu + phy + chem ;
    
    cout << "\n\t\t\tTotal marks: " << tot << "\n";
    
    per = (tot * 100) / 500;
    cout << "\t\t\tPercentage : " << per<< "%\n";
    if(per >= 80 && per <= 100){
         cout << "\t\t\tGrade : A+\n";
    }
    else if(per >= 70 && per <= 80){
         cout << "\t\t\tGrade : A\n";
    }
    else if(per >= 60 && per <= 70){
         cout << "\t\t\tGrade : B\n";
    }
    else if(per >= 50 && per <= 60){
         cout << "\t\t\tGrade : C\n";
    }
    else if(per >= 40 && per <= 50){
         cout << "\t\t\tGrade : D\n";
    }
    else if(per >= 33 && per <= 40){
         cout << "\t\t\tGrade : E\n";
    }
    else{
        cout << "\t\t9Grade: Out of range";
    }
    return 0;
}
