/*
 * File:   Test Average
 * Author: Anayely De La Vega
 * Created on July 4, 2020, 5:27 PM
 * Purpose: Calculates the average of 5 different values. 
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
    int a, b, c, d, e;
    float ave; 
    
    //Initialize all known variables 
    
    //Process Inputs to Outputs -> Mapping Process
    // ask for the first number out of the five
    cout<<"Input number a : ";
    cin>>a;
    //ask for the second number
    cout<<"Input number b : ";
    cin>>b;
    //ask for the third number 
    cout<<"Input number c : ";
    cin>>c;
    //ask for the fourth number 
    cout<<"Input number d : ";
    cin>>d;
    //ask for the fifth number
    cout<<"Input number e : ";
    cin>>e;
    //Maps known values to the unknown objectives 
    ave = ( a + b + c + d + e )/ 5;
    
    
    //Display the Inputs/Outputs
    cout<< setprecision(1)<<fixed;
    cout<<" The average is : " << ave;
     
    
    //Clean up the code, close files. deallocate memory, etc...
    //Exit stage right 
    return 0;
}

