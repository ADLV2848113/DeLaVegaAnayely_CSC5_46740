/* 
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created July 14, 2020 4:40 PM
 * Purpose:  Histogram
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string num;//the numbers displayed
    char w;
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>num;

    //Histogram Here
    for (int i=0; i<=4;i++){
        w = num[3-i];
        cout<<w<<" ";
        if(w>='0'&&w<='9'){
            for (int j= 0; j<w-'0';j++){
                cout<<"*";
            }
            cout<<endl;
        } else{
            cout<<"? "<<endl;
        }
    }
    
    
    //Exit
    return 0;
}