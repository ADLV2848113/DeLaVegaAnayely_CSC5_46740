/* 
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created on January 8, 2020, 1:47 PM
 * Purpose: Display the winner in order of name and time.
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char p1, p2;// player 1 and player 2
    
    //Initialize or input i.e. set variable values
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input player1 and player2 choice"<<endl;
    cin>>p1, p2;
    //p1=toupper(p1);
    //p2=toupper(p2);
    
    p1=((p1>=97)?p1-32:p1);//convert lower to upper case
    p2=((p2>=97)?p2-32:p2);
   
    //Map inputs -> outputs
    switch(p1==p2){
        case true:cout<<"Nobody wins";break;
        case false:
            switch(p1){
                case 'R':
                    switch (p2){
                        case 'P':cout<<"Paper covers rock.";break;
                        case 'S':cout<<"Rock breaks scissors.";break;
                    }
                    break;
                    case 'P':
                      switch (p2){
                            case'R':cout<<"Paper covers rock.";break;
                            case'S':cout<<"Scissors cuts paper";break;
                            }
                            break;
                     case 'S':
                      switch(p2){
                            case'P':cout<<"Scissors cuts paper.";break;
                            case'R':cout<<"Rock breaks scissors";break;
                            }
            }
    }

    

    //Exit stage right or left!
    return 0;
}


