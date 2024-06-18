#include <iostream>
using namespace std;
    //Luhn Algorithme
int Get_Digit(const int number);
int Sumodd_Digit(const string card_num);
int Someeven_Digit(const string card_num);
int main(){
    int result = 0;
    string card_num;
    do{
    cout << "Enter A Credit Card Number : ";
    cin >> card_num;
    result = Sumodd_Digit(card_num) + Someeven_Digit(card_num);
    if(result%10 == 0){
        cout << "This Credit Card Number: "<< card_num << " Is Valid !"<<endl;
    }
    else {
        cout << "This Credit Card Number: "<< card_num << " Is Not Valid !"<<endl;
    }
    }while(1);
    return 0;
}
int Get_Digit(const int number){
    return number % 10 + (number / 10 % 10);
}
int Sumodd_Digit(const string card_num){
    int sum1 = 0;
    for(int i=card_num.size()-1;i>=0;i-=2){
        sum1 += card_num[i] - 48;
    }
    return sum1;
}
int Someeven_Digit(const string card_num){
    int sum2 = 0;
    for(int i=card_num.size()-2;i>=0;i-=2){
        sum2 += Get_Digit((card_num[i] - 48)*2);
    }
    return sum2;
}
