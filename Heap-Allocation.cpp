#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter x: ";
    cin >> x;
    int *pNum = NULL; // Create a pointer and set it to NULL
    pNum = new int[x]; // Make this Pointer allocate to heap memory by new function
    for(int i=0;i<x;i++){
        cout << "Enter " << i+1 << " number: ";
        cin >> pNum[i];
    }
    for(int i=0;i<x;i++){
        cout << pNum[i] << " ";
    }
    delete pNum; // Delete Heap-Memory used by the pointer to not leak memory
    return 0;
}
