#include <iostream>
using namespace std;
int main(){
    char enter;
    do{
    cout << "-----ASCII CODE-----"<<"\n";
    cout << "Enter Character: ";
    cin >> enter;
    cout << "-------RESULT-------"<<"\n";
    cout << "         " << int(enter) << "            \n";
    cout << "-------RESULT-------"<<"\n";
    }while(1);
    return 0;
}
