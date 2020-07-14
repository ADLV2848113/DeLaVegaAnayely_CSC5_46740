/* 
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created on January 7, 2020, 4:42 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
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
    int days, payDay, paySum;
    //Declare Variables
    cin>>days;
    payDay=1;
    paySum=payDay;
    //Initialize or input i.e. set variable values
    for (int day=2;day<=days;day++){
        payDay*=2;
        paySum+=payDay;
    }
    //Map inputs -> outputs
    int dollars=paySum/100;
    int pennies=paySum%100;
    cout<<"Pay = $"<<dollars<<"."<<(pennies<10?"0":"")<<pennies;

    //Exit stage right or left!
    return 0;
}