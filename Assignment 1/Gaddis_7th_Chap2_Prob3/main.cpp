/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on March 3, 2014, 12:22 AM
 */


#include <iostream>
//System Libraries
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:

int main(int argc, char** argv) {
    //Declare Variables
   float a,b,c,d,saleTax, Total;
    
   //Assign values
    a = 52;
    b = .04;
    c = .02;
    d = b + c;
    
    //Calculate the amount of sales tax
    saleTax = a*d;
   
    // Calculate the total of the sale
   Total = saleTax + a ;
              
    // Display the results.
    cout<<"Purchase Price =$ 52.00"<<endl;      
    cout<<"State & County Sale Tax =$ "<<saleTax<<endl;
    cout<<"Total=$ "<< Total<<endl;  
    return 0;
}
