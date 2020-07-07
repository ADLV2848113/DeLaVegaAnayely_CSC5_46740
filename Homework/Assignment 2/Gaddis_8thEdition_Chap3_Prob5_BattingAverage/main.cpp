/*
 * File:   Batting Average
 * Author: Anayely De La Vega
 * Created on July 4, 2020, 6:31 PM
 * Purpose: Calculates the average of a players batting. 
 */

//System Libraries
#include <iostream> //I/O Library 
#include <iomanip>//to setprecision
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
    float bat, hits;//the number of times a play was a bat and the number of hits
    float ave; 
    
    //Initialize all known variables 
    
    //Process Inputs to Outputs -> Mapping Process
    // ask for the number of times the player was at bat
    cout<<"Input number of times the player was at bat  : ";
    cin>>bat;
    //ask for the number of hits
    cout<<"Input number of hits : ";
    cin>>hits;
    
    //Maps known values to the unknown objectives 
    ave = bat/hits;
    
    
    //Display the Inputs/Outputs
    cout<< setprecision(4)<<fixed;
    cout<<" The batting average is : " << ave;
     
    
    //Clean up the code, close files. deallocate memory, etc...
    //Exit stage right 
    return 0;
}

