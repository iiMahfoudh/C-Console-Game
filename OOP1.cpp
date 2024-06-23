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

        }
        void turnon(){

        }
        void turnoff(){

        }
};
int main(){ //Our Main Function
    Phones iphone;  //Define "iphone" in Phones Class as a var in datatype
        iphone.brand = "Iphone X";  // Change This Object Axis
        iphone.model = "X";
        iphone.year = 2019;
    cout << iphone.brand << " " << iphone.model << " " << iphone.year << endl; // Output
    return 0;
}
