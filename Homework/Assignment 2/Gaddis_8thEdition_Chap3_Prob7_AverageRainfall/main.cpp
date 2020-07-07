/*
 * File:   Average Rainfall
 * Author: Anayely De La Vega
 * Created on July 4, 2020, 5:49 PM
 * Purpose: Calculates the average of rainfall of three months. 
 */

//System Libraries
#include <iostream> //I/O Library 
#include <iomanip>//to setprecision
#include <string>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes 

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    string mA, mB, mC, mD, mE;
    float inchA, inchB, inchC;
    float ave; 
    
    //Initialize all known variables 
    
    //Process Inputs to Outputs -> Mapping Process
    // ask for the first number out of the five
    cout<<"Input month mA : "<<endl;
    cin>>mA;
    //ask for the second number
    cout<<"Input month mB : "<<endl;
    cin>>mB;
    //ask for the third number 
    cout<<"Input month mC : "<<endl;
    cin>>mC;
    //ask for the fourth number 
    cout<<"Input inchA : "<<endl;
    cin>>inchA;
    //ask for the fifth number
    cout<<"Input inchB  : "<<endl;
    cin>>inchB;
    cout<<"Input inchC : "<<endl;
    cin>>inchC;
    //Maps known values to the unknown objectives 
    ave = ( inchA + inchB + inchC )/ 3;
    
    
    //Display the Inputs/Outputs
    cout<< setprecision(2)<<fixed;
    cout<<" The average monthly for "<< mA << ", "<< mB <<", " << " and "<< mC 
            << " was " << ave<<
            " inches. ";
     
    
    //Clean up the code, close files. deallocate memory, etc...
    //Exit stage right 
    return 0;
}

