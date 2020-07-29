/* 
 * File:   
 * Author: Anayely De La Vega
 * Created on July 25, 20 11:40 AM
 * Purpose: Display the different salsas, the total sales, and both the lowest and highest selling products. 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
//This program uses to arrays one for the different types of salsas 
//the second for the profit

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    int salsas = 5;
    string name[salsas]= {"mild", "medium", "sweet", "hot", "zesty"};// the number of salsas
    string sales[salsas];// sales for each salsa
    float prof[salsas];//the profit for each salsa a total of 5
    char low, high;//the lowest and highest profit
    //Declare Variable Data Types and Constants
     low;//lowest sale
     high;//highest sells

    //Process or map Inputs to Outputs
    for (int i = 0; i < salsas; i++) {
        cout<<"Enter the sales of "<<name[i]<<" salsa:$"<<endl;
        cin>>name[i];
    }
    for (int i=0; i< salsas; i++){
        if (name[i] < name[low]){
            low=i;
        }
        if (name[i] > name[high]){
            high =i;
        }
    }
    
    
    //Exit stage right!
    return 0;
}