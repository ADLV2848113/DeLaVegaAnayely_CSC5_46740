/*
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created on July 19, 2020, 3:27 PM
 * Purpose: Code Uno Card Game. 
 */

//System Libraries
#include <iostream> //I/O Library 
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes 

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    srand(static_cast<unsigned int>(time(0)));
    //Declare all variables for this function
    string color, face;
    int value;
    srand;
    int rn1to28;
    
    

    
    
    //Initialize all known variables 
    rand;
    rn1to28 = rand()%28+1;
    value=rand()%28+1;;
    
    
    //Process Inputs to Outputs -> Mapping Process
    if (value>= 14)
        value = -14;
    
    rand= new rand();
    switch(rand(%4+1))
    {
      case 0 : color = "Red";break;
      case 1 : color = "Green";
      case 2 : color = "Yellow";
      case 3 : color = "Blue";}
    
    
    switch
    {     
    
        case 1 : value = "One";
        case 2 : value = "Two";
        case 3 : value = "Three";
        case 4 : value = "Four";
        case 5 : value = "Five";
        case 6 : value = "Six";
        case 7 : value = "Seven";
        case 8 : value = "Eight";
        case 9 : value = "Nine";
        
    }
    if (value>=13)
        color="none";
}
    string getFace()
{
        face="[";
        if (color ! = "none")
        {
            face += this->color+ " ";
        }
        switch(this.value)
        {
            default: face += string.valueOf(this.value);break;
             
    {
        case 10 : face +="Skip";break;
        case 11 : face +="Reverse";break;
        case 12 : face +="Draw +2";break;
        case 13 : face +="Draw +4";break;
        case 14 : face +="Wild";break;
    }
            face += "]";
            return face;
        }
            
    //Maps known values to the unknown objectives 
      
        
        {
            if (this->color)
                return true;
            else if (this->value==o.value)
                return true;
            else if (this->color == "none")
                return true;
            return false;
        }

    
    //Game ends when they're no cards left for either player
        
    //Display the Inputs/Outputs
 
    
    //Clean up the code, close files. deallocate memory, etc...
    //Exit stage right 
    return 0;
}