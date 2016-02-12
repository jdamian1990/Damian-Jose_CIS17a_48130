/*
 * File:   main.cpp
 * Author: Jose Damian
 * Created on October 13, 2014, 1:58 PM
 * Project 1
 */

//System Libraries
#include <iostream>//require for input and output 
#include <cstdlib>//standard library
#include <ctime> //for random generator
#include <fstream>//to read and write to files
using namespace std;

//Global Constants  
 int map[10][10];//2D arrays for map rows = 10, columns = 10--P1
 int map2[10][10];//2D arrays for map rows = 10, columns = 10--P2
 
//Function Prototypes
  int ships(); //Location of ships P1
  int ships2(); //Location of ships P2
  void sShips(); //Placement of random ships P1
  void sShips2();//Placement of random ships P2
  void Show();//Exact Location of P1 or cheat map
  void Show2();//For Location of P2 or cheat map
  
 //For attacking coordinates 
  bool Strike(int,int);//Pass by Value and bool used for true(1) or false(0) 
  bool Strike2(int,int);//For player 2
 void mships();//Map no ships P1
 void mships2();//Map no ships P2
 void Input(int &);  //pass by reference input
 
//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables
    int a=0;
    srand(time(0));//Random generator 
    //Function for random ships  
    sShips();//Calls map with random ships for P1
    sShips2();//Calls map with random ships for P2
    //Welcomes the Players 
    cout<<"Welcome to the Battleship Game: "<<endl;
    cout<<"2 Player game mode: "<<endl; 
    cout<<"Enter 1 to begin the game or any other number to exit program: "<<endl;
    //Prompt Users for input
    cin>>a;
    Input(a);//pass by reference
    cout<<a;

//Exit Stage Right:
    return 0;
}

int ships(){//Location of Ships
 //Declare Variables   
    int c = 0;
    int x = 0,y = 0;
    for(int i=0;i<10;i++){
        
        for (int j=0;j<10;j++){

            if(map[i][j]==1)
                    c++;
        }
    }          
    return c;// returns c
}
//This is for player 2
int ships2(){
    int c =0;
    int x=0,y=0;
    for(int i=0;i<10;i++){
        
        for (int j=0;j<10;j++){

            if(map2[i][j]==1)
                    c++;
        }
    }          
    return c;//returns c
}
void Input(int &a){//Pass by reference &
    //Declare Variables
        //For player1
    int A,B;
        //For player 2
    int C,D;
    // if user enters 1 then it continues to display the following  
    if (a==1){
    //example of the map and Display it on screen
       cout<<"\n 0 0 0 0 0 0 0 0 0 0 "<<endl;
       cout<<" 0 0 0 0 0 0 0 0 0 0 "<<endl;
       cout<<" 0 0 0 0 0 0 0 0 0 0 "<<endl;
       cout<<" 0 0 0 0 0 0 0 0 0 0 "<<endl;
       cout<<" 0 0 0 0 0 0 0 0 0 0 "<<endl;
       cout<<" 0 0 0 0 0 0 0 0 0 0 "<<endl;
       cout<<" 0 0 0 0 0 0 0 0 0 0 "<<endl;
       cout<<" 0 0 0 0 0 0 0 0 0 0 "<<endl;
       cout<<" 0 0 0 0 0 0 0 0 0 0 "<<endl;
       cout<<" 0 0 0 0 0 0 0 0 0 0 \n"<<endl; 
     //Welcome the user
    cout<<" Map is Above "<<endl;
    cout<<"Please enter the following to begin the game:"<<endl; 
   do{
       //Prompt user to input data
       cout<<"Player 1 your turn: "<<endl;
       cout<<"Enter the coordinates: (Ex:(0,1) - up to 9)";
       cout<<"(Enter 21 for cheat map): \n";
       cout<<"Coordinate 1(column): ";
       //Loop for number validation
       do{
       //Coordinate A is equal to the row
       cin>>A;
       //Loop for number validation
       if (A!=0&&A!=1&&A!=2&&A!=3&&A!=4&&A!=5&&A!=6&&A!=7&&A!=8&&A!=9)
           cout<<"\nTry again.Please enter a number from 0 to 9(Enter 21 for cheat map): "<<endl;
       //displays the answers
       if(A==21){
           Show();
       cout<<"Player 1 your turn again: "<<endl;
       cout<<"Enter the coordinates: (Ex:(0,1) - up to 9)\n";
       cout<<"(Enter 21 for cheat map): \n";
       cout<<"Coordinate 1(column): ";   
       }
       //Loop for the validation
       }while(A!=0&&A!=1&&A!=2&&A!=3&&A!=4&&A!=5&&A!=6&&A!=7&&A!=8&&A!=9);
       cout<<"Coordinate 2(row): ";
        //Loop for number validation
       do{
       //Coordinate B is equal to the column
       cin>>B;
       //Loop for number validation
       if (B!=0&&B!=1&&B!=2&&B!=3&&B!=4&&B!=5&&B!=6&&B!=7&&B!=8&&B!=9)
       cout<<"\nTry again.Please enter a number from 0 to 9: "<<endl;
         if(A==21){//displays the answers
           Show();
       cout<<"Player 1 please re-enter Coordinate 2(row):  ";}
       }while(B!=0&&B!=1&&B!=2&&B!=3&&B!=4&&B!=5&&B!=6&&B!=7&&B!=8&&B!=9);
        if(Strike(A,B))//(Striking) function is Pass by Value
            cout<<"\nYou got one! You still have "<<ships()<<" ships to shoot down."<<endl;
       else
           cout<<"\nBetter Luck Next Turn. "<<endl;
        
       cout<<endl;
       mships2();
       //Prompt user to input data
       cout<<"Player 2 your turn: "<<endl;
       cout<<"Enter the coordinates: (Ex:(0,1) - up to 9)";
       cout<<"(Enter 21 for cheat map): \n";
       cout<<"Coordinate 1(column): ";
       //Loop for number validation
       do{
       //Coordinate C is equal to the row
               
       cin>>C;
       //Loop for number validation
       if (C!=0&&C!=1&&C!=2&&C!=3&&C!=4&&C!=5&&C!=6&&C!=7&&C!=8&&C!=9)
           cout<<"\nTry again.Please enter a number from 0 to 9(Enter 21 for cheat map): "<<endl;
       //displays the answers
       if(C==21){
           Show2();
       cout<<"Player 2 your turn again: "<<endl;
       cout<<"Enter the coordinates: (Ex:(0,1) - up to 9)";
       cout<<"(Enter 21 for cheat map): \n";
       cout<<"Coordinate 1(column): ";  }
       }while(C!=0&&C!=1&&C!=2&&C!=3&&C!=4&&C!=5&&C!=6&&C!=7&&C!=8&&C!=9);
       cout<<"Coordinate 2(row): ";
        //Loop for number validation
       do{
       //Coordinate D is equal to the column
       cin>>D;
       //Loop for number validation
       if (D!=0&&D!=1&&D!=2&&D!=3&&D!=4&&D!=5&&D!=6&&D!=7&&D!=8&&D!=9)
       cout<<"\nTry again.Please enter a number from 0 to 9: "<<endl;
         if(C==21){//displays the answers
           Show2();
       cout<<"Player 2 please re-enter Coordinate 2(row):  ";}
       }while(D!=0&&D!=1&&D!=2&&D!=3&&D!=4&&D!=5&&D!=6&&D!=7&&D!=8&&D!=9);
        if(Strike2(C,D))//(Striking) function is Pass by Value
            cout<<"\nYou got one! You still have "<<ships2()<<" ships to shoot down."<<endl;
       else
           cout<<"\nBetter Luck Next Turn. "<<endl;
        
       cout<<endl;
       //for files
       ofstream table;
       table.open("Map.txt");
       table<<"The BattleShip Game is a two player game the first to hit all targets wins"<<endl;
       table<<"\r\nThere is a total of 10 ships to drop. "<<endl;
       table<<"\r\nSo Have fun and Good Luck "<<endl;
       table<<"\r\n"<<endl;
       table<<"\r\nThis is the map for the BattleShip Game Player 1: "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;      
       table<<"\r\n"<<endl;
       table<<"\r\nThis is the map for the BattleShip Game Player 2: "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;  
       table<<"\r\nRemember first to hit all targets wins ;) "<<endl;  
       table.close();
       mships();   
     //Loop to stop when one player wins the game  
    }while (ships()!=0||ships2()!=0);
    }
    cout<<"Thank you for Playing BattleShips Game :) "<<endl;
    }

