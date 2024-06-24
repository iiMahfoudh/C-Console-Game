#include <iostream>
#include <string>
using namespace std;

class NuculearBomb{ //OOP Creating An Class Nammed "NuclearBomb"
    private:  //Access Specified to Private
        int tempurature = 25;   //A private attribute
    public:  //Access Specified to public
    int GetTemp(){  //Getter Function
        return tempurature;  //Access the private attribute READ-ONLY
    }
    void SetTemp(int tempurature){  //Setter Function
        if(tempurature<0){  //Conditions for fun :)
            cout << "\n*** WARNING:INVALID INPUT ***" << endl;
            cout << "*** POSSIBLE CYBER ATTACK ***\n" << endl;
        }
        else if(tempurature>100){
            cout << "\n*** WARNING:INVALID INPUT ***" << endl;
            cout << "*** POSSIBLE CYBER ATTACK ***\n" << endl;

        }
        else{
            this->tempurature = tempurature;  // Access the private attribute And OverWrite it WRITE.
        }
    }
};

int main(){
    do{ // Just Looping
    int x;
    cout << "Welcome To Nuculare bomb setter\n";
    cout << "Enter Temp: ";
    cin >> x;   // User Input
    NuculearBomb object1;   // Creating an Object nammed "Object1" in "Nuclear Bomb" Class
    object1.SetTemp(x);   //Writing On the private attribute using the Setter function
    cout << "Tempurature Now is: " <<object1.GetTemp()<<endl;   // Output attribute Using Getter Function
    }while(1);
    return 0;
}
