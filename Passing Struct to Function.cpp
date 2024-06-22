#include <iostream>
#include <string>
using namespace std;
struct cars{               // Creating A Struct Nammed "cars"
    string model;           //Setting Up It's Classes
    string brand;
    string color;
    int year;
};
void printcar(cars carx){   // Creating a function nammed "printcar" and passing carx in cars datatype // You Could pass by reference by using printcar(cars &carx).
        cout << carx.model << endl; //printing out classes for the called argument.
        cout << carx.brand << endl;
        cout << carx.color << endl;
        cout << carx.year << endl;

}
int main(){
    cars car1;  // Declaring car1 of cars datatype
        car1.model = "Model A";     // Setting up classes for car1
        car1.brand = "Cheverollet";
        car1.color = "Red";
        car1.year = 2019;
    cars car2;  // Declaring car2 of cars datatype
        car2.model = "Model B";  // Setting up classes for car2
        car2.brand = "Toyota";
        car2.color = "Black";
        car2.year = 2023;
        printcar(car1); // Calling printing function passing car1 
    return 0;
}
