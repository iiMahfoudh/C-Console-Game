#include <iostream>
using namespace std;
/* Using Same Function With many argument datatypes and skip overloading */
template <typename T,typename U>    // Define Datatype created in the Function!
auto max(T x,U y){  // Set The return type to be auto , Set Argument with the new datatype created!
    return (x>y) ? x : y;   /* Returning max value by ternarry opperator */
}
int main(){
    cout << max('a',2); // calling the function with setting up arguments // For Now 'a' is a char with present 97 in dec while 2 is integer!
                        // and the template function accept both data types and works
    return 0;
}
