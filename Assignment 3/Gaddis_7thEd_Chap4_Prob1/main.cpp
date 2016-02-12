/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on March 26, 2014, 5:34 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables
    int n1,n2;
    
    cout<<"Enter two numbers"<<endl;
    cout<<"Enter the first number: "<<endl;
    //Input the numbers
    cin>>n1;
    cout<<"Enter the second number: "<<endl;
    cin>>n2;
    //Display the result
    if (n1>n2)
        cout<<n1<<" is larger than "<<n2<<"."<<endl;
    if (n2>n1)
        cout<<n2<<" is larger than "<<n1<<"."<<endl;
    //Exit Stage Here:      
    return 0;
}

