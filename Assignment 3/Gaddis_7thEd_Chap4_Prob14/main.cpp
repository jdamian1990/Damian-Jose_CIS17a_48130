/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on May 14, 2014, 11:41 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare Variables
    string name1,name2,name3;
    int R1,R2,R3;
//Prompt the user to  enter data
    cout<<"Please enter the name of the first runner: ";
    cin>>name1;
    
    cout<<"Please enter the time(minutes) of the first runner: ";
    cin>>R1;
    
    cout<<"Please enter the name of the second runner: ";
    cin>>name2;
    
    cout<<"Please enter the time(minutes) of the second runner: ";
    cin>>R2;
    
    cout<<"Please enter the name of the third runner: ";
    cin>>name3;
    
    cout<<"Please enter the time(minutes) of the third runner: ";
    cin>>R3;
 //Calculate the results
    if (R1>R2 && R1>R3 && R2>R3){
        cout<<name1<<" came in first at "<<R1<<" minutes."<<endl;
        cout<<name2<<" came in second at "<<R2<<" minutes."<<endl;
        cout<<name3<<" came in third at "<<R3<<" minutes."<<endl;
    }
    if (R1>R2 && R1>R3 && R2<R3){
        cout<<name1<<" came in first at "<<R1<<" minutes."<<endl;
        cout<<name3<<" came in second at "<<R3<<"minutes."<<endl;
        cout<<name2<<" came in third at "<<R2<<" minutes."<<endl;
    }        
    if (R2>R3 && R2>R1 && R1>R3){
        cout<<name2<<" came in first at "<<R2<<" minutes."<<endl;
        cout<<name1<<" came in second at "<<R1<<"minutes."<<endl;
        cout<<name3<<" came in third at "<<R3<<" minutes."<<endl;
    }
     if (R2>R3 && R2>R1 && R1<R3){
        cout<<name2<<" came in first at "<<R2<<" minutes."<<endl;
        cout<<name3<<" came in second at "<<R3<<" minutes."<<endl;
        cout<<name1<<" came in third at "<<R1<<" minutes."<<endl;
     }
     if (R3>R1 && R3>R2 && R1>R2){
        cout<<name3<<" came in first at "<<R3<<" minutes."<<endl;
        cout<<name1<<" came in second at "<<R1<<" minutes."<<endl;
        cout<<name2<<" came in third at "<<R2<<" minutes."<<endl;
     }
     if (R3>R1 && R3>R2 && R1<R2){
        cout<<name3<<" came in first at "<<R3<<" minutes."<<endl;
        cout<<name2<<" came in second at "<<R2<<" minutes."<<endl;
        cout<<name1<<" came in third at "<<R1<<" minutes."<<endl;
     }
  //Exit Stage Here:
    
    return 0;
}

