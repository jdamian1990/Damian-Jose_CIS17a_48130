/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on March 15, 2014, 11:32 PM
 */

#include <iostream>
//System Libraries
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare Variables
    int Gallons; //Gallons the car can hold
    int Miles; // Miles the car can be driven on full tank
    int tMiles; // Total miles on a full tank
    
    cout<<"Enter the Following"<<endl;
    cout<<"The number of Gallons the car can hold:"<<endl;
    cin>>Gallons;
    cout<<"The number of miles it can be driven on a full tank:"<<endl;
    cin>>Miles;
    tMiles = Miles / Gallons;
    cout<<"Total number of Miles the car can be driven per gallon of gas: "<<tMiles<<endl;
    //Exit Stage Here:
    return 0;
}

