/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on March 17, 2014, 9:18 AM
 */

#include <iostream>
#include <string>
//System Libraries
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare Variables
    int F,C;
    string Celtemp;
    Celtemp = C;
               
 //Equation to convert from Celsius to Fahrenheit
    F = (9/5) * C + 32;
    
    cout<<"Enter Celsius temperature to convert into Fahrenheit: "<<endl;
    cin>>Celtemp;
    cout<<"Fahrenheit temperature is: "<<F<<" degrees "<<endl;
    //Exit Stage Here:
    return 0;
}

