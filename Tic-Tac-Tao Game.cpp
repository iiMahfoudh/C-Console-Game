#include <iostream>
#include <ctime>
using namespace std;

void disp(char matrice[3][3]);
void computer(char matrice[3][3],char signC);
void Player(char sign,char matrice[3][3],char signC);
bool Run(char sign,char matrice[3][3],char signC);
bool check(char sign,char matrice[3][3],char signC);
int k=0;

int main(){
    char matrice[3][3] = {{' ',' ',' '},
                          {' ',' ',' '},
                          {' ',' ',' '}};
    srand(time(NULL));
    int sel;
    char sign;
    char signC;
    cout << "Welcome To Xo Game..." << endl;
    do{
    cout << "Selection : 1.For 'X'" << endl;
    cout << "            2.For 'O' ==>> " ;
    cin >> sel;
    switch (sel){
        case 1:
            sign = 'X';
            signC = 'O';
            cout << "You Selected : X"<<endl;
            Run(sign,matrice,signC);
            goto end;
        case 2:
            sign = 'O';
            signC = 'X';
            cout << "You Selected : O"<<endl;
            Run(sign,matrice,signC);
            goto end;
        default:
            cout << "invalid selection !"<<endl;
            break;
    }
    }while(sel != 1 || sel != 2);
    end:
        cout << endl; 
    return 0;
}
bool check(char sign,char matrice[3][3],char signC){
    k=0;
    if(matrice[0][0]==sign&&matrice[0][0]==matrice[0][1]&&matrice[0][1]==matrice[0][2]){ // line 1P
        return 1;
    }
    else if(matrice[0][0]==signC&&matrice[0][0]==matrice[0][1]&&matrice[0][1]==matrice[0][2]){ // line 1C
        k=1;
    }
    else if(matrice[1][0]==sign&&matrice[1][0]==matrice[1][1]&&matrice[1][1]==matrice[1][2]){ // line 2P
        return 1;
    }
        else if(matrice[1][0]==signC&&matrice[1][0]==matrice[1][1]&&matrice[1][1]==matrice[1][2]){ // line 2C
        k=1;

    }
    else if(matrice[2][0]==sign&&matrice[2][0]==matrice[2][1]&&matrice[2][1]==matrice[2][2]){ // line 3P
        return 1;
    }
    else if(matrice[2][0]==signC&&matrice[2][0]==matrice[2][1]&&matrice[2][1]==matrice[2][2]){ // line 3C
        k=1;
    }
    else if(matrice[0][0]==sign&&matrice[0][0]==matrice[1][0]&&matrice[1][0]==matrice[2][0]){ // collumn 1P
        return 1;
    }
    else if(matrice[0][0]==signC&&matrice[0][0]==matrice[1][0]&&matrice[1][0]==matrice[2][0]){ // collumn 1C
        k=1;
    }
    else if(matrice[0][1]==sign&&matrice[0][1]==matrice[1][1]&&matrice[1][1]==matrice[2][1]){ // collumn 2P
        return 1;
    }
        else if(matrice[0][1]==signC&&matrice[0][1]==matrice[1][1]&&matrice[1][1]==matrice[2][1]){ // collumn 2C
        k=1;
    }
    else if(matrice[0][2]==sign&&matrice[0][2]==matrice[1][2]&&matrice[1][2]==matrice[2][2]){ // collumn 3P
        return 1;
    }
        else if(matrice[0][2]==signC&&matrice[0][2]==matrice[1][2]&&matrice[1][2]==matrice[2][2]){ // collumn 3C
        k=1;
    }
    else if(matrice[0][0]==sign&&matrice[0][0]==matrice[1][1]&&matrice[1][1]==matrice[2][2]){ // Diagonal downP
        return 1;
    }
        else if(matrice[0][0]==signC&&matrice[0][0]==matrice[1][1]&&matrice[1][1]==matrice[2][2]){ // Diagonal downC
        k=1;
        }
    else if(matrice[2][0]==sign&&matrice[2][0]==matrice[1][1]&&matrice[1][1]==matrice[0][2]){ // Diagonal upP
        return 1;
    }
        else if(matrice[2][0]==signC&&matrice[2][0]==matrice[1][1]&&matrice[1][1]==matrice[0][2]){ // Diagonal upC
        k=1;
    }
    return 0;
}

