/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on February 26, 2014, 2:13 AM
 */

#include <iostream>
//System Libraries
using namespace std;

//Global Constants

//Function Prototypes 

//Begin Code Execution:

int main(int argc, char** argv) {
   //Variables to hold the regular price, the
   // amount of a profit, and the sale price.
    float regularPrice = 12.67, profit, salePrice;
    
    // Calculate the amount of a 40% profit.
    profit = regularPrice * 0.4;
    
    // Calculate the sale price by subtracting the 
    // profit from the regularPrice + profit;
    salePrice = regularPrice + profit;
    
    // Display the results.
    cout<<"Regular price: $"<< regularPrice<<endl;
    cout<<"Profit amount: $"<< profit<<endl;
    cout<<"Sale price: $"<<salePrice<<endl;          
    return 0;
}

