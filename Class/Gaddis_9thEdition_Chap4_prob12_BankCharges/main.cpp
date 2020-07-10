/* 
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created on January 7, 2020, 3:42 PM
 * Purpose:  Display the bank's service fees for the month 
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
    int checks;//the amount of checks
    int monFee;//monthly fee of $10
    int balan;//the extra fee added when the balance falls below $400
    int tot;//the total 
    
    //Initialize or input i.e. set variable values
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>checks;
    
    //Map inputs -> outputs
    if (checks < 20 )
    {
        tot = (checks * 0.10);
        monFee = tot + 10;
    }
    if (checks < 39 && checks > 20 )
    {
        tot = (checks * 0.080);
        monFee = tot +10;
    }
     if (checks < 59 && checks > 40 ){
        tot = (checks * 0.060);
        monFee = tot +10;
     }
     if (checks > 60 ){
        tot = (checks * 0.020);
        monFee = tot + 10;
     }
    
    //if the checks fall below $400 than add $15
    if ( balan < 400 ){
        balan = 15.00;
    }  //if it's over $400 than the fee is zero
        if (balan > 400){
        balan = 0.00;
        }
    //Display the outputs
    cout<<"Balance     $     "<<endl;
    cout<<"Check Fee$      "<<endl;
    cout<<"Monthly Fee $  "<<endl;
    cout<<"Low Balance $    "<<setprecision (2)<<fixed<<balan<<endl;
    cout<<"New Balance $    ";

    //Exit stage right or left!
    return 0;
}