bool Run(char sign,char matrice[3][3],char signC){
    disp(matrice);
    check(sign,matrice,signC);
    if(check(sign,matrice,signC)==1){
        cout << "You Win !!" << endl;
        return 0;
    }
    else if (k==1){
        cout << "Computer Win !!" << endl;
        check(sign,matrice,signC)==0;
        return 0;

    }
    Player(sign,matrice,signC);
    return 1;
}

void disp(char matrice[3][3]){
    cout << "|----XO Game----|"<<endl;
    cout << "_________________"<<endl;
    cout << "  "<<matrice[0][0]<<"  |  "<<matrice[0][1]<<"  |  "<<matrice[0][2]<<"  "<<endl;
    cout << "_____|_____|_____"<<endl;
    cout << "  "<<matrice[1][0]<<"  |  "<<matrice[1][1]<<"  |  "<<matrice[1][2]<<"  "<<endl;
    cout << "_____|_____|_____"<<endl;
    cout << "  "<<matrice[2][0]<<"  |  "<<matrice[2][1]<<"  |  "<<matrice[2][2]<<"  "<<endl;
    cout << "_____|_____|_____"<<endl;
}
void computer(char matrice[3][3],char signC){
    int ran1 = rand()%3;
    int ran2 = rand()%3;
    if(matrice[ran1][ran2] == ' '){
    matrice[ran1][ran2] = signC;
    }
    else{
        computer(matrice,signC);
    }
}
void Player(char sign,char matrice[3][3],char signC){
    int possition;
    cout << "Enter possition : ";
    cin >> possition;
    switch(possition){
        case 1:
        if(matrice[0][0] == ' '){
            matrice[0][0] = sign;
            disp(matrice);
            computer(matrice,signC);
            Run(sign,matrice,signC);
            break;
        }
        else{
            cout << "Allready Takken !" << endl;
            Player(sign,matrice,signC);
        }
        case 2:
        if(matrice[0][1] == ' '){
            matrice[0][1] = sign;
            disp(matrice);
            computer(matrice,signC);
            Run(sign,matrice,signC);
            break;
        }
        else{
            cout << "Allready Takken !" << endl;
            Player(sign,matrice,signC);
        }
        case 3:
        if(matrice[0][2] == ' '){
            matrice[0][2] = sign;
            disp(matrice);
            computer(matrice,signC);
            Run(sign,matrice,signC);
            break;
        }
        else{
            cout << "Allready Takken !" << endl;
            Player(sign,matrice,signC);
        }
        case 4:
        if(matrice[1][0] == ' '){
            matrice[1][0] = sign;
            disp(matrice);
            computer(matrice,signC);
            Run(sign,matrice,signC);
            break;
        }
        else{
            cout << "Allready Takken !" << endl;
            Player(sign,matrice,signC);
        }
        case 5:
        if(matrice[1][1] == ' '){
            matrice[1][1] = sign;
            disp(matrice);
            computer(matrice,signC);
            Run(sign,matrice,signC);
            break;
        }
        else{
            cout << "Allready Takken !" << endl;
            Player(sign,matrice,signC);
        }
        case 6:
        if(matrice[1][2] == ' '){
            matrice[1][2] = sign;
            disp(matrice);
            computer(matrice,signC);
            Run(sign,matrice,signC);
            break;
        }
        else{
            cout << "Allready Takken !" << endl;
            Player(sign,matrice,signC);
        }
        case 7:
        if(matrice[2][0] == ' '){
            matrice[2][0] = sign;
            disp(matrice);
            computer(matrice,signC);
            Run(sign,matrice,signC);
            break;
        }
        else{
            cout << "Allready Takken !" << endl;
            Player(sign,matrice,signC);
        }
        case 8:
        if(matrice[2][1] == ' '){
            matrice[2][1] = sign;
            disp(matrice);
            computer(matrice,signC);
            Run(sign,matrice,signC);
            break;
        }
        else{
            cout << "Allready Takken !" << endl;
            Player(sign,matrice,signC);
        }
        case 9:
        if(matrice[2][2] == ' '){
            matrice[2][2] = sign;
            disp(matrice);
            computer(matrice,signC);
            Run(sign,matrice,signC);
            break;
        }
        else{
            cout << "Allready Takken !" << endl;
            Player(sign,matrice,signC);
        }
        default:
            cout << "Invalid input" << endl;
            Player(sign,matrice,signC);
    }
}
