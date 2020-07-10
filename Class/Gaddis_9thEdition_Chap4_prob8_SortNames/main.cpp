/* 
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created on January 7, 2020, 12:22 PM
 * Purpose: Display the names in alphabetical order
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string> // for the names
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number see
    
    
    //Declare Variables
    string name1; // input the first name 
    string name2; // input the second name
    string name3; // input the third name
    string  a, b, c;
    
    //Initialize or input i.e. set variable values
    cout<< "Sorting Names"<<endl;
     cout<< "Input 3 names"<<endl;
    cin>>name1>>name2>>name3;
    
    //Display the outputs
    if (name1 < name2 && name1<name3) 
    
    {
        a=name1;
        if(name2<name3)
        {
         b=name2;
         c=name3; }
        else
        {
            b=name3;
            c=name2;
        }
    }

      else  if(name2<name1 && name2<name3)
        {
            a=name2;
            if(name1<name3)
            {
                b=name1;
                c=name3;
            }
            else {
            b=name3;
            c=name1;
            }
}
    else if  (name3<name2 && name3<name1)
    {
        a=name3;
        if (name2<name1)
        {
        b=name2;
        c=name1;
    }
    else 
    {
     b=name1;
     c=name2;
    }
    }
   cout<< a << endl;
   cout<< b << endl;
   cout<< c;
    

    //Exit stage right or left!
    return 0;
}