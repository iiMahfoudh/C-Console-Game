#include <iostream>
#include <string>

using namespace std;
//OOP Object Oriented Programming
class Phones{ //Define a class nammed "Phones"
    public:     //Publicly
        string brand;   // Members or atributes
        string model;
        int year;
        Phones(string brand,string model,int year){    //Constructor function
           this->brand = brand;
           this->model = model;
           this->year = year; 
        }
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
    Phones iphone("Iphone","X",2019);  //creating object and passing argument to constractor.
    Phones infinix("Infinx","S",2018);

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
