#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    a = 4;
    b = 20;
    c = 51;
    int* aa, *bb, *cc;
    aa = &a; 
    bb = &b;
    cc = &c;
    int* pNull = nullptr; //creating pointers

    int pArray[5] = {1,4,6,7,8};
    int* pIt = &pArray[0]; //creating array

    cout << "value of a: " << a << ", address of a: " << &a << endl;
    cout << "pointer aa stores: " << aa << ", *aa = " << *aa << endl;

    cout << "value of b: " << b << ", address of b: " << &b << endl;
    cout << "pointer bb stores: " << bb << ", *aa = " << *bb << endl;

    cout << "value of c: " << c << ", address of c: " << &c << endl;
    cout << "pointer aa stores: " << cc << ", *aa = " << *cc << endl;

    cout << "pointer pNull is " << pNull << endl;
    cout << "are aa and pNull equal?: " << (pNull == aa) << endl;

    cout << "array values using pointer arithmetic: ";
    for (int i = 0; i < 5; i++){
        cout << *pIt << " ";
        pIt++;
    }


    return 0;
}