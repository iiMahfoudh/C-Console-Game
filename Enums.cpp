#include <iostream>
#include <string>
using namespace std;
// enums are a user definder datatype used to relate between name-integer, great for having various potential options
enum days {sunday = 1 , monday = 2, tuesday = 3 , wednesday = 4 , thursday = 5,friday = 6,saturday = 7};

int main(){
    days day = wednesday; // treated as a datatype defined by user
    // Now We Can Use Switch As Argument are treated as integers
    switch(day){
        case sunday:
            cout << "today is sunday";
            break;
        case monday:
            cout << "today is monday";
            break;
        case tuesday:
            cout << "today is tuesday";
            break;
        case wednesday:
            cout << "today is wednesday";
            break;
        case thursday:
            cout << "today is thursday";
            break;
        case friday:
            cout << "today is friday";
            break;
        case saturday:
            cout << "today is saturday";
            break;
    }

    return 0;
}
