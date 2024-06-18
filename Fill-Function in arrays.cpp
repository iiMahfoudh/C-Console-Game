#include <iostream>
using namespace std;

int main(){
    int a[5];
    int size = sizeof(a)/sizeof(int);
    fill(a,a+size,5);
    for(int b : a){
        cout << b << " ";
    }
    return 0;
}
