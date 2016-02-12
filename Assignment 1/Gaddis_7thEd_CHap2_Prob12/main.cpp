/* 
 * File:   main.cpp
 * Author: Jose Damian 
 * Created on February 26, 2014, 9:39 AM
 */

#include <iostream>     
//System Libraries
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:

int main(int argc, char** argv) {
    //Declare Variables
    float sqfeet,oneAcre,tAcre;
   //Assign values
    sqfeet = 389767;
    oneAcre = 43560; 
      
    // Calculate the amount of the division.
    tAcre = sqfeet /oneAcre;
   
    // Display the results.
    cout<<"Tract of Land: "<< sqfeet<<endl;
    cout<<"Square Feet in Acre: "<< oneAcre<<endl;
    cout<<"Total acres in Tract of Land: "<<tAcre<<endl;  
    return 0;
}

