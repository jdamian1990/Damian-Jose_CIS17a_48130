/* 
 * File:   main.cpp
 * Author: Jose Damian            *
 * Created on March 5, 2014, 8:24 AM
 */

#include <iostream>
//System Libraries
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:

int main(int argc, char** argv) {
    //Declare Variables
    float a,b,mealCst,saleTax,tip,totalbll;
        
    //Assign Values
    mealCst = 44.50;
    b = 6.75;
    a = .15;
            
   //Calculate the Sale tax
    
    saleTax = b/100 * mealCst ;
    
    //Calculate the Tip
    
    tip = mealCst * a ;   
    
    
    //Calculate the Total
    totalbll = saleTax + tip + mealCst ; 
    
    //Display the results
    cout<<"Meal Cost: "<<mealCst<<endl;
    cout<<"Tax Amount:"<<saleTax<<endl;
    cout<<"Tip Amount:"<<tip<<endl;
    cout<<"Total Amount:"<<totalbll<<endl;
    //Exit Stage Here

    return 0;
}

