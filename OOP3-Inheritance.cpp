#include <iostream> //Including Input Output stream libriary For STD::COUT
#include <string>   //Including String libriary For STD::STRING
using namespace std;    //Using STD as a namespace to skip reapetting STD::

class father{ // Base Class : The Been inherited
    public:     // Public access
        int a = 10; //Public Attribution
        int GetB(){     // GETTER Function
            return b;   //Reading the Private attribute 'b'
        }
    private: // Private access
        int b = 20;     // Private Attribution
};
class son:public father{ // Derived Class : inherited from the base class
    public: // Public Access in the derived class
        int c = 30;     // public attribution in derived class
};

int main(){         // OUR MAIN Function
    son object1;  // Creating Object in the Derived Class
    cout << "** From The Derived Class: " <<object1.c << "\n** From PUBLIC basse Class: " << object1.a << "\n** From private in base class using GETTER Function: " << object1.GetB() <<endl;
    /*         Object1 accessing attribute c from his derived class             Object1 accessing attribute a from base class             Object1 accessing attribute b from private 
                                                                                                                                                base class using GETTER Function GETB()
   */
   return 0;
}
