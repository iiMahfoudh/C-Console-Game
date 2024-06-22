#include <iostream>
using namespace std;
template <typename T,typename U>    // Define Datatype created in the Function!
auto max(T x,U y){  // Set The return type to be auto , Set Argument with the new datatype created!
    return (x>y) ? x : y;   /* Returning max value by ternarry opperator */
}
int main(){
    cout << max(4.5,2); // calling the function with setting up arguments
    return 0;
}
