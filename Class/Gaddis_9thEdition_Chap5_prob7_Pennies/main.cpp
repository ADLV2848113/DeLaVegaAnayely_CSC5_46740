/* 
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created on January 11, 2019, 7:00 PM
 * Purpose:  Display a rectangle
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    int size;//the size of the rectangle
    size=0;
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    cout<<"Enter a number from 1 to 15"<<endl;
    cin>>size;
    //Map inputs -> outputs
    for (int i=1; i<=size;i++){
        for (int j=1;j<=size;j++){
            cout<<"X";
        }
          cout<<endl;
    }


    //Display the outputs

    //Exit stage right or left!
    return 0;
}