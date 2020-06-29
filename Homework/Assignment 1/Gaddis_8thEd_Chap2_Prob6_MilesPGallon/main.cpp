/*
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created on June 27, 2020, 3:55 PM
 * Purpose: 
 */

//System Libraries
#include <iostream> //I/O Library 
#include <cmath>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes 

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    int miles;
    int galls;
    int total;
    
    
    //Initialize all known variables 
    miles = 350;
    galls = 16;
    total = miles / galls;
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives 
    
    //Display the Inputs/Outputs
    cout<< total << " miles per gallons " <<endl;
    
    //Clean up the code, close files. deallocate memory, etc...
    //Exit stage right 
    return 0;
}

