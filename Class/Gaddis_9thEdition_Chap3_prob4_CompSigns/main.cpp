/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
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
    spring f1, s2;//first sign and second sign
    cout"Horoscope Program which examines compatible signs."<<endl;
    
    cout<<"Input 2 signs."<<endl;
    cin>>first,sec;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    if (first == "Taurus"){
        if (sec=first){
            cout<<first "and"<<sec<< "are compatible Earth signs.";
        }else if (sec=="Virgo"){
            cout<<first<<"and"<<sec<<"are comaptible Earth signs.";
        }else if (sec=="Capricorn"){
            cout<<first<<"and"<<sec<<"are compatible Earth signs.";
        }
    }else if (first=="Virgo"){
    if (sec=first){
            cout<<first "and"<<sec<< "are compatible Earth signs.";
        }else if (sec=="Taurus"){
            cout<<first<<"and"<<sec<<"are comaptible Earth signs.";
        }else if (sec=="Capricorn"){
            cout<<first<<"and"<<sec<<"are compatible Earth signs.";
        }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}



