/* 
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created on July 9, 2020, 3:19 PM
 * Purpose:  Convert to Roman Numerals
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants only
//Math, Physics, Conversions, Higher Order Dimension 

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all variables
    unsigned short con;//Convert numbers 
    string rom;//roman numerals
    string inte;
    
    //Initialize Variables
    con=rand()%2001+1000;
    cout<<"The number to convert = "<<con<<endl;
    cout<<"The converted Number to Roman Digits"<<endl;
    cin>>inte;
    
    //First process the 1000's with a Switch Statement
    char n1000s=con/1000;
    switch(n1000s){
        case 3:rom+="M";
        case 2:rom+="M";
        case 1:rom+="M";
    }
    
    
    con-=n1000s*1000;
    char n100s=con/100;
    rom+=n100s==9?"CM":
           n100s==8?"DCCC":
           n100s==7?"DCC":
           n100s==6?"DC":
           n100s==5?"D":
           n100s==4?"CD":
           n100s==3?"CCC":
           n100s==2?"CC":
           n100s==1?"C":"";
    
    //Process the 10's with a dependent if
    con-=n100s*100;
    char n10s=con/10;
    if(n10s==9)rom+="XC";

    

    
    //Display Outputs
    cout<<rom<<endl;

    //Exist Stage Right
    return 0;
} 

