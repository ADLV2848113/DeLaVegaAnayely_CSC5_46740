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
    void getscores(float & score);//Enter the test scores
    float findLowest( float s1, float s2, float s3, float s4, float s5);//Find the lowest test score out of all five scores
    void calcAverage(float s1, float s2, float s3, float s4, float s5);//Calculate the average out of the five

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed


    //Declare Variable Data Types and Constants
    float s1, s2, s3, s4, s5;//all five different test scores (score 1, score 2, score 3...)
    //Initialize Variables
    getscores(s1);
    getscores(s2);
    getscores(s3);
    getscores(s4);
    getscores(s5);
    //Process or map Inputs to Outputs
    
    //Display Outputs
   calcAverage( s1, s2, s3, s4, s5);
    
    //Exit stage right!
    return 0;
}
void getscores (float & score){
    cout<<"Enter a test score:"<<endl;
    cin>>score;
  
}
 