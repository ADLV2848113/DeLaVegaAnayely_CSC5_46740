/* 
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created July 14, 2020 1:50 PM
 * Purpose:  Overtime
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRate;// overtime rate
    unsigned short hrsWrkd;//the hours worked
    float Rate;//the pay rate
    float payChe;//the paycheck in dollars ($'s)
    int doubtim;//double time which is over 40 hours
    
    
    //Input or initialize values Here
    cout<< fixed << setprecision(2) << showpoint;
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>Rate>>hrsWrkd;
    payRate=2;
    doubtim=30;
    
    //Calculate Paycheck
       payChe = hrsWrkd * Rate; //regular hours paycheck
    //than add the overtime
   if (hrsWrkd>doubtim){
        payChe+=(payRate-1)*(hrsWrkd-doubtim)*Rate;
    }
    
    
    //Output the check
     cout<< "$ "<< payChe;
    
    //Exit
    return 0;
}