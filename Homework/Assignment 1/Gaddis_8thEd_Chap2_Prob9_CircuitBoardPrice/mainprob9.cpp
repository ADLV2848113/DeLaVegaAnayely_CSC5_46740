/*
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created on June 27, 2020, 4:14 PM
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
    float percProf;
    float origPric;
    float sellPric;
    float profit; 
    //Initialize all known variables 
    percProf = 0.4;
    origPric = 12.67;
    profit = origPric * percProf;
    sellPric = profit + origPric;       
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives 
    
    //Display the Inputs/Outputs
    cout<< "$" << sellPric <<endl;
    
    //Clean up the code, close files. deallocate memory, etc...
    //Exit stage right 
    return 0;
}

