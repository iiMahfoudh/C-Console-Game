#include <iostream>
#include <array>
using namespace std;
// Fibonnacci Array Maker
int main(){
    int enter;
    int counter = 1;
    cout << "Enter #Of_Limit: " ;
    cin >> enter;
    int *fib_array = nullptr;
    fib_array = new int[enter];
    fib_array[0] = 0;
    for(int i=1;i<enter;i++){
        fib_array[i] = counter;
        counter = fib_array[i]+fib_array[i-1];
    }
    cout << "---------RESULT---------" << endl;
    for(int i=0;i<enter;i++){
        cout << fib_array[i] << " | " ;
    }
    return 0;
}
