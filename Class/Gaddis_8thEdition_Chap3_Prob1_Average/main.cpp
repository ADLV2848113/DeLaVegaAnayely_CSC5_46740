/* 
 * File:   Average
 * Author: Anayely De La Vega
 * Created on January 3, 2020, 4:00 PM
 * Purpose:  To calculate the average test score 
 */

//System Libraries
#include <iostream>  //Input/Output Library
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
    int a, b, c, d, e;//from all 5 different values 
    float ave;// the total sum of all 5 values divided by 5
    int sum;// the addition of the 5 values 
    
    //Initialize or input i.e. set variable values
    // a will be number 1
    cin>>a;
    //b will be number 2
    cin>>b;
    //c will be bumber 3
    cin>>c;
    //d will be number 4
    cin>>d;
    //e will be nunber 5
    cin>>e;
    sum = a + b + c + d + e;
    ave = sum / ( 5.0 );
    
    //Map inputs -> outputs
    cout<< "Input 5 numbers to average."<< endl;
    cout<< "The average = " << setprecision(3)<<ave;
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

