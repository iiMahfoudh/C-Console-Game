#include <iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int *pA = new int;     // Dynamic memory allocation of an integer at the heap!
    pA = a;
    cout << pA;
    delete pA;            /* Deleting that memory allocation from the heap to not causing Memory leak! 
                                            should be at the end of use or end of programme
                                                                                                    */
    return 0;
}
