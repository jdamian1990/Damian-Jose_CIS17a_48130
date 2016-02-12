/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on March 26, 2014, 6:50 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables 
       int number;
   //Input the number to convert
    cout << "Enter a number between 1 and 10 to convert into Roman numeral." << endl;
    cin >> number;
    
    //Display the results
    cout<<"Roman numeral: "<<endl;
{
switch(number) {
case 1:
cout<< "I";
break;
case 2:
cout<<"II";
break;
case 3:
cout<<"III";
break;
case 4:
cout<<"IV";
break;
case 5:
cout<<"V";
case 6:
cout<<"VI";
break;
case 7:
cout<<"VII";
break;
case 8:
cout<<"VIII";
break;
case 9:
cout<<"IX";
case 10:
cout<<"X";
default:
cout<<"Re-enter number between 1-10. ";
}

    }
    //Exit Stage Here:
    return 0;
}

