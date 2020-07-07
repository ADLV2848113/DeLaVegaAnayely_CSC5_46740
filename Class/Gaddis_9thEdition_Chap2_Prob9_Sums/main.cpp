/* 
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created on January 6, 2020, 1:45 PM
 * Purpose:  Calculate positive and negative numbers
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int x;// x will represent any of the 10 numbers
    int neg;//negative numbers
    int pos;//positive numbers
    
    //Initialize or input i.e. set variable values
    neg=pos=0;
    
    //Map inputs -> outputs
    cin>>x;
    pos+=x>0?x:0;
    neg+=x<0?x:0;
    
    cin>>x;
    pos+=x>0?x:0;
    neg+=x<0?x:0;
    
    cin>>x;
    pos+=x>0?x:0;
    neg+=x<0?x:0;
    
    cin>>x;
    pos+=x>0?x:0;
    neg+=x<0?x:0;
    
    cin>>x;
    pos+=x>0?x:0;
    neg+=x<0?x:0;
    
    cin>>x;
    pos+=x>0?x:0;
    neg+=x<0?x:0;
    
    cin>>x;
    pos+=x>0?x:0;
    neg+=x<0?x:0;
    
    cin>>x;
    pos+=x>0?x:0;
    neg+=x<0?x:0;
    
    cin>>x;
    pos+=x>0?x:0;
    neg+=x<0?x:0;
    
    cin>>x;
    pos+=x>0?x:0;
    neg+=x<0?x:0;
    
    
    //Display the outputs
    cout<< "Input 10 numbers, any order, positive or negative"<<endl;
    cin>>x;
    cout<< "Negative sum ="<<setw(4)<<neg<<endl;
    cin>>neg;
    cout<< "Positive sum ="<<setw(4)<<pos<<endl;
    cin>>pos;
    cout<< "Total sum    ="<<setw(4)<< pos + neg;
    

    //Exit stage right or left!
    return 0;
}

