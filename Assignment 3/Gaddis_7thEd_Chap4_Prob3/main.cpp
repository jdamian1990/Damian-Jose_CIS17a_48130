/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on March 26, 2014, 8:14 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare Variables
    int n1,n2,n3;
   
    
//Input the following
    cout<<"Enter the following in numeric form.\nExample: 6/10/60 "
            "\nThe program determines whether the month times the day is equal to the year."
            "\nIf the m*d=year then it should say magic. "<<endl;
    cout<<"Enter the Month:"<<endl;
    cin>>n1;
    cout<<"Enter the Day:"<<endl;
    cin>>n2;
    cout<<"Enter the Two digit year:"<<endl;
    cin>>n3;
      
    if (n1*n2==n3){cout<<"The date is Magic";}
    if (n1*n2<n3){cout<<"The Date is Not Magic";}
    if (n1*n2>n3){cout<<"The Date is Not Magic";}
   //Exit Stage Here:
    return 0;
}

