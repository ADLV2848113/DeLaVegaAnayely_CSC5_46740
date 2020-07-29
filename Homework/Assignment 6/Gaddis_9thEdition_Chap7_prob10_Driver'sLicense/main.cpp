/* 
 * File:   
 * Author: Anayely De La Vega
 * Created on July 26, 2020  3:32 PM
 * Purpose: Tell whether a student pass or did not pass the exam and display the incorrect problems
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    int maxQuest = 10;
   string correct[maxQuest]={"A", "D", "B", "B","C", "B","A", "B","C", "D","A", "C","D", "B","D", "C","C", "A","D", "B"};
    string answers;// Enter the answers to the questions
    string finals, grade;// will say whether the student passed or failed
    int numCorr;// the number of correct answers
    int inCorr;// the number of incorrect answers
    int list;//the list of the wrong answers
    
    //Declare Variable Data Types and Constants
    string correctCount=0;
    //Initialize Variables
    for (int i=0; i< 1; i++){
        //Enter the answers from the test 
        cout<<"Enter the student's test answers"<<endl;
        cin>>answers;
    }
    correctCount = answers;
    if (correctCount >= 15) {
    cout<<"The student passed."<<endl;
    cout<<"There were "<<correctCount<<" correct answers."<<endl;
    cout<<"There were"<<(maxQuest - correctCount)<<" incorrect answers."<<endl;
    }
    else {
        //failed the exam
    cout<<"The student failed"<<endl;
    cout<<"There were "<<correctCount<<" correct answers."<<endl;
    cout<<"There were"<<(maxQuest - correctCount)<<" incorrect answers."<<endl;
    }
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}