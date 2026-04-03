#include <iostream>
#include <fstream>
#include "list.h"
using namespace std;

Sibling::Sibling(string n, string g, int a){
  name = n;
  gender = g;
  age = a;
  next = NULL;
}

List::List(){
  head = NULL;
}

List::List(Sibling* h){
  head = h;
}

void List::insertNode(string n, string g, int a){

  Sibling* newSib = new Sibling(n, g, a); //creates a new sibling that acts as the placeholder using the provided paramters

  if (head == NULL){ //if there isn't already a head for the list, the first node is the head
    head = newSib;
  } else {
    Sibling* temp = head; // a temporary pointer that is first set to the head
    while (temp->next != NULL){ // a loop that keeps going until it reaches the end of the list
      temp = temp->next;
    }
    temp->next = newSib; // when the end is reached, that means it knows where to put the next node
  }
}

void List::printList(){
  Sibling* temp = head; //starting with the head, which is set as the temp
  while (temp != NULL){ // runs until the end of the list
    cout << temp->name << endl; // prints the name of the current node
    cout << "Gender: " << temp->gender << endl; //prints the gender of the current node
    cout << "Age: " << temp->age << endl; // prints the age of the current node
    temp = temp->next; // sets "temp" to the address of the next node
  }
}

void List::printToFile(){
  ofstream write; //creates an ofstream to begin writing to the file
  write.open("siblings.txt"); //opens or creates the siblings.txt file

  Sibling* temp = head; // starts by setting "temp" to the beginning of the list
  while (temp != NULL){ // keeps going until it reaches the end of the list
    write << temp->name << endl; // writes the name of the node to the file
    write << "Gender: " << temp->gender << endl; // writes the gender of the node to the file
    write << "Age: " << temp->age << endl; // writes the age of the node to the file

    if (temp == head){ 
      cout << endl ;
    }

    temp = temp->next; // sets "temp" to the next file in the list

  }
}

void List::deleteList(){
  head = NULL; // essentially deletes the list by getting rid of the origin, making it impossible to traverse the rest of the list. like severing the head of a snake
}

