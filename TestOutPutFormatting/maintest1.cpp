/* 
 * File:AI Test Output Format
 * Author:Anayely De La Vega
 * Date:07/1/20
 * Purpose:To create a program the macthes the expected output.
 * Version:1
 */

//System Libraries - Post Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
/* 
 * File:A2 More Test Output Format
 * Author:Anayely De La Vega
 * Date:07/1/20
 * Purpose: Run a code to match the output using the given information.
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    float numA;
    float numB;
    float numC;
    float numD;
    int   numE;
    int   numF;
    int   numG;
    int   numH;
    
    //Initialize or input data here
     numA = 1;//first row
     numB = 2;//second row
     numC = 3;//third row
     numD = 4;//fourth row
     numE = 1;//first row but as an integer
     numF = 2;//second row but as an integer
     numG = 3;//third row but as an integer
     numH = 4;//fourth row but as an integer
     
    //Display initial conditions, headings here
    cout<< setw(9) << fixed<< showpoint << setprecision ( 0 ) << numE << setw(10)  << fixed<< showpoint << setprecision ( 1 )  
    << numA << setw(10) << fixed<< showpoint << setprecision ( 2 ) << numA <<endl;
    cout<< setw(9) << fixed<< showpoint << setprecision ( 0 ) << numF << setw(10)  << fixed<< showpoint << setprecision ( 1 ) 
    << numB << setw(10) << fixed<< showpoint << setprecision ( 2 ) << numB <<endl;
    cout<< setw(9) << fixed<< showpoint << setprecision ( 0 ) << numG << setw(10)  << fixed<< showpoint << setprecision ( 1 )
    << numC << setw(10) << fixed<< showpoint << setprecision ( 2 ) << numC <<endl;
    cout<< setw(9) << fixed<< showpoint << setprecision ( 0 ) << numH << setw(10)  << fixed<< showpoint << setprecision ( 1 ) 
    << numD << setw(10) << fixed<< showpoint << setprecision ( 2 ) << numD <<endl;
    //Process inputs  - map to outputs here
    //display the first row of numbers 
    //Format and display outputs here
    
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}

