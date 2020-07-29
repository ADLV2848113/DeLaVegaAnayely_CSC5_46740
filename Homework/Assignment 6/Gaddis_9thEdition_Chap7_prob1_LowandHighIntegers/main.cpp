/* 
 * File:   
 * Author: Anayely De La Vega
 * Created on July 25, 2020 9:35 AM
 * Purpose:  Input 10 integers and display the largest and smallest value
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
    int numbers = 10, i;//input 1 - 10
    int num[numbers];
    int low, high;//will display the lowest value and highest value out of the 10 integers 
    //Declare Variable Data Types and Constants
    cout<<"Enter 10 integers:"<<endl;
    cin>>numbers;
     
    //Initialize Variables
    low = num[0];
    high = num[0];
    for (int i=0; i<numbers; i++){
        if (numbers < low)
        low=numbers;
        
        else if (numbers> high)
        high=numbers;
    }
    //Process or map Inputs to Outputs
    
    //Display Outputs
cout<< high << " is the highest number."<<endl;
cout<< low << " is the lowest number.";
    //Exit stage right!
    return 0;
}