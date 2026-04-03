#include <iostream>
#include <memory>
using namespace std;

unique_ptr<int[]> createSmartArray(int size){
    unique_ptr<int[]> dynArr (new int[size]);
    for (int i = 0;  i < size; i++){
        dynArr[i] = ((rand() % 10)*10);
    }
    return dynArr;
}

int main(){

    cout << "unique_ptr array values: ";
    unique_ptr<int[]> initial (createSmartArray(5));
    for (int i= 0 ; i < 5; i++){
        cout << initial[i] << " ";
    }

    shared_ptr<int> A(new int);
    shared_ptr<int> B(A);

    cout << endl << "shared_ptr count: " << A.use_count() << endl;
    B.reset();
    cout << "shared_ptr count after one goes out of scope: " << A.use_count();
    return 0;
}