#include <iostream>
#include <fstream>
#include "list.h"
using namespace std; //all of the import files

int main(){
  cout << "Enter your name:" << endl;  //the following lines ask for name, age, and gender of the user 
  string name;                         // and store them as variables
  getline(cin, name);
  cout << "Enter your gender:" << endl;
  string gender;
  getline(cin, gender);
  cout << "Enter your age:" << endl;
  int age;
  cin >> age;

  Sibling main(name, gender, age); // creates a new sibling object with the specified name, gender & age

  cout << "How many siblings do you have?" << endl;  // gathers number of siblings for the loop
  int sibs;
  cin >> sibs; 

  List siblings(&main); // creates an empty list of siblings

  for (int i = 0; i < sibs; i++){ //will loop for as many siblings as there are
    cout << "Enter sibling name: " << endl ; // gathers name, age, & gender of each sibling and stores 
    cin >> name;                             // them as variables
    cout << "Enter sibling gender: " << endl ;
    cin >> gender;
    cout << "Enter sibling age: " << endl;
    cin >> age;
    siblings.insertNode(name, gender, age); // uses the insertNode function to insert the appropiate sibling object into the list of siblings
  }

  cout << "List of siblings" << endl; //printed before the list of siblings
  siblings.printList(); //function to print list of siblings
  siblings.printToFile(); //function to write list to file

  return 0;
}

/*
3 ) A client file called “client.cpp” which does the following
a ) Ask the user their name and age
b ) Create a sibling object for the user with their name and age
c ) Add the user’s sibling object to a linked list
d ) Ask the user how many siblings they have
e ) Create a sibling object for each of the user’s siblings with their name and age and add each sibling object to the linked list
f ) Print the linked list of sibling information to a file
g ) Print the linked list of sibling information to the user
*/