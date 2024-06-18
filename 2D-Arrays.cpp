#include <iostream>
using namespace std;
int main(){
    int a[][3]={{1,2,3}, // Number Of Rows Are Not Nessessary to init , but columns you have to.
                {4,5,6},
                {7,8,9}}; //2D Array
    cout << a[1][2];
    return 0;
}
