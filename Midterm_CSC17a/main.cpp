//Jose Damian
//October 24, 2014
//Menu for the midterm

//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;

//Global Constants



//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void aNumber(string &);
int balnce();
int Checks();
int depos();
int total(int, int, int);
void aSum(string, int, int, int, int);
void eData(int[], string);
void dData(int[], string);
string getName(int);
int getHrs(int);
float getRt(int);
float getGrs(int, float);
void rprt(int[], float);

 //Structure Declaration for Problem1
struct info{
 string accnt;//user's account number
int begBal;//balance at beginning of the month
int chcks;//total of checks written during the month
int depst;//total of deposits made during the month
int newBal;//balance after calculations
};

 //Structure for problem 2
struct info2{
string name;
int hours;//hours worked
float rate;//rate of pay
float gross;//gross pay
};

//Execution Begins Here:
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        case 4:    problem4();break;
        case 5:    problem5();break;
        case 6:    problem6();break;
        default:   def(inN);}
    }while(inN>=1&&inN<=6);
    return 0;//If midterm not perfect, return something other than 1
}

void Menu(){
    cout<<"Menu for the Midterm"<<endl;
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        return inN;
}

void problem1(){
info user;
aNumber(user.accnt);
user.begBal = balnce();
user.chcks = Checks();
user.depst = depos();
user.newBal = total(user.begBal, user.chcks, user.depst);
aSum( user.accnt, user.begBal, user.chcks, user.depst, user.newBal);
cout<<endl;
//Exit Stage right
}

void problem2(){        

//Declare variables
int input, tHours=0;
float tGross=0;
cout<<"Please enter the number of employees: "<<endl;
cin>>input;

if(input<0){
do{

cout<<"Please try again. Enter number higher than 0."<<endl;
cin>>input;
}while(input<0);
}

info2 array1[input];
for(int i=0;i<input;i++){
array1[i].name = getName(i);
array1[i].hours = getHrs(i);
array1[i].rate = getRt(i);
array1[i].gross = getGrs(array1[i].hours, array1[i].rate);
tHours += array1[i].hours;
tGross += array1[i].gross;
}

//Display Report
cout<<endl;
cout<<"REPORT:"<<endl;
cout<<"Name     Hours        Pay_Rate    Gross_pay"<<endl;
for(int i=0;i<input;i++){
cout<<left<<setw(11)<<array1[i].name<<setw(16)<<array1[i].hours;
cout<<setw(11)<<setprecision(2)<<showpoint<<fixed<<array1[i].rate;
cout<<setw(10)<<setprecision(2)<<showpoint<<fixed<<array1[i].gross<<endl;
}
cout<<"Total hours :"<<tHours<<" hours"<<endl;
cout<<"Total gross pay: $"<<setprecision(2)<<showpoint<<fixed<<tGross<<endl;
cout<<endl;
//Exit Stage Right
}


void problem3(){
        cout<<"In problem # 3--Did not Complete this Problem"<<endl<<endl;
}

void problem4(){
//Declare variables
char input;
string digit;
int test[4];
//Prompt user for input
cout<<"Please enter 1 or 2: "<<endl;
cout<<"1 = encryption of 4 digits "<<endl;
cout<<"2 = decryption of 4 digits"<<endl;
cin>>input;

if(input!='1'&&input!='2'){
do{//Loop
cout<<"Invalid input, select 1 or 2"<<endl;
cin>>input;
}while(input!='1'&&input!='2');
}
cout<<"Please enter the 4 digits:"<<endl;
cin>>digit;
if(digit.length()!=4){
do{
cout<<"Please try again. Enter 4 digits only: "<<endl;
cin>>digit;
}while(digit.length()!=4);
}
//For validation
for(int i=0;i<4;i++){
if(digit[i]<'0'||digit[i]>'7'){
cout<<"Please try again. Enter only numbers ranging from 0 to 7: "<<endl;
cout<<endl;
cout<<endl;
return;
}
}
for(int i=0;i<4;i++){
test[i]=digit[i]-48;
}

test[4]=='\0';//null terminator
if(input=='1') eData(test, digit);
if(input=='2') dData(test, digit);
//Exit stage right
}

void problem5(){
cout<<"B) "<<endl;   
cout<<"The highest factorial for an int is 12"<<endl;
cout<<"The highest factorial for a byte variable is 5"<<endl;
cout<<"The highest factorial for a double is 170"<<endl;
cout<<"The highest factorial for a long is 12"<<endl;
cout<<"The highest factorial for a float is 34"<<endl;
cout<<"The highest factorial for a short is 7"<<endl;

}

void problem6(){
cout<<"The Answers are: "<<endl;
cout<<"A)"<<endl;
cout<<"2.125 converted"<<endl;
cout<<"Binary: 10.001"<<endl;
cout<<"Octal: 2.1"<<endl;
cout<<"Hex: 2.2"<<endl;
cout<<"\n0.06640625 converted"<<endl;
cout<<"Binary: 0.00010001"<<endl;
cout<<"Octal: 0.042"<<endl;
cout<<"Hex: 0.11\n"<<endl;
}

void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}

