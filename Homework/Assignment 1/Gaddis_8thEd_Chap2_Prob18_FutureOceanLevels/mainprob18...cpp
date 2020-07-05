/*
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created on June 27, 2020, 4:31 PM
 * Purpose: How much ocean levels are expected to rise within 20 years. 
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
    float origNum;// original number 3.1 millimeters
    float inches;//inches 0.0394
    float cents;//centimeters 0.10
    float  year;//20 years
    float incrate;//inches rate
    float centrate; //centimeters rate
    //Initialize all known variables 
    origNum =   3.1;
    inches =    0.0394;
    cents =     0.10;
   incrate =    (origNum * inches ) * 20;
    centrate =  (origNum * cents )  * 20;      
            
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives 
    
    //Display the Inputs/Outputs
    cout<< incrate << " inches" <<endl;
    cout<< centrate << " centimeters " <<endl;
    
    //Clean up the code, close files. deallocate memory, etc...
    //Exit stage right 
    return 0;
}

