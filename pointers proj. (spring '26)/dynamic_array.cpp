#include <iostream>
#include <vector>
using namespace std;

int* createArray(int size){
    int* dynArr = new int[size];
    for (int i = 0;  i < size; i++){
        dynArr[i] = ((rand() % 10)*10);
    }
    return dynArr;
}

int* findValue(int* arr, int size, int target){
    for (int i =0; i < size; i++){
        if (*arr == target){
            return arr;
        }
        arr++;
    }

    return nullptr;
}

int main(){

    cout << "enter a size: ";
    int size; 
    cin >> size;
    cout << "array contents: ";

    int* initial = createArray(size);
    for (int i= 0 ; i < size; i++){
        cout << *initial << " ";
        initial++;
    }

    initial-=size; //resets to beginning of array

    cout << endl << "comparing ptr+2 and ptr: ptr+2 ";
    switch((initial+2) > initial){
        case 1:
        cout << "> ";
        break;
        case 0:
        cout << "< ";
        break;
    }

    cout << "ptr" << endl;

    cout << endl << "enter a target: ";
    int target;
    cin >> target;
    int* found;
    found = findValue(initial, size, target);

    if (found == nullptr){
        cout << "not found";
    } else {
        cout << "address: " << found << ", value: " << *found;
    }

    delete[] initial;
    return 0;
}