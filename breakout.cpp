#include <iostream>
using namespace std;

int main(){
    int b;
    int a[]={0,1,2,3,4,5,6,7,8,9};
    int size = sizeof(a)/sizeof(int);
    do{
    cout << "Search number : ";
    cin >> b;
    if(b>9 || b<0){
        cout << "Invalid input" << endl;
    }
    else{
    for(int i=0;i<size;i++){
        if (a[i]==b){
            cout << "The Number : " << b << " is in the index of : " << i << endl;
            return 1; //break out from nested loops
        }
    }
    }
    }while(1);
    return 0;
}
