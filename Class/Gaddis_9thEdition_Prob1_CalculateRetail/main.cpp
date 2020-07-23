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
    float calculateRetail;//The total price after inputing the markup %
    float wholesal, maPerc;// The original sale price and the markup %
    //Initialize Variables

    
    //Process or map Inputs to Outputs
    //Calculate the final price; Input the Wholesale Price
    cout<<"Enter the wholesale cost:"<<endl;
       cin>>wholesal;
    if (wholesal<0)
    {
        cout<<"Input A positive number and greater than 0"<<endl;
    }
    //Input the Markup Percent
    cout<<"Enter the markup percentage:"<<endl;
    cin>>maPerc;
    
    //This will be the function call
    maPerc= maPerc * 0.01;
  calculateRetail=(wholesal +(wholesal * maPerc));
    
    //Display Outputs
    cout<<"The retail price is $"<<setprecision(2)<<fixed<<calculateRetail;
    //Exit stage right!
    return 0;
}