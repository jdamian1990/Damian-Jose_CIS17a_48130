/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on March 26, 2014, 10:43 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables
    int L,W,A1,A2;
        
    cout<<"Enter the Length and Width of two Rectangles then it will tell you which triangle is bigger."<<endl;
    cout<<"Enter the length of the first rectangle: "<<endl;
    cin>>L;
    cout<<"Enter the width of the first rectangle: "<<endl;
    cin>>W;
    A1=L*W;
    
    cout<<"Enter the length of the second rectangle: "<<endl;
    cin>>L;
    cout<<"Enter the width of the second rectangle: "<<endl;
    cin>>W;
    A2=L*W;   
    
    
    if (A1>A2){cout<<"The First rectangle has the greater area.\n";}
    else if (A1<A2){cout<<"The Second rectangle has the greater area.\n";}
    else if (A1==A2){cout<<"The Areas of both rectangles are equal.\n";}
    //Exit Stage Here:
    return 0;
}

