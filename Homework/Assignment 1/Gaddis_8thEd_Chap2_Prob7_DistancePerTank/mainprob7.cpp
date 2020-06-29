/*
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created on June 27, 2020, 5:02 PM
 * Purpose: Our First Program
 *          Gaddis, Walters, and Muganda from the book Starting out with 
 *          C++ Early Objects, 8th Edition
 *          Hello World Program 
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
    float gallTank;
    float milTown;
    float milHhwy;
    float tankTwn;
    float tankHhwy;
    
    //Initialize all known variables
    gallTank =  20;
    milTown  =  21.5;
    milHhwy  =  26.8;
    tankTwn  = ( milTown * 20 );  
    tankHhwy = (milHhwy * 20 );        
            
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives 
    
    //Display the Inputs/Outputs
    cout<< " When the car is driven in Town the distance is " << tankTwn <<endl;
    cout<< " When the car is driven in the Highway the distance is " << 
            tankHhwy << endl;
    
    //Clean up the code, close files. deallocate memory, etc...
    //Exit stage right
    return 0;
}

