/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on March 27, 2014, 12:06 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main()

{
unsigned seed = time(0);
srand (seed);

int rnda, rndb, total, answer;
rnda = rand ()%50;
rndb = rand ()%50;
total = rnda+rndb;

cout<< "   " <<rnda<<endl;
cout<< "+  " <<rndb<<endl;
cout<< "______\n";
cout<< "Enter the correct answer:\n";
cin>>answer;

if (answer==total){
cout<< "Answer is correct ";
}
else{
	cout << "Answer is incorrect \n";
	cout << "The correct answer is " << total << endl;
}

return 0;
}