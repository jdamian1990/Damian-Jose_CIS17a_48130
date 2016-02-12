/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on March 17, 2014, 1:39 AM
 */

#include <iostream>
#include <string>
#include <iomanip>

//System Libraries
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begin Here
int main(int argc, char** argv) {
// Declare Variables
    int tksAd,tksCh,Gprofit,Nprofit,DisPaid;
    string movie;
    float Ad, Ch;

    
    cout<<"Enter the name of the Movie: "<<endl;
    cin>>movie; //movie name
    cout<<"Enter the amount of adult tickets: "<<endl;
    cin>>Ad;
    cout<<"Enter the amount of child tickets: "<<endl;
    cin>>Ch;
    
     //Define Values
   tksAd = 6.0 * Ad ;
   tksCh = 3.0 * Ch ;
   
    //Calculate the results:
        //Total Gross Profit
    Gprofit = tksAd + tksCh ;
        //total Net profit
    Nprofit = (tksAd + tksCh) * .20;
        //Total paid to distributor
    DisPaid = Gprofit - Nprofit;    
    
    //Display the results
    cout<<"Movie Name: "<<movie<<endl;
    cout<<"Adult Tickets Sold: "<<Ad<<endl;
    cout<<"Children Tickers Sold: "<<Ch<<endl;
    cout<<"Gross Box Office Profit: $"<<Gprofit<<endl;
    cout<<"Net Box Office Profit: $"<<Nprofit<<endl;
    cout<<"Amount Paid to Distributor: $"<<DisPaid<<endl;
    //Exit Stage Here:
    return 0;
}
