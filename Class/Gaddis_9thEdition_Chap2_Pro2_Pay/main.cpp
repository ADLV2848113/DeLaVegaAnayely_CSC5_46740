/* 
 * File:   Pay
 * Author: Anayely De La Vega
 * Created on January 4, 2020, 1:03 AM
 * Purpose:  Calculate the new amount of pay after the 7.6% increase
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
    //Set the random number see
    //Declare Variables
    float retPay;//Retroactive pay
    float newAnn;//new annual salary
    float newMon;// new monthly pay
    float salary;// original salary
    
    //Initialize or input i.e. set variable values
    salary = 2000;
    cin>>salary;
    retPay = ( salary * 0.076 ) / 2;
    newAnn = salary * ( 1 + 0.076 );
    newMon = newAnn / 12;
    
    
    //Map inputs -> outputs
    cout<< "Input previous annual salary."<<endl;
    cout<< "Retroactive pay    = $  "<< setprecision(2) <<fixed <<retPay <<endl;
    cout<< "New annual salary  = $"<< setprecision(2) <<fixed << newAnn <<endl;
    cout<< "New monthly salary = $ "<< setprecision(2) <<fixed <<newMon;
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

