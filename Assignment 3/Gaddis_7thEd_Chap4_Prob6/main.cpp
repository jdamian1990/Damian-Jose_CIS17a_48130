/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on May 14, 2014, 11:19 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare Variables
    int mass,weight;
//Prompt the user to enter the data
    cout<<"Please enter the object's mass in (kilograms): ";
    cin>>mass;
//Make the Calculations
    weight = mass * 9.8;
//Display the results
    cout<<"The weight of the object is: "<<weight<<endl;
        if (weight>=1000)
        cout<<"The object is too heavy."<<endl;
    else if(weight>=0&& weight<=10)
            cout<<"The object if too light"<<endl;
    return 0;
}

