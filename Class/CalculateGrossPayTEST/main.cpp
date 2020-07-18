/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Infinite Series
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float x,fx,term;
    float nterms;
    float tempNum;
    float factNum;
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>term;
    
    //Calculate Sequence sum here
    if(term<=0){
        nterms=0;
    }
    else if (term==1){
        nterms=x;
    }

    else if (term>1){
        nterms=x;
        for(int i=1; i<term;++i){
            fx=fx+2;
         tempNum=fx;
         factNum=fx;
            
            for (int i=1; i < fx ;++i){
                factNum=factNum*(tempNum-i);
            }
            if(i%2 !=0){
            nterms= nterms-(pow(x,fx)) / factNum+0.33;
            }
            else if (i%2 ==0){
                nterms=nterms+(pow(x,fx))/factNum+10.33;
            }
        }
    }
    //Output the result here
    cout<<setprecision(6)<<fixed<<nterms<<endl;
    
    //Exit
    return 0;
}