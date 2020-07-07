/*
 * File:   Miles per Gallon
 * Author: Anayely De La Vega
 * Created on July 4, 2020, 4:04 PM
 * Purpose: Calculates a car's gas milage. 
 */

//System Libraries
#include <iostream> //I/O Library 
#include <iomanip>//to setprecision
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes 

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    float miles, galls, miGall;
    
    //Initialize all known variables 
    
    //Process Inputs to Outputs -> Mapping Process
    // ask for the number of gallons
    cout<<"Input the numbers of gallons the car can hold: ";
    cin>>galls;
    //ask for the number of miles
    cout<<"Input the number of miles it can drive on a full tank :";
    cin>>miles;
    //Maps known values to the unknown objectives 
    miGall = miles / galls;
    
    
    //Display the Inputs/Outputs
    cout<< setprecision(2)<<fixed;
    cout<<"The number of miles per gallons is : " << miGall;
    
    
    //Clean up the code, close files. deallocate memory, etc...
    //Exit stage right 
    return 0;
}

