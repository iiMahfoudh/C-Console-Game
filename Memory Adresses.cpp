#include <iostream>
using namespace std;
int main(){
    //Memory Adresses
    int a = 10;
    double b = 10.99;
    float c = 10.9999999999;
    string d = "Hey";
    bool e = true;
    cout << &a << "\n";
    cout << &b << "\n";
    cout << &c << "\n";
    cout << &d << "\n";
    cout << &e << "\n";
    return 0;
}
