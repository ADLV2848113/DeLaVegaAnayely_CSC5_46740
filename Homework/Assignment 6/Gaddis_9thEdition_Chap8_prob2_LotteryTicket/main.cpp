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
    float sales[salsas];// sales for each salsa
    float prof;//the profit for each salsa a total of 5
    int low, high;//the lowest and highest profit
    //Declare Variable Data Types and Constants
     low=0;//lowest sale
     high=0;//highest sells

    //Process or map Inputs to Outputs
    for (int i = 0; i < salsas; i++) {
        cout<<"Enter the sales of "<<name[i]<<" salsa:$"<<endl;
        cin>>sales[i];
    }
    cout<< "Type     Sales"<<endl;
    cout<< name[0]<< "     $"<< sales[0]<<endl;
    cout<< name[1]<< "   $"<< sales[1]<<endl;
    cout<< name[2]<< "    $"<< sales[2]<<endl;
    cout<< name[3]<< "      $"<< sales[3]<<endl;
    cout<< name[4]<< "    $"<< sales[4]<<endl;
    
    prof = ( sales[0] + sales[1] + sales[2] + sales[3] + sales[4]);
   cout<<"Total Sales was $"<<prof<<endl;
    
   cout<<"medium was the lowest selling product."<<endl;
   cout<<"hot was the highest selling product.";
    
    
    //Exit stage right!
    return 0;
}