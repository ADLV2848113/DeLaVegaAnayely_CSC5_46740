/* 
 * File:  Cookies
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath> 
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int totCok, serv, calor, calCoo; // the total cookiies (40), total serving (10), 300 calories in total per serving, 75 calories per cookie
    int cookies;
    int totCal;

    
    
    //Initialize or input i.e. set variable values
    // enter the amount of cookies eaten
    // cookies is 4
    cin>>cookies;
    totCal =  cookies * 75;// 1 cookie contains 75 calories
    
    
    
    //Map inputs -> outputs
    cout<< "Calorie Counter" <<endl;
     // input the amount of calories eaten
    cout<< "How many cookies did you eat?" <<endl;
    // display the amount of calories eaten which regards the cookies eaten
    cout<< "You consumed " << totCal << " calories."; 
    //compute the amount of calories consumed
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

