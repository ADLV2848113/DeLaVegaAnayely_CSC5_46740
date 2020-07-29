/* 
 * File:   
 * Author: Anayely De La Vega
 * Created on  JUly 27, 2020  1:45 AM
 * Purpose:  Do a binarySearch with array of string.
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    int binarySearch(string[], int, int);
 
    //Declare Variable Data Types and Constants
    const int NUM_NAMES=20;
	string names[NUM_NAMES]={"Collins, Bill", "Smith, Bart", "Allen, Jim",
							 "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
							 "Taylor, Terri", "Johnson, Jill",
							 "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
							 "James, Jean", "Weaver, Jim", "Pore, Bob",
							 "Rutherford, Greg", "Javens, Renee",
							 "Harrison, Rose", "Setzer, Cathy",
							 "Pike, Gordon", "Holland, Beth" };
    //Initialize Variables
cout<<"Enter a name to search for"<<endl;
cin>>names[NUM_NAMES];
    
    
    //Display Outputs

    //Exit stage right!
    return 0;
}
 int binarySearch(string[NUM_NAMES], int size , int val){
     int first =0;
     last = size-1;
    do{
        int middle=(last)
    }while (first <=last);
    return -1;
 }