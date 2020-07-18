/* 
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created July 16,2020 5:08 PM
 * Purpose:  Cross one-side or the other
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short x,n,j,i;
    char shape;       //f-> forward b->backward x->cross
    
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    
    //Draw the shape
    if (n%2)//odd
        for (int i= n; i>=1;i--)
            for (int j=n;j>=1;j--){
                if(j==i || j==(n+1))
                {
            cout<<j;
        }
                else 
                    cout<<" ";
            }
    cout<<"\n";
}


    else//even
        for (int i= 1; i<n;j++)
            for (int j=n;j>=1;j--){
                if(j==i || j==(n-i+1))
                {
            cout<<" "<< j<<" ";
        }
            }
   
    
    //Exit
    return 0;
}