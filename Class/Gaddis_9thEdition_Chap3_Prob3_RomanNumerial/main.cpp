/* 
 * File:   
 * Author: Anayely De La Vega
 * Created on July 21, 2020 2:50 PM
 * Purpose:  To calculate the retail price after adding the original price with the markup percentage
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    float calculateRetail;//
    float wholesal, maPerc;
    //Initialize Variables
    //Enter the percent in decimal form
    
  calculateRetail=(wholesal +(wholesal * maPerc));
    
    //Process or map Inputs to Outputs
    cout<<"Enter the wholesale cost:"<<endl;
    cin>>wholesal;
    cout<<"Enter the markup percentage:"<<endl;
    cin>>maPerc;
    
    //Display Outputs
     cout<<"The retail price is $"<<setprecision(2)<<fixed<<calculateRetail;
    //Exit stage right!
    return 0;
}

