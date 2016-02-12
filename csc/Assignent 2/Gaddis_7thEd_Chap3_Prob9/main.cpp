/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on March 17, 2014, 9:40 AM
 */

#include <iostream>
//System Libraries
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables
    int LoanPmt,insur,gas,oil,tires,mtnce;
    int total,Atotal;
    
            
    cout<<"Enter the following Costs: "<<endl;
    cout<<"Loan Payment: "<<endl;
    cin>>LoanPmt;
    cout<<"Insurance: "<<endl;
    cin>>insur;
    cout<<"Gas: "<<endl;
    cin>>gas;
    cout<<"Oil: "<<endl;
    cin>>oil;
    cout<<"Tires: "<<endl;
    cin>>tires;
    cout<<"Maintenance:"<<endl;
    cin>>mtnce;
    total = LoanPmt + insur + gas + oil + tires + mtnce;
    Atotal = (LoanPmt + insur + gas + oil + tires + mtnce) * 12;
    
    //Display the results
    cout<<"Total monthly expenses: $"<<total<<endl;
    cout<<"Total Annual cost of the expenses: $"<<Atotal<<endl; 
     //Exit Stage Here:          

    return 0;
}

