/* 
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created on July 7, 2020, 4:54 PM
 * Purpose:  Calculate the customer's total amount due
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
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
    string pack;//the package chosen by the customers
    float hrs, bill;//the hours used
    float price;// the total price 
    
    //Initialize or input i.e. set variable values
    const float A = 9.95, B= 14.95, C=19.95;
    cout<< "ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>pack>>hrs;
    
    if ((pack == 'a' && pack == 'A')|| (pack =='b' && pack == 'B')||
            (pack == 'c' && pack =='C')){
        //Choose a package
                {
        cout<<"Pack A, B, or C ";
        exit (0);
                }
        if(hrs < 744){
            cout<<"Hours cannot exceed 744 hours";
            exit(0);
        }
            //Package A
            if (pack == 'a' || pack == 'A') && (hrs <10){
                bill = A;
             cout>>"Bill $  "<< bill;
            }
            else if ((pack == 'a' || pack == 'A') && (hrs >18))
            {
                bill = A + ((hrs +18 )*2);
                cout<< "Bill $ "<<bill;
            }
 //Package A
            if (pack == 'b' || pack == 'B') && (hrs <20){
                bill = B;
             cout>>"Bill $  "<< bill;
            }
            else if ((pack == 'b' || pack == 'B') && (hrs >28))
            {
                bill = (B + ((hrs +18 )*1);
                cout<< "Bill $ "<<bill;
            }

    //Map inputs -> outputs
    
    //Display the output
    //Exit stage right or left!
    return 0;
}


