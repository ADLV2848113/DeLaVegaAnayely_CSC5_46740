/*
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created on June 25, 2020, 5:34 PM
 * Purpose: Calculating the military budget as percentage of the federal budget 
 */

//System Libraries
#include <iostream> //I/O Library 
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversions
const char PERCENT=100;//Percent Conversion

//Function Prototypes 

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    float fedBdgt;//Federal Budget in $'s
    float milBdgt;//Military Budget in $'s
    float milPerc;//Military percentage of the Budget
    
    //Initialize all known variables 
    fedBdgt=4.1e12f;//2018 Budget
    milBdgt=700.0e9f;//2018 Budget
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives 
    milPerc=milBdgt/fedBdgt*PERCENT;
    
    //Display the Inputs/Outputs
    cout<<"2018 Federal Budget      ="<<fedBdgt<<endl;
    cout<<"2018 Military Budget     ="<<milBdgt<<endl;
    cout<<"Military Budget Percent  ="<<milPerc<<"%"<<endl;
    
    //Clean up the code, close files. deallocate memory, etc...
    //Exit stage right 
    return 0;
}

