/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  ISP charges
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char package;
    unsigned short hours,bill;
    float A, B, C;
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    A=16.99f, B=26.99f, C=36.99f;
    //Basic Charges
    A=16.99;
    if (hours<=10){
       A +=0; 
    }
    else if(hours<=20){
        A+=(hours-10)*0.95;
    }
    else {
        A+=(10*0.95)+((hours-20)*0.85);
    }
     if (hours<=20){
         B=26.99;
       B +=0; 
    }
    else if(hours<=30){
        B+=(hours-20)*0.74;
    }
    else {
        B+=(10*0.74)+((hours-30)*0.64);
    }
    C=36.99;
    cout<<setprecision(2)<<fixed;
    if ( package == 'a' || package=='A'){
        cout<< "$"<< A ;
        if (C<B && C<B){
            cout<<" C $"<<(A - C)<<endl;
        }
        else if ( B < A){
            cout<<"B $"<<(B - A)<<endl;
        }
        else {
            cout<<" A $"<<(A-A)<<endl;
        }
    }
    if ( package == 'b' || package=='B'){
        cout<< "$"<<B;
        if (C<A && C<A){
            cout<<" C $"<<(B - C)<<endl;
        }
        else if ( A < B){
            cout<<" A $"<<(B - A)<<endl;
        }
        else {
            cout<<"B $"<<(B-B)<<endl;
        }
    }
if ( package == 'c' || package=='C'){
        cout<< "$"<<C;
        if (A<C && B<C){
            cout<<" A $"<<(C - A)<<endl;
        }
        else if ( A < B){
            cout<<" B $"<<(C - B)<<endl;
        }
        else {
            cout<<"C $"<<(C-C)<<endl;
        }
    }

    //Output the Charge

    //Output the cheapest package and the savings
    
        
    //Exit
    return 0;
}