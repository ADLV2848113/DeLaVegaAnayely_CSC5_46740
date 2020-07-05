/*
 * File:   Math Tutor
 * Author: Anayely De La Vega
 * Created on July 4, 2020, 6:57 PM
 * Purpose: Displays the correct answer for any addition between 1 and 9. 
 */

//System Libraries
#include <iostream> //I/O Library 
#include <cstdlib>//for rand
#include <ctime>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants Only 
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes 

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    const int min = 1;
    const int max = 9; 
    
    //Declare all variables for this function
    int 1;//first number
        2;//second number 
    int answ; 
    
    //Initialize all known variables 
    unsigned seed = time(0);
    srand(seed);
    
    //Process Inputs to Outputs -> Mapping Process
    cout<<"This program will display two random numbers ";
    
    //Maps known values to the unknown objectives 
  1= (rand() % (max - min +1 )) + min;
  2= (rand() % (max - min + 1)) + min; 
  answ = 1+2;
    
    
    //Display the Inputs/Outputs
    cout<< 1 << " + " << 2 << " = ? \n "<< endl;
    cout<< "Press \"Enter\" to see solution";
    cin.get();<<endl;
     
    
    //Clean up the code, close files. deallocate memory, etc...
    //Exit stage right 
    return 0;
}

