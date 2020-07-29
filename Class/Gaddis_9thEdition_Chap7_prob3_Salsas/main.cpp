/* 
 * File:   
 * Author: Anayely De La Vega 
 * Created on July 27, 2020 9:00PM
 * Purpose: Display the hours employees worked, identify each employee, and display the wages for each. 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    int NUM_EMPLOYEES=7;//Total number of employees
    int names[NUM_EMPLOYEES] = {"5658845", "4520125", "7895122", "8777541", "8451277", "1302850", "7580489"};
    int hours[NUM_EMPLOYEES];//The hours worked
    float payRate[NUM_EMPLOYEES];//Pay Rate 
    float wages[NUM_EMPLOYEES];//the wages of the employees
    //Declare Variable Data Types and Constants
    
    //Initialize Variables
    for (int index=0; index<NUM_EMPLOYEES;index++){
        cout<<"Enter employee "<<names[index]<<"'s pay rate"<<endl;
        cin>>hours[index];
        cout<<"Enter employee "<<names[index]<<"'s hours work:"<<endl;
        cin>>payRate[index];
    }
    
       for (int index=0; index<NUM_EMPLOYEES;index++){
            wages[index] = (hours[index] * payRate[index]);
           cout<<"Employee "<<names[index]<<"'s gross pay"<<wages[index]<<endl;
       }
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}