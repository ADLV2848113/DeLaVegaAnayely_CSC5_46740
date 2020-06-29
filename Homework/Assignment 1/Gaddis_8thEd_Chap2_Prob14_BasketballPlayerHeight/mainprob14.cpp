/*
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created on June 27, 2020, 3:17 PM
 * Purpose: 
 */

//System Libraries
#include<iostream> //I/O Library 
#include<cmath>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes 

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here

 
    //Declare all variables for this function
 int starNum; 
 int feet; 
 int inches; 
    
    //Initialize all known variables 
 starNum = 73;
 feet = starNum / 12;
 inches = starNum % 12;
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives 
    
    //Display the Inputs/Outputs
    cout<< feet <<"'"<< inches << endl;
    
    //Clean up the code, close files. deallocate memory, etc...
    //Exit stage right 
    return 0;
}

