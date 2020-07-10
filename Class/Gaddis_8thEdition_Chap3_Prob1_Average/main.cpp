/*
Programming Challenges, 4.14, chapter4.14.cpp
Running the Race
Write a program that asks for the names of three runners and the time it took
each of them to finish the race.  The program should display who came in first,
second, and third place.
Input validation: only accept positive numbers for the times.
Page 223
*/

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
 string runnerOne, runnerTwo, runnerThree;
 double timeOne, timeTwo, timeThree;

 cout << "\n+++++++++++++++++++++++++\n"
  << "     Running the Race"
  << "\n+++++++++++++++++++++++++\n\n";

 cout << "Enter the name of first runner: ";
 getline(cin, runnerOne);
 cout << "Enter time for first runner: ";
 cin >> timeOne;

 if(timeOne <= 0)
 cout << "Only positive times are allowed!! \n\n";
 
 cin.ignore();
 cout << "\nEnter the name of second runner: ";
 getline(cin, runnerTwo);
 cout << "Enter time for second runner: ";
 cin >> timeTwo;

 if(timeTwo <= 0)
 cout << "Only positive times are allowed!! \n\n";

 cin.ignore();
 cout << "\nEnter the name of third runner: ";
 getline(cin, runnerThree);
 cout << "Enter time for third runner: ";
 cin >> timeThree;

 if(timeThree <= 0)
 cout << "Only positive times are allowed!! \n\n";

 cout << "\--------------------------\n"
  << "        Results"
  << "\n-------------------------\n\n";

 if(timeOne < timeTwo && timeOne < timeThree)
 {
 if(timeTwo < timeThree)
 {
 cout << "First place: " << runnerOne << endl
  << "Second Place: " << runnerTwo << endl
  << "Third Place: " << runnerThree << "\n\n";
 }
 if(timeThree < timeTwo)
 {
 cout << "First place: " << runnerOne << endl
  << "Second Place: " << runnerThree << endl
  << "Third Place: " << runnerTwo << "\n\n";
 }
 }

 if(timeTwo < timeOne && timeTwo < timeThree)
 {
 if(timeOne < timeThree)
 {
 cout << "First place: " << runnerTwo << endl
  << "Second Place: " << runnerOne << endl
  << "Third Place: " << runnerThree << "\n\n";
 }
 if(timeThree < timeOne)
 {
 cout << "First place: " << runnerTwo << endl
  << "Second Place: " << runnerThree << endl
  << "Third Place: " << runnerOne << "\n\n";
 }
 }

 if(timeThree < timeOne && timeThree < timeTwo)
 {
 if(timeOne < timeTwo)
 {
 cout << "First place: " << runnerThree << endl
  << "Second Place: " << runnerOne << endl
  << "Third Place: " << runnerTwo << "\n\n";
 }
 if(timeTwo < timeOne)
 {
 cout << "First place: " << runnerThree << endl
  << "Second Place: " << runnerTwo << endl
  << "Third Place: " << runnerOne << "\n\n";
 }
 }

 system("pause");

 return 0
  

