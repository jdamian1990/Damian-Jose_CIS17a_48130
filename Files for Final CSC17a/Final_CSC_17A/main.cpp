/* 
 * File:   main.cpp
 * Author:
 *
 * Created on December 12, 2014, 10:12 PM
 */

//Libraries
#include <cstdlib>
#include <iostream>
#include <cctype>
#include <cstring>
#include <fstream>

//Header Files
#include "Prob1Random.h"
using namespace std;

//Global Constants

//Function Prototypes
void problem1();
void toContinue();
//Execution Begins Here:
int main(int argc, char** argv) {
 int num;
do{
    cout<<"Menu enter Number: "<<endl;
    cout<<"Problem 1 =  1"<<endl;
cin>>num;
cin.ignore();
//Switch statement
switch(num){
case 0: break;
case 1: problem1(); break;
}
}while(num);
//Exit Stage Right
return 0;
}
void problem1()
{
cout<<" Problem 1 - Random Sequence "<<endl;
char n=5;
char rndseq[]={16,34,57,79,144};
int ntimes=100000;
Prob1Random a(n,rndseq);
unsigned seed=time(0);
srand(seed);
for(int i=1;i<=ntimes;i++)
{
a.randFromSet(rand()%n);
}
int *x=a.getFreq();
const char *y=a.getSet();
for(int i=0;i<n;i++)
{
cout<<int(y[i])<<" occurred "<<x[i]<<" times"<<endl;
}
cout<<"|| The total number of random numbers is "<<a.getNumRand()<<endl;
toContinue();
}
 

void toContinue()
{
cout<<"Press ENTER to continue..."<<endl;
cin.ignore();
}