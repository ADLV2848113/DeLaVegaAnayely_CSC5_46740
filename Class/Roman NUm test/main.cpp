/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 15, 2020, 11:10 AM
 * Purpose:  Arabic Number to Roman Numerals
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    unsigned short number;
    
    //Initialize Variables
    cout<<"This program converts Arabic to Roman Numerals"<<endl;
    cout<<"Input a number between 1 - 3000"<<endl;
    cin>>number;
    //Check for a valid input
    if(number>=1 && number<=3000){
    //Process or map Inputs to Outputs
        //Determine 1000's, 100's, 10's, 1's
        unsigned char n1000s,n100s,n10s,n1s;
        n1000s=number/1000;   //Shift 3 places to the left
        n100s=number%1000/100;//Remainder of division of 1000 then shift 2 left
        n10s=number%100/10;   //Remainder of division of 100 then shift 1 left
        n1s=number%10;        //Remainder of division by 10
        
        //Output the number of 1000's in Roman Numerals
        //Using the Switch Statement
        switch(n1000s){
            case 3:cout<<'Thousand';
            case 2:cout<<'Thousand';
            case 1:cout<<'Thousand';
        }
        
        //Output the number of 100's
        //Using the Ternary Operator
        cout<<(n100s==9?"Nine Hundred":
               n100s==8?"Eight Hundred":
               n100s==7?"Seven Hundred":
               n100s==6?"Six Hundred":
               n100s==5?"Five Hundred":
               n100s==4?"Four Hundred":
               n100s==3?"Three Hundred":
               n100s==2?"Two Hundred":
               n100s==1?"One Hundred":"");
        
        //Output the number of 10's
        //Using Independent If Statements
        if(n10s==9)cout<<"Ninety";
        if(n10s==8)cout<<"Eighty";
        if(n10s==7)cout<<"Seventy";
        if(n10s==6)cout<<"Sixty";
        if(n10s==5)cout<<"Fifty";
        if(n10s==4)cout<<"Forty";
        if(n10s==3)cout<<"Thirty";
        if(n10s==2)cout<<"Twenty";
        if(n10s==1)cout<<"Ten";
        
        //Output the number of 1's
        //Using Dependent If Statements
        if(n1s==9)cout<<"Nine";
        else if(n1s==8)cout<<"Eight";
        else if(n1s==7)cout<<"Seven";
        else if(n1s==6)cout<<"Six";
        else if(n1s==5)cout<<"Five";
        else if(n1s==4)cout<<"Four";
        else if(n1s==3)cout<<"Three";
        else if(n1s==2)cout<<"Two";
        else if(n1s==1)cout<<"One";
        
        //Reiterate the input value
        cout<<" = "<<number<<endl;
                
    //The Path to Exit
    }else{
        cout<<"You have problems following Directions"<<endl;
        cout<<"Come back when you decide to comply"<<endl;
    }

    //Exit stage right!
    return 0;
}



