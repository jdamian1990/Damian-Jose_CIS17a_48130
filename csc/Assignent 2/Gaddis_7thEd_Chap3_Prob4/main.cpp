/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on March 17, 2014, 12:01 AM
 */

#include <iostream>
#include <string>
//System Libraries
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begin Here
int main(int argc, char** argv) {
// Declare Variables
    int m1,m2,m3,avg;
    string month1,month2,month3;
    
    cout<<"Enter the name of first month: "<<endl;
    cin>>month1;
    cout<<"Enter the amount of rain (inches) that fell for the month: "<<endl;
    cin>>m1;
    cout<<"Enter the name of the second month: "<<endl;
    cin>>month2;
    cout<<"Enter the amount of rain (inches) that fell for the month: "<<endl;
    cin>>m2;
    cout<<"Enter the name of the third month: "<<endl;
    cin>>month3;
    cout<<"Enter the amount of rain (inches) that fell for the month: "<<endl;
    cin>>m3;
        
    //Calculate the results
    avg = (m1 + m2 + m3) / 3 ;
    
    //Display the results
    cout<<"The Average rainfall for: "<<month1<<", "<<month2<<", and "<<month3<<" is "<<avg<<" inches."<<endl;     
    //Exit Stage Here:
    return 0;
}

