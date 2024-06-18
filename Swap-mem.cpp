#include <iostream>
using namespace std;
// Pass Per Value or Pass per refrence!
void swap(int &a,int &b){   // & To Make the function pick up real values by its adresses !!!
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    //Memory Adresses
    int a = 10;
    int b = 5;
    swap(a,b);
    cout << "A : " << a <<endl;
    cout << "B : " << b <<endl;
    return 0;
}
