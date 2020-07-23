/* 
 * File:   
 * Author: Anayely De La Vega
 * Created on July 21, 2020    Time: 4:32 PM
 * Purpose:  Only prime numbers will be true statements otherwise any other number will have an output of false
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
    
    //Declare Variable Data Types and Constants
     bool isPrime(int num);//Will display the prime numbers 
     int num;//input any number 
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout<<"Enter a number:"<<endl;
    cin>>num;
    if(num==true)
        cout<<num<<" is not prime number.";
    else 
        cout<<num<<" is a prime number.";
    //Display Outputs
    
    //Exit stage right!
    return 0;
}
bool isPrime (int num) {
    if (num<=1) return false;
    if(num==2)return true;
    for (int test=2;test<=(pow(num)); test++){
        if(num%test==0)return false;
    }
    return true;
}

