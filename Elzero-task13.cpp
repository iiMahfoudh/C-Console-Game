#include <iostream>
using namespace std;

void print(int a,int b){                      //Function 1: 2 Arg Same type 
  cout << a << " "<< b << endl;
}
void print(int a , int b ,int c){             //function 2: 3 Args Same types
  cout << a << " " << b <<" "<< c << endl;
}
void print(){                                 //function 3: No Arguments
  cout << "Nothing"<<endl;
}
void print(string a,int b){                   //function 4: 2 Args diffrent types
  cout << a << " " << b << endl;
}
void print(int b,string a){                   //function 5: 2 Args diffrent types and ordre
  cout << b << " " << a << endl;
}
int main(){
  print(10,12);   // calling 1st function
  print(10,12,60);  // calling 2nd function
  print();  // calling 3rd function
  print("Oussama",18);  // calling 4th function
  print(18,"Oussama");  // calling 5th function
  return 0;
}
