/* 
 * File:   
 * Author: Anayely De La Vega
 * Created on July 21, 2020 2:50 PM
 * Purpose:  To calculate the retail price after adding the original price with the markup percentage
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    float kinEner;//The kinetic Energy in Joules
    float mass, velocit;//Input mass in kilograms and the velocity in meters/seconds
    //Initialize Variables

    
    //Process or map Inputs to Outputs
    
    cout<<"Enter the object's mass:"<<endl;
       cin>>mass;
 
     cout<<"Enter the object's velocity:"<<endl;
        cin>>velocit;     

    
    //This will be the function call
      kinEner = (0.5) * (mass) * (pow(velocit,2)); 
        
    
    //Display Outputs
        cout<<"The object has "<<setprecision(1)<<fixed<<kinEner
                <<" Joule of energy.";
    //Exit stage right!
    return 0;
}