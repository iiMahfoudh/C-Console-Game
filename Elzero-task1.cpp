#include <iostream>
using namespace std;

int main(){
    // This Console app consumes 4*3=12 bytes or 2*3=6 bytes
    int kilo_byte;
    int byte = kilo_byte * 1024;
    int bits = byte * 8;
    cout << "Enter value in Kilobytes: " ;
    cin >> kilo_byte;
    cout << "1.The Value in KiloBytes is: " << kilo_byte << endl;
    cout << "2.The Value in bytes is: " << byte<< endl;
    cout << "3.The Value in bits is: " << bits << endl;
    return 0;
}
