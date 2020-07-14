/* 
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created on January 10, 2020, 12:41 PM
 * Purpose:  Find the sum of all the numbers enetered
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
    int numb;//the number entered
    int sum;//the total sum
    sum=0;
    
  
    
    //Initialize or input i.e. set variable values
    //Input the number to find the sum
    cout<<"Enter a positive number"<<endl;
    cin>>numb;
    //Map inputs -> outputs
    //Get the total sum 
    while (numb < 0 ) 
    {
     cout<<"Enter a positive number"<<endl;
     cin>>numb;// <0 
    }
    //Display the outputs
   for ( int i = 1; i <=numb; i++) 
   {
   sum += i; 1+2;
   }
               
   
   
    
    cout<< "sum = "<< sum;
    //Exit stage right or left!
    return 0;
}
