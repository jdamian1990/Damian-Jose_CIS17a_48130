/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on May 14, 2014, 12:21 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare Variables
    float units,total;
    float tax;
   int package = 99;
//Prompt user to enter the data
   cout<<"Please enter the units sold: ";
   
   cin>>units;

//Make the Calculations
   if (units>=0 && units<=9){
       total = package * units ;
       cout<<"The total cost of the purchase is: $ "<<total<<endl;
   }
   if (units>=10 && units<=19){
       tax = units * .20;
       total = (package * units)- tax ;
       cout<<"The total cost of the purchase including discount is: $ "<<total<<endl;
   }
   if (units>=20 && units<=49){
       tax = units * .30;
       total = (package * units)- tax ;
       cout<<"The total cost of the purchase including discount is: $ "<<total<<endl;
   }
    if (units>=50 && units<=99){
       tax = units * .40;
       total = (package * units)- tax ;
       cout<<"The total cost of the purchase including discount is: $ "<<total<<endl;
   }
   if (units>=100){
       tax = units * .50;
       total = (package * units)- tax ;
       cout<<"The total cost of the purchase including discount is: $ "<<total<<endl;
   }
   //Exit Stage Here:
    return 0;
}

