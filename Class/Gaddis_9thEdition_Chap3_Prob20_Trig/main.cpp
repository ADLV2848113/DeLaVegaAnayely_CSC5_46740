/* 
 * File:  Trig Problem
 * Author: Anayely Dev La Vega
 * Created on January 3, 2020, 9:26 PM
 * Purpose:  Input an angle and the program should display tan, cos, and sine.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>// for sin, cos, and tan
#include <iomanip>// to set precision
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float sine, cosine, tangent;
    int angle;// the angle in degrees
    float pi=3.14159265;
    
    
    //Initialize or input i.e. set variable values
    angle = 45;
    sine = sin(angle*pi/180);
    cosine =cos(angle*pi/180);
    tangent = tan(angle*pi/180);
    
    
    //Map inputs -> outputs
    cout<< "Calculate trig functions"<<endl;
    cout<< "Input the angle in degrees."<<endl;
    cout<< "sin(" << angle << ")" << " = " << setprecision(4)<< fixed<< sine << endl;
    cout<< "cos(" << angle << ")" << " = " << setprecision(4)<< fixed<< cosine << endl;
    cout<< "tan(" << angle << ")" << " = " << setprecision(4)<< fixed<< tangent;
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

