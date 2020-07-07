/* 
 * File:  Insurance
 * Author: Anayely De La Vega
 * Created on January 3, 2019, 6:18 PM
 * Purpose:  Calculate the amount of insurance he/she should buy the property for.
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
  int totalCost, minInsurance;
    
    //Initialize or input i.e. set variable values
    //the totalCost is 500000
    cin>>totalCost;
    minInsurance = totalCost * 0.8;
    
    //Map inputs -> outputs
   cout<< setprecision (2) << fixed;
    cout<< "Insurance Calculator" <<endl;
    cout<< "How much is your house worth?" <<endl;
    cout<< "You need $" << minInsurance << " of insurance.";
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

