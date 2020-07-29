/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  
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
    void selectionSort(string[], int);
    void swap(string&, string &);
    void displayArray(string[], int, string);
    int binarySearch(string[], int, string);
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
    displayArray(names, NUM_NAMES, "UNSORTED: \n----------------");
    selectionSort(names, NUM_NAMES);
    displayArray(names, NUM_NAMES, "SORTED: \n-----------------");
    
    string user_name;
    cout<<"Choose a name:";
    getline(cin, user_name);
    
    int position = binarySearch(names. NUM_NAMES, user_name);
    
    if (position !=-1)
    cout<< name[position]<<"was found."<<endl;
    else 
    cout<<user_name<<"was not found."<<endl;
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}

void selectionSearch(string array[], int ARRAY_SIZE){
    int min_index;
    string min_value;
    
    for (int start_index = 0; start_index < (ARRAY_SIZE -1); start_index++)
    {
        min_index= start_index;
        min_value= array[start_index];
        
        for(int index = start_index+1; index < ARRAY_SIZE; index++)
        {
            if (array[index] < min_value)
            {
                   min_value = array[index];
                   min_index = index; 
              }
        }
        swap(array[min_index], array[start_index]);
    }
    
}
void swap(string &a, string &b){
    string temp = a;
    a = b;
    b = temp;
}
void displayArray(string array[], int ARRAY_SIZE, string prompt){
    cout<<promt<<endl;
    for (int i=0; i < ARRAY_SIZE; i++)
    cout<<array[i]<<endl;
    cout<<endl;
}
int binarySearch(string array[], int array_size, string user_name){
    int first =0;
    last = array_size -1//19
    middle,
    position=-1;
    bool found= false;
    
    while (!found && first <= last){
        middle = (first + last)/2;
        if(array[middle]==user_name){
            position = middle;
            found = true;
    }
    else if (array[middle] > user_name)
    last = middle -1;
    else 
    first = middle +1;
}
return position;
}