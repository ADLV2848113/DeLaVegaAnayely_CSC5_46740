/* 
 * File:   Diet Coke
 * Author: Anayely De La Vega
 * Created on January 6, 2020, 3:41 PM
 * Purpose:  How much soda pop can a person drink before dying.
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
    float mous;//sweetener to kill mouse
    int weiMou;//weight of mouse
    float sweeDi;// sweetener to kill dieters
    float weiDie;//weight of dieter
    float massDie;//mass of dieter
    float cans;// number of cans 
    const float perct= 0.001f;
    
    //Initialize or input i.e. set variable values
    weiDie= 45359.2;
    mous = 5;
    weiMou = 35;
    sweeDi = 200;
    massDie = (weiDie/9.8);
    cans = (mous*massDie)/(weiMou*sweeDi*0.001);
    
    //Map inputs -> outputs
    cout<< "Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<< "Input the desired dieters weight in lbs."<<endl;
    cout<< "The maximum number of soda pop cans"<<endl;
    cout<< "Which can be consumed is " << setprecision(0) << fixed<< cans << "cans";
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

