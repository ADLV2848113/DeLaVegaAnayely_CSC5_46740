/* 
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created on January 8, 2020, 1:47 PM
 * Purpose: Display the winner in order of name and time.
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
    int tim1;// time for runner 1
    int tim2;// time for runner 2
    int tim3;//time for runner 3
    string first, sec, third;
    
    //Initialize or input i.e. set variable values
    cout<< "Race Ranking Program"<<endl;
    cout<< "Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    cin>>name1>>name2>>name3;
    cin>>tim1, tim2, tim3;
    
    //Display the outputs
    if (tim1 < tim2 && tim1<tim3) 
    
    {
        first=tim1;
        a=name1;
        if(tim2<tim3 && tim2<tim1)
        {
         first=name2;
         a=tim2; }
        else
        {
            sec=name3;
            b=tim3;
            third=name1;
            c=tim1;
        }
    }

      else  if(tim2<tim1 && tim2<tim3)
        {
            first=name2;
            a=tim2;
            if(tim1<tim3)
            {
                sec=name1;
                b=tim1;
                third=name3;
                c=tim3;
            }
            else {
            sec=name3;
            b=tim3;
            third=name1;
            c=tim1;
            }
}
    else if  (tim3<tim2 && tim3<tim1)
    {
            first=name3;
            a=tim3;
        if (tim2<tim1)
        {
            sec=name2;
            b=tim2;
            third=name1;
            c=tim1;
    }
    else 
    {
         sec=name1;
         b=tim1;
        third=name2;
        c=tim2;
    }
    }
   cout<< first << a << endl;
   cout<< sec << b << endl;
   cout<< third << c;
    

    //Exit stage right or left!
    return 0;
}



