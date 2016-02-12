/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on March 27, 2014, 9:41 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare Variables
    float BMI,weight,height;
//Prompt user to enter data
    cout<<"Please enter your weight(pounds): ";
    cin>>weight;
    cout<<"Please enter your height(inches): ";
    cin>>height;
//Calculate the BMI
    BMI = weight * (703 / (height * height));
//loop for decision if user is (optimal,underweight,or overweight)
    if (BMI>=18.5 && BMI<=25)
      cout<<"You have OPTIMAL weight."<<endl;
    else if(BMI>=0 && BMI<18.6)
            cout<<"You are UNDERWEIGHT."<<endl;
    else 
        cout<<"You are considered to be OVERWEIGHT"<<endl;    
//Display the results
    cout<<"Your BMI is: "<<BMI<<endl;
 //Exit Stage   
    return 0;
}

