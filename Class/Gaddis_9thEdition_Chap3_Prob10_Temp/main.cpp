/* 
 * File:   Temperatures
 * Author: Anayely De La Vega
 * Created on January 3, 2020, 8:56 PM
 * Purpose:  Convert Celsius temperatures to Fahrenheit
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float f;//Temperature in Fahrenheit
    float c;// Temperature in Celsius
    
    //Initialize or input i.e. set variable values
     //f is 212.0
    cin>>f;
    c = ( 5.0 / 9.0 ) * ( f - 32 );

    
    //Map inputs -> outputs
    cout<< "Temperature Converter" <<endl;
    cout<< "Input Degrees Fahrenheit" <<endl;
    cout<< setw(3)<< setprecision (1) << fixed <<f << " Degrees Fahrenheit = "<< setw(3) << setprecision(1)<< fixed << c << " Degrees Centigrade";
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

