#include <iostream>
#include <string>

using namespace std;
//OOP Object Oriented Programming
class Phones{ //Define a class nammed "Phones"
    public:     //Publicly
        string brand;   // Members or atributes
        string model;
        int year;
        void call(){    //Functions or Méthodes
            cout << "The Phone is calling..." <<endl;
        }
        void turnon(){
            cout << "The Phone is turning on..." <<endl;
        }
        void turnoff(){
            cout << "The Phone is turning off..." <<endl;
        }
};

int main(){ //Our Main Function
    Phones iphone;  //Define "iphone" in Phones Class as a var in datatype
        iphone.brand = "Iphone X";  // Change This Object Axis
        iphone.model = "X";
        iphone.year = 2019;
    Phones infinix;
        infinix.brand = "Infinix inc";
        infinix.model = "XS";
        infinix.year = 2017;
    cout << iphone.brand << " " << iphone.model << " " << iphone.year << endl; // Output
    iphone.call();      // Output methode
    iphone.turnon();
    iphone.turnoff();
    cout << infinix.brand << " " << infinix.model << " " << infinix.year << endl; // Output
    infinix.call();      // Output methode
    infinix.turnon();
    infinix.turnoff();
    return 0;
}
