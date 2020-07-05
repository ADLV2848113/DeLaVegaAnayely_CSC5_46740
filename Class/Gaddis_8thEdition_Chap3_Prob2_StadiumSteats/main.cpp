/*
 * File:   Stadium Seating
 * Author: Anayely De La Vega
 * Created on July 4, 2020, 6:21 PM
 * Purpose: Calculates the amount earned for three different price seats. 
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
    int seatA, seatB, seatC;//the three different types of seats at the game
    int sA, sB, sC;//will display the total amount each with their own prices
    float ave; 
    
    //Initialize all known variables 
    
    //Process Inputs to Outputs -> Mapping Process
   
 
    cout<<"Input number of tickets sold for seatA : ";
    cin>>seatA;
 
    cout<<"Input number of tickets sold for seatB : ";
    cin>>seatB;
    
    cout<<"Input number of tickets sold for seatC : ";
    cin>>seatC;
    //Maps known values to the unknown objectives 
    // multiply the amount of people by the total price of each seat 15
    sA = seatA * 15;
    // multiply the amount of people by the total price of each seat 12
    sB = seatB * 12;
    // multiply the amount of people by the total price of each seat 9
    sC = seatC * 9;
    //add the amount of each to get a total
    ave = ( sA + sB + sC );
    
    
    //Display the Inputs/Outputs
    cout<< setprecision(2)<<fixed;
    cout<<" The amount generated from the ticket sales is  : " << ave;
     
    
    //Clean up the code, close files. deallocate memory, etc...
    //Exit stage right 
    return 0;
}

