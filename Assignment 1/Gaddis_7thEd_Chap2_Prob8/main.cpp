/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on March 2, 2014, 10:35 PM
 */

#include <iostream>
//System Libraries
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:

int main(int argc, char** argv) {
    //Declare Variables
   float P1,P2,P3,P4,P5,P6,subtotal,saleTax, Total;
    
   //Assign values
    P1 = 12.95;
    P2 = 24.95;
    P3 = 6.95;
    P4 = 14.95;
    P5 = 3.95;
    P6 = .06;
    
    // Calculate the subtotal of the sale
    subtotal = P1+P2+P3+P4+P5;
                        
    //Calculate the amount of sales tax
    saleTax = P1*P6+P2*P6+P3*P6+P4*P6+P5*P6;
            
    // Calculate the total of the sale
   Total = saleTax + subtotal ;
            
    // Display the results.
    cout<<"Price of item 1 =$ 12.95 "<<endl;
    cout<<"Price of item 2 =$ 24.95 "<<endl;
    cout<<"Price of item 3 =$ 6.95 "<<endl;
    cout<<"Price of item 4 =$ 14.95 "<<endl;
    cout<<"Price of item 5 =$ 3.95 "<<endl;       
    cout<<"Subtotal Of the Sale =$ "<< subtotal<<endl;
    cout<<"The Amount of Sale Tax =$ "<< saleTax<<endl;
    cout<<"Total=$ "<< Total<<endl;  
    return 0;
}
