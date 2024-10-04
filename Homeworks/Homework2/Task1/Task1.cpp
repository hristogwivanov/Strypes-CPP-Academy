#include<iostream>
#include<iomanip>

using namespace std;

int handleNegative(int number) {
    if (number < 0) {
        cout << "-";
        return -number;
    }
    return number;
}

void dec2bin(int number) {
    cout << "Двоично: ";
    
    if (number == 0) {
        cout << "0" << endl;
        return;
    }

    number = handleNegative(number);

    bool leadingZero = true;
    for (int i = sizeof(int) * 8 - 1; i >= 0; --i) {
        int bit = (number >> i) & 1;
        if (bit == 1) leadingZero = false;
        if (!leadingZero) cout << bit;
    }

    cout << endl;
}

void dec2oct(int number) {
    cout << "Осмично: ";

    if (number == 0) {
        cout << "0" << endl;
        return;
    }

    number = handleNegative(number);
    unsigned int octal[32];
    int index = 0;

    while(number > 0) {
        octal[index++] = number & 7;
        number >>= 3;
    }

    for (int i = index - 1; i >= 0; i--) {
        cout << octal[i];
    }
    cout << endl;
}

void dec2hex(int number){
    cout << "Шестнайсетично: ";

    if (number == 0) {
        cout << "0" << endl;
        return;
    }


    number = handleNegative(number);
    char hex[32];
    int index = 0;

    while (number > 0) {
        int hexDigit = number & 0xF;
        if (hexDigit < 10) {
            hex[index++] = '0' +  hexDigit;
        } else {
            hex[index++] = 'A' + (hexDigit - 10);
        }
        number >>= 4;
    }

    for (int i = index -1; i >= 0; i--) {
        cout << hex[i];
    }
    cout << endl;
}

int main(){
    int number;
    cout << "Въведете цяло десетично число: ";
    cin >> number;
    
    dec2bin(number);
    dec2oct(number);
    dec2hex(number);

    return 0;
}