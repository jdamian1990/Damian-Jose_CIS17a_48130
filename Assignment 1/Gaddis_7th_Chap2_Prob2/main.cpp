/* 
 * File:   main.cpp
 * Author: Jose
 *
 * Created on March 3, 2014, 12:47 AM
 */

#include <iostream>
//System Libraries
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:

int main(int argc, char** argv) {
    //Declare Variables
   float a,b,saleTax, Total;
    
   //Assign values
    a = 4.6;
    b = .62;
    
    //Calculate the amount of sales tax
    saleTax = a*b;
   
    // Calculate the total of the sale
   Total = saleTax + a ;
              
    // Display the results.
    cout<<"Sales this Year =$ "<< a<<" million"<<endl;      
    cout<<"Total Percentage Company Generates = "<< b <<"%"<<endl;
    cout<<"Approximate Percentage Company will Generate=$ "<< Total<<" million"<<endl;  
    return 0;
}
