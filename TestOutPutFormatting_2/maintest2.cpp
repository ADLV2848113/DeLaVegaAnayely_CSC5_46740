/* 
 * Author: 
 * Date:
 * Purpose:
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Constants like PI, e, Gravity, Conversions, 2D array size only!

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number Seed Here
    
    //Declare all Variables Here
    int numA;//first number of the values 
    int numB;//second number of the values 
    int numC;//third number of the values 
    int numD;//fourth number of the values 
    int numE;//fifth number of the values 
    int Sum;//total sum of the 5 values
    int Ave;//the average which 5
    float totAve;//the total after dividing the sum by 5
    
    //Input or initialize values Here
    
    numA = 28;
    numB = 32;
    numC = 37;
    numD = 24;
    numE = 33;
    Ave = 5;
    totAve = Sum / Ave;
    
    //Process/Calculations Here
    cout<< "sum = " << numA + numB + numC + numD + numE <<endl;
    cout<< " The Total Average = " << totAve <<endl;
    //Output Located Here

    //Exit
    return 0;
}

