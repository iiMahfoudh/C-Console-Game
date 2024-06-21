#include <iostream>
using namespace std;
int fact(int num){
    //recusive methode
    if(num>1){
        return num*fact(num-1);
    }
    else{
        return 1;
    }
}
int main(){
    int num;
    cout << "Factorial Calculator" << endl;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Result: " << fact(num)<< endl;
    return 0;
}
