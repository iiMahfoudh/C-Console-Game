#include <iostream>
#include <string>
using namespace std;

class basement{ // Class That is been Inherited
    public:
        int a = 1;    // Public Attribute 
};
class base1 : public basement{ // Inherited from base class
    public:
        int a = 2;  // Public Attribute 
};
class base2 : public basement{  // Inherited from base class
    public:
        int a = 3;  // Public Attribute 
};

int main(){
    basement object; //Creating an object in base class
        cout << object.a << endl;
    base1 object2;   //Creating an object in base1 inherited from base
        cout << object2.a << endl;
    base2 object3;    //Creating an object in base2 inherited from base
        cout << object3.a << endl;
    return 0;
}                      /* The Output would be 1 2 3 because the attribute is being overwrited in each class and subclass */
