/*
 * File:   Housing Cost
 * Author: Anayely De La Vega
 * Created on July 4, 2020, 6:10 PM
 * Purpose: Calculates the monthly cost of common house expenses. 
 */

//System Libraries
#include <iostream> //I/O Library 
#include <iomanip>//to setprecision
#include <cmath>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes 

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    float rent, phon, until, cabl;//Rent or mortgage, phone bill, utilities, cable
    float mont;//monthly expenses 
    float ave;// the total annual cost
    
    //Initialize all known variables 
    
    //Process Inputs to Outputs -> Mapping Process
    // ask for the first number out of the five
    cout<<"Input the rent cost : "<<endl;
    cin>>rent;
    //ask for the second number
    cout<<"Input phone cost : "<<endl;
    cin>>phon;
    //ask for the third number 
    cout<<"Input the utilities cost : "<<endl;
    cin>>until;
    //ask for the fourth number 
    cout<<"Input the cable cost : "<<endl;
    cin>>cabl;
    //Maps known values to the unknown objectives 
    //calculate the monthly cost
    mont = ( rent + phon + until + cabl );
    // calculate the annual cost 
    ave = mont * (12) ; 
    
    
    //Display the Inputs/Outputs
    cout<< setprecision(1)<<fixed;
    cout<<" The total monthly cost is : " << mont<<endl;
    cout<<" The total annual cost is : " << ave;
     
    
    //Clean up the code, close files. deallocate memory, etc...
    //Exit stage right 
    return 0;
}

