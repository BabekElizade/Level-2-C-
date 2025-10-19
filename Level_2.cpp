#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){

// 1

int a, b;
cout << "a:";
cin >> a;
cout << "b:";
cin >> b;
if(a > b){
    cout << a;
}else{
    cout << b;
} 

// 2

int input;
cin >> input;
if(input < 0){
    cout << "menfidir";
}else if(input == 0){
    cout << "0-dir";
}else{
    cout << "musbetdir";
}

// 3

int number_1, number_2, number_3;
cin >> number_1;
cin >> number_2;
cin >> number_3;
cout << max(number_1, number_2, number_3);

// 4

int user_input;
cin >> user_input;
if(user_input % 2 == 0){
    cout << "Cutdur";
}else{
    cout << "Tekdir";
}

// 5

int telebe_bali;
cin >> telebe_bali;
if(telebe_bali >= 0 & telebe_bali <= 50){
    cout << "F";
}else if(telebe_bali >= 51 & telebe_bali <= 60){
    cout << "E";
}else if(telebe_bali >= 61 & telebe_bali <=70){
    cout << "D";
}else if(telebe_bali >= 71 & telebe_bali <= 80){
    cout << "C";
}else if(telebe_bali >= 81 & telebe_bali <= 90){
    cout << "B";
}else{
    cout << "A";
}

// 6

int ay;
cin >> ay;
switch(ay){
    case 1:
        cout << "Qis";
    case 2:
        cout << "Qis";
    case 3:
        cout << "Qis";
    case 4:
        cout << "Yaz";
    case 5:
        cout << "Yaz";
    case 6:
        cout << "Yaz";
    case 7:
        cout << "Yay";
    case 8:
        cout << "Yay";
    case 9:
        cout << "Yay";
    case 10:
        cout << "Payiz";
    case 11:
        cout << "Payiz";
    case 12:
        cout << "Payiz";
    default:
        cout << "ERROR";
}

// 7

cout << "1 - Toplama" << endl;
cout << "2 - Cixma" << endl;
cout << "3 - Vurma" << endl;
cout << "4 - Bolme" << endl;
int operation_number;
int Number_1, Number_2;
cin >> Number_1;
cin >> Number_2;
cin >> operation_number;
switch(operation_number){
    case 1:
        cout << Number_1 + Number_2;
    case 2:
        cout << Number_1 - Number_2;
    case 3:
        cout << Number_1 * Number_2;
    case 4:
        cout << Number_1 / Number_2;
    default:
        cout << "ERROR";
}

// 8

int il;
cin >> il;
if((il % 4 == 0 & il % 100 != 0) || il % 400 == 0){
    cout << "artiq ildir";
}else{
    cout << "artiq il deyil";
}

}