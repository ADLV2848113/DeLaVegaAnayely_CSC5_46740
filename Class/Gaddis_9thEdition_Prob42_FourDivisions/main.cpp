/* 
 * File:   
 * Author: Anayely De La Vega 
 * Created on July 22 2020 2:34 Am
 * Purpose:Display the greatest sales for a quarterly between the four quarterly
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    float getsales(string sales);//Display quarterly sales
      //Determines the highest along with their sales
    void findHighest( float nE, float sE, float nW, float sW);
    //Declare Variable Data Types and Constants
    float nE, sE, nW, sW;//Four divisions Northeast, Southeast, Northwest, Southwest
    //Initialize Variables
    nE=getsales("Northeast");
    sE=getsales("Southeast");
    nW=getsales("Northwest");
    sW=getsales("Southwest");
   
    //Process or map Inputs to Outputs
    
    //Display Outputs
    findHighest (nE, sE, nW, sW);
    //Exit stage right!
    return 0;
}
/***************************************************
 * inputValidate:                                  *
 * User must input the sales for each quarter      *
 *************************************************/
float getsales (string sales){
    float sale1;
    cout<<"Enter the sales for "<<sales<<" division:$"<<endl;
    cin>>sale1;
    return sale1;
}
 void findHighest( float nE, float sE, float nW, float sW){
    float temp;
    temp =(nE>sE)?nE:sE;
    temp =(temp>nW)?temp:nW;
    temp =(temp>sW)?temp:sW;
    cout<<fixed<<setprecision(2)<<showpoint;
    if (temp==nE)cout<<"The Northeast division had the highest sales of $"<<setprecision(2)<<temp;
    if (temp==sE)cout<<"The Southeast division had the highest sales of $"<<setprecision(2)<<temp;
    if (temp==sW)cout<<"The Southwest division had the highest sales of $"<<setprecision(2)<<temp;
    if (temp==nW)cout<<"The Northwest division had the highest sales of $"<<setprecision(2)<<temp;
         }