bool Strike(int A, int B){//Strike Player 1 //Pass by Value Function
  
    if (map[A][B] == 1){
        map [A][B] = 2;
        return true;
    }
    return false;
}

bool Strike2(int C, int D){//Strike Player 2 //Pass by Value Function
  
    if (map2[C][D] == 1){
        map2[C][D] = 2;
        return true;
    }
    return false;
}

void sShips(){//sShips is to set the ships //For placement of Ships
    int s = 0;
    int nShips = 10;//This is the number of ships
    while(s<nShips){
        int A = rand()%10;//Set for random up to 9
        int B = rand()%10;//Set for random up to 9
        if(map[A][B] !=1){
            s++;
            map[A][B] = 1;
        }
    }
}
//For placement of Ships
//For player 2
void sShips2(){//sShips is to set the ships
    int s = 0;
    int nShips = 10;//This is the number of ships
    while(s<nShips){
        int C = rand()%10;//Set for random up to 9
        int D = rand()%10;//Set for random up to 9
        if(map2[C][D] !=1){
            s++;
            map2[C][D] = 1;
        }
    }
}

//To show where the ships are located
void Show(){//Show() is the cheat map for location of ships
        for(int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            cout<<map[i][j]<<" ";           
        }
        cout<<endl;
    }
}
//To show where the ships are located
//For player 2
void Show2(){//Show() is the cheat map for location of ships
        for(int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            cout<<map2[i][j]<<" ";           
        }
        cout<<endl;
    }
}
//The map for the user to see where to strike next
void mships(){//the ships on the map
        for(int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            
            if (map[i][j] ==1){
            cout<<"0 ";
            }
            else 
                cout<<map[i][j]<<" ";
        }
        cout<<endl;
    }
}
//The map for player 2 the user to see where to strike next
void mships2(){//the ships on the map
        for(int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            
            if (map2[i][j] ==1){
            cout<<"0 ";
            }
            else 
                cout<<map2[i][j]<<" ";
        }
        cout<<endl;
    }
}