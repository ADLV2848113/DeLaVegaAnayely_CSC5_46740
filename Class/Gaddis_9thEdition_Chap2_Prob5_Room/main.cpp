/* 
 * File:   Room Capacity 
 * Author: Anayely De La Vega
 * Created on January 4, 2020, 12:55 AM
 * Purpose:  It will read the maximum room capacity and the number of people attending, it will also state whether more people can attend or not.
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
    
    //Declare Variables
    int maxRom;// maximum room capacity
    int peoAtt;// the amount of people attending
    int meHeld;//meeting can be held at this capacity
    
    //Initialize or input i.e. set variable values
    // maxRom is 300
    cin>> maxRom;
    // peoAtt is 400
    cin>>peoAtt;
    meHeld = peoAtt - maxRom;
    
    
    //Map inputs -> outputs
    cout<< "Input the maximum room capacity and the number of people" <<endl;
    cout<< "Meeting cannot be held."<<endl;
    cout<< "Reduce number of people by "<< meHeld <<" to avoid fire violation.";
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

