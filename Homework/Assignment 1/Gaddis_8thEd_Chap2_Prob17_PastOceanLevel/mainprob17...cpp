/*
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created on June 27, 2020, 4:31 PM
 * Purpose: To display the number of centimeters and inches the ocean rose.
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
    float origNum;//original number 1.8 millimeters 
    float inches;//inches 0.394
    float cents;//centimeters 0.10
    float  year;//within a 100 year range
    float incrate;//inches rate
    float centrate; //centimeter rate
    //Initialize all known variables 
    origNum =   1.8;
    inches =    0.394;
    cents =     0.10;
   incrate =    (origNum * inches ) * 100;
    centrate =  (origNum * cents )  * 100;      
            
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives 
    
    //Display the Inputs/Outputs
    cout<< incrate << " inches" <<endl;
    cout<< centrate << " centimeters " <<endl;
    
    //Clean up the code, close files. deallocate memory, etc...
    //Exit stage right 
    return 0;
}

