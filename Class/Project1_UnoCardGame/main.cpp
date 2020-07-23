/*
 * File:   main.cpp
 * Author: Anayely De La Vega
 * Created on July 19, 2020, 3:27 PM
 * Purpose: Coding a simple game of Uno
 */

//System Libraries
#include <iostream> //I/O Library 
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes 

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    srand(static_cast<unsigned int>(time(0)));
    //Declare all variables for this function
    int numCard(7), topCar;//Number of cards for each player, topCar=Top Card of the pile
    unsigned char cards, i; // the total number of cards in the game
    string color, win, face, value, draw, pass, fail, answer, input;//based on the points they received
                        //the color of the cards red, green, yellow, blue
    string play1, play2, dPile, disPile;//players, draw pile, and discard pile.

    
    
    //Initialize all known variables 
    cards=108;//the amount of cards in the deck
    
    //Process Inputs to Outputs -> Mapping Process
    while{
        play1;//player 1
        play2; //player2
        dPile;//draw pile where the cards are located 
        cout<<" Ready to play Uno!!"<<endl;
    
     draw(7, dPile);//player 1 will get 7 cards to start the game
     draw(7, dPile);//player 2 will get 7 cards to start the game
    
    }      
    for (int i=1; i<cards; i++)
    switch(i%20+1)
    {
    case 1: color += "Red";
    case 2: color += "Green";
    case 3: color += "Yellow";
    case 4: color += "Blue";
    }
    
 
     if (color!=("none"))
    {
        face +=color+" ";
    }
    switch (i%20+1)
    {
        default : face +=value;// will display the other cards besides numbers
        
        case 10: face+="Skip";
        case 11: face+="Reverse";
        case 12: face+="Draw +2";
        case 13: face+="Draw +4";
        case 14: face+="Wild";
    }
    
    switch(i%14+1)
    {
        case  1 : value = "One";
        case  2 : value = "Two";
        case 3 : value = "Three";
        case 4 : value = "Four";
        case 5 : value = "Five";
        case 6 : value = "Six";
        case 7 : value = "Seven";
        case 8 : value = "Eight";
        case 9 : value = "Nine";
        
    }
    //Maps known values to the unknown objectives 
    switch
    {
        case 9://Draw cards
            cout<<"Draw 2 cards"<<endl;
            draw(2, dPile); break;//for players
        case 12: case 13: case 15://wild cards
            do; // repeat
    }
  
    cout<<"Enter the color you want";
    cin>>color;
    
    if (color=="R" || color=="r"){
        color="Red";
    }
    if (color=="G" || color=="g"){
        color="Green";
    }
    if (color=="Y" || color=="y"){
        color="Yellow";
    }
      if (color=="B" || color=="b"){
        color="Blue";
    }
   
    cout<<color<<endl;
    cout<<value<<endl;

    //Display the Inputs/Outputs
    bool
    {
        if (color)
            return true;
        else if (value)
            return true;
        else if (color =="none")
            return true;
        return false;
    }
    
    if (play1 ==0)
    {
        win=pass;
    
    else if (play2 == 0)
      
        win=fail;
    
    if win == pass
   
       
    cout<<"You Win"<<endl
    {
    else 
        cout<<"You Lose"<<endl;
        
    cout<<"Play Again"<<endl;
    {
    answer input== ("Yes" or "No"); //play again or end the game
    
    if (answer =="yes");
            cout<<"Continue playing";
    else (answer == "No ")
    cout<<"End of Game"endl;
    }
}
}
    //Clean up the code, close files. deallocate memory, etc...
    //Exit stage right 
    return 0;
}

