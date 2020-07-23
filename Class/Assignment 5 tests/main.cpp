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
    float getscores(string scores);//Enter the test scores
    void findLowest( float s1, float s2, float s3, float s4, float s5);//Dind the lowest test score out of all five scores
    void calcAverage(float s1, float s2, float s3, float s4, float s5);//Calculate the average out of the five

    //Declare Variable Data Types and Constants
    float s1, s2, s3, s4, s5;//all five different test scores (score 1, score 2, score 3...)
    //Initialize Variables
    s1=getscores("Score 1");
    s2=getscores("Score 2");
    s3=getscores("Score 3");
    s4=getscores("Score 4");
    s5=getscores("Score 5");
   
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}
/***************************************************
 * inputValidate:                                  *
 *     *
 *************************************************/
float getscores (string scores){
    float score1;
    cout<<"Enter a test score: "<<scores<<endl;
    cin>>score1;
     return score1;
}
 void calcAverage( float s1, float s2, float s3, float s4, float s5){
 float ave;
    cout<<fixed<<setprecision(2)<<showpoint;
 if (ave==s1)
 ave= (s2 + s3 + s4 + s5) / 4;
 else if (ave==s2)
 ave= (s1 + s3 + s4 + s5) / 4;
 else if (ave==s3)
 ave= (s2 + s1 + s4 + s5) / 4;
 else if (ave==s4)
 ave= (s2 + s3 + s1 + s5) / 4;
 else if (ave==s5)
 ave= (s2 + s3 + s4 + s1) / 4;
 cout<<"The Average is "<<ave;
 }

