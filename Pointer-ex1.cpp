#include <iostream>
using namespace std;
                        /*                
                               * derefrence symbole
                               & reference symbole / adress
                        */
int main(){
    string key = "1104efag"; 
    string *pKey = &key; //pointer exemple , should be the same date type 
    cout << *pKey << endl;

    return 0;
}