//Functions for problem 1
void aSum(string a, int b, int c, int d, int e){
//output account report
cout<<"ACCOUNT SUMMARY--------------:"<<endl;
cout<<"Account Number................"<<a<<endl;
cout<<"Principal Balance............$"<<b<<endl;
cout<<"Total Checks.................$"<<c<<endl;
cout<<"Total Deposits...............$"<<d<<endl;
cout<<"Final Account Balance........$"<<e<<endl;

if(e<0){
e-=12;
cout<<"Over drawn fee which is included is $12."<<endl;
cout<<"Your new balance is $"<<e<<endl;
}
}
void aNumber(string &accnt){
//Prompt user for account number
cout<<"Please enter your Account number:(5 digits only) ";
cin>>accnt;
//Loop for string
if(accnt.length()!=5){
do{
//try again if not 5 #
cout<<endl;
cout<<"Please try again. (5 digits only):"<<endl;
cin>>accnt;
cout<<endl;
}while(accnt.length()!=5);
}

accnt[5]='\0';//null terminator
}
int balnce(){
//Declare variables
int number;
cout<<"Please enter your Principal Account Balance: $ "<<endl;
cin>>number;
return number;
}
int Checks(){
//Declare variables
int number;
int input;
int total=0;
cout<<"Please enter the number of checks this month:"<<endl;
cin>>input;
if(input<0){
do{
cout<<"Please try again.Enter value above 0"<<endl;
cin>>input;
}while(input<0);
}
//collect amount of each check using loop
cout<<"Input the amount of each check:"<<endl;
for(int i=0;i<input;i++){
cout<<"Check #"<<i+1<<": ";
cin>>number;
//Input Validation
if(number<0){
do{
//Input validation
cout<<"Please try again.Enter value above 0"<<endl;
cout<<"Check #"<<i<<": ";
cin>>number;
}while(number<0);
}
//Calculate
total += number;
}
return total;
}
int depos(){
//Declare variables
int number, input, total=0;
cout<<"Please enter the number of deposits this month:"<<endl;
cin>>input;
//test if input is valid
if(input<0){
do{
cout<<"Please try again.Enter value above 0"<<endl;
cin>>input;
}while(input<0);
}
//Loop deposit
cout<<"Input amount of each deposit:"<<endl;
for(int i=0;i<input;i++){
cout<<"Deposit #"<<i+1<<": ";
cin>>number;
//Input validation
if(number<0){
do{
cout<<"Please try again.Enter value above 0"<<endl;
cout<<"Deposit #"<<i<<": ";
cin>>number;
}while(number<0);
}
//Calculate
total += number;
}
return total;
}
int total(int b, int c, int d){
//declare variables
int total=0;
total = b + (c*-1) + d;
return total;
}


//Functions for Problem2
string getName(int i){
//declare number variable
string number;
cout<<"Input the name for employee "<<i+1<<": ";
cin.ignore();
getline(cin, number);
return number;
}
int getHrs(int i){
//Declare number variable
int number;
cout<<"Input the hours worked for employee "<<i+1<<": ";
cin>>number;
//test if input is valid
if(number<0){
do{

cout<<"Please try again. Enter number higher than 0."<<endl;
cin>>number;
}while(number<0);
}
return number;
}
float getRt(int i){
//Declare number variable
float number;

cout<<"Input the pay rate for employee "<<i+1<<": $ ";
cin>>number;

if(number<0){
do{

cout<<"Please try again. Enter number higher than 0."<<endl;
cin>>number;
}while(number<0);
}
return number;
}
float getGrs(int h, float r){
//Declare Variables
float number=0;
//Loop
if(h>40){
    //Calculations
number += (h-40) * (3.0*r);
number += 20 * (2.0*r);
number += 20.0 * r;
}
else if(h<=40&&h>20){
number += (h-20) * (2.0*r);
number += 20.0 * r;
}
else if(h<=20){
number += h * r;
}
return number;
}



void eData(int test[], string digit){
//Declare variables
char tempA, tempB;
//encrypt digit
for(int i=0;i<4;i++){
test[i]+=3;
test[i]%= 8;
}
//swap numbers
//swap first two digits
tempA=test[0];
tempB=test[1];
test[0]=tempB;
test[1]=tempA;
//swap last two
tempA=test[2];
tempB=test[3];
test[2]=tempB;
test[3]=tempA;
//output encrypted digit
cout<<"Your digits entered: "<<digit<<endl;
cout<<"Encrypted digits: ";
for(int i=0;i<4;i++){
cout<<test[i];
}
cout<<endl;
cout<<endl;
}
void dData(int test[], string digit){
//Declare variables
char tempA, tempB;
//decrypt digit
for(int i=0;i<4;i++){
if(test[i]>=0&&test[i]<=2){
test[i]+=5;
}
else{
test[i]-=3;
}
}
//swap numbers
//swap first two digits
tempA=test[0];
tempB=test[1];
test[0]=tempB;
test[1]=tempA;
//swap last two
tempA=test[2];
tempB=test[3];
test[2]=tempB;
test[3]=tempA;
//output encrypted digit
cout<<"Code entered: "<<digit<<endl;
cout<<"Encrypted digit: ";
for(int i=0;i<4;i++){
cout<<test[i];
}
cout<<endl;
cout<<endl;
}