/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on March 16, 2014, 11:32 PM
 */

#include <iostream>
#include <iomanip>
//System Libraries
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
// Declare Variables
    int t1,t2,t3,t4,t5,avg;
    
    cout<<"Enter First Test Score: "<<endl;
    cin>>t1;
    cout<<"Enter Second Test Score: "<<endl;
    cin>>t2;
    cout<<"Enter Third Test Score: "<<endl;
    cin>>t3;
    cout<<"Enter Fourth Test Score: "<<endl;
    cin>>t4;
    cout<<"Enter Fifth Test Score: "<<endl;
    cin>>t5;
    
    //Calculate the results
    avg = (t1 + t2 + t3 + t4 +t5) / 5 ;
    
    //Display the results
    cout<<"Average Test Scores: "<<setprecision(1)<<fixed<<avg<<endl;     
    //Exit Stage Here:
    return 0;
}

