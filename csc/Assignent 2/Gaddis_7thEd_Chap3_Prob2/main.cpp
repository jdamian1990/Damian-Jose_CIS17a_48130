/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on March 16, 2014, 9:22 PM
 */

#include <iostream>
#include <iomanip>
//System Libraries
using namespace std;

//Global Constants

//Function Prototypes

//Begin Code Execution
int main(int argc, char** argv) {
    
    // Declare Variables
    int clsAtks;
    int clsBtks;
    int clsCtks;
    float total;
    
        
    int clsA = 15.0;
    int clsB = 12.0;
    int clsC = 9.0;
            
    
   
    cout<<"Tickets sold for class A: "<<endl;
    cin>>clsAtks;
    cout<<"Tickets sold for class B: "<<endl;
    cin>>clsBtks;
    cout<<"Tickets sold for class C: "<<endl;
    cin>>clsCtks;
    
    //Calculate the Result
    total = (clsAtks * clsA) +
            (clsBtks * clsB) +
            (clsCtks * clsC);
    
    cout<<"Amount of income generated from ticket sales: $ "<<setprecision(2)<<fixed<<total<<endl; 
    //Exit Stage Here:
    return 0;
}

