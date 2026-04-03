#include <iostream>
using namespace std;

struct Sibling { // struct that contains the blueprint for each sibling (name, gender, age)
  string name;
  string gender;
  int age;
  Sibling* next; // as well as the pointer for the next sibling in the list

  Sibling(string, string, int); //initializing function
};

class List {
  Sibling* head; //the pointer for the head sibling

  public:
  List();
  List(Sibling* h);
  void insertNode(string n, string g, int a);
  void printList();
  void printToFile();
  void deleteList();
};

/*
 1) A header file called “list.h” which includes
a ) a struct for siblings that includes their name, gender and age !
b ) a list class declaration !
c ) a function prototype to add students to a linked list !
d ) a function prototype to print the entire linked list
e ) a function prototype to delete the entire linked list
f ) a constructor function prototype for the list class
Note: you may also add any additional functions you would like but they are not necessary
*/