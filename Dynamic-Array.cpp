#include <iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter student number: ";
    cin >> size;
    string *student = NULL;
    student = new string[size];
    for(int i=0;i<size;i++){
        cout << "Enter "<< i+1 <<" Student Name: ";
        cin >> student[i];
    }
    for(int i=0;i<size;i++){
        cout << student[i] << endl;
    }
    return 0;
}
