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
    int small;//the smallest integer
    int larg;// the largest integer
    numb=0;
    int tot; 
    
  
    
    //Initialize or input i.e. set variable values
    while ( numb <1 || numb > 10 )
     {
     cout<<"Enter a a series of numbers "<<endl;
     cin>>numb;
     cout<<" Enter -99 when finished"<<endl;
    }
    //Input the number to find the sum
     
    for (int i=1; i<numb; i++)
    {
        cout<<"Enter s series of numbers between 1 and 10"<<i<<endl;
        cin>>numb;
    if (i=1)

    {
        tot = small;
        tot = larg;
    }
    else
          {
    
        if (tot < small)
            small = tot;
        
        if (tot > larg)
            larg = tot;
    }  
    }
    //Get the total sum 

    //Display the outputs
    cout<< "Smallest number in the series is "<< larg <<endl;
    cout<< "Largest number in the series is "<< small;
    //Exit stage right or left!
    return 0;
}