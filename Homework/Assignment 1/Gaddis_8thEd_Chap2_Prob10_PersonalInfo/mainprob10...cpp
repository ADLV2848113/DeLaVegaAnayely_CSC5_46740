/*
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created on June 27, 2020, 2:21 PM
 * Purpose: Displaying my Personal Information 
 */

//System Libraries
#include <iostream> //I/O Library 
#include<string>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes 

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    string name;//my first and last name
    string addy;//my address
    string telnum;//my phone number
    string collmaj;//my college major
    
    //Initialize all known variables 
    name = "Ana De La Vega";
    addy = "11965 F. Lane, M. Valley, CA, 92557";
    telnum = "(951)399-8873";   
    collmaj = "Environmental Engineering";        
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives 
    
    //Display the Inputs/Outputs
    cout<< name << endl << addy << endl << telnum << endl << collmaj << endl;
    
    //Clean up the code, close files. deallocate memory, etc...
    //Exit stage right 
    return 0;
}

