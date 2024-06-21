#include <iostream>
using namespace std;
int fact(int num){
    //itterative methode
    int result = 1;
    for(int i=1;i<=num;i++){
        result *= i;   
    }
    return result;
}
int main(){
    int num;
    cout << "Factorial Calculator" << endl;
    cout << "Enter a number: " << endl;
    cin >> num;
    cout << "Result: " << fact(num)<< endl;
    return 0;
}
