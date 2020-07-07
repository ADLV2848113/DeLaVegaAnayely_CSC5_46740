/* 
 * File:   Paycheck
 * Author: Anayely De La Vega
 * Created on January 3, 2020, 7:48 PM
 * Purpose:  To calculate the gross pay
 */

//System Libraries
#include <iostream>  //Input/Output Library
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
    float payChe;// the paycheck in dollars ($'s)
    float payRat;// $'s / hr
    float overRat;//overtime rate
    int   hourWor;//the hours worked
    int   doubtim;// overtime
    
    
    //Initialize or input i.e. set variable values
    doubtim = 40;//40 hours
    overRat = 2;// double time
    cin>>payRat>>hourWor;

    
    
    //Map inputs -> outputs
      payChe = hourWor * payRat; //regular hours paychech
    //than add the overtime
   if (hourWor>doubtim){
        payChe+=(overRat-1)*(hourWor-doubtim)*payRat;
    }
    
    //Display the outputs
    cout<< fixed << setprecision(2) << showpoint;
    cout<< "This program calculates the gross paycheck." <<endl;
    cout<< "Input the pay rate in $'s/hr and the number of hours." <<endl;
    cout<< "Paycheck = $"<< setw(6) << payChe;

    //Exit stage right or left!
    return 0;
}

