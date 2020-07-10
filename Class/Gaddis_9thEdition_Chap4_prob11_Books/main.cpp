/* 
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created on January 7, 2020, 3:14 PM
 * Purpose:  Enter the number of books purchased and display the points earned
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
    int bookPur;//the books purchased
    int point;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    if(bookPur ==0)
        cout<<"0 points earned";
    else if (bookPur ==1)
        cout<<"5 points earned";
    else if (bookPur==2)
        cout<<"15 points earned";
    else if (bookPur ==3)
        cout<<"30 points earned";
    else if (bookPur>=4)
        cout<<"60 points earned"<<endl;
    else
    {
        cout<<"A number greater than 0 must be entered";
    }
    
    
    //Display the outputs
    cout>>endl;
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>bookPur;
    cout<<"Books purchased =  "<<bookPur<<endl;
    cin>>bookPur;
    cout<<"Points earned   = "<<endl;

    //Exit stage right or left!
    return 0;
}


