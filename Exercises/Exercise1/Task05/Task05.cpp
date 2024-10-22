#include <iostream>
#include <iomanip>
    using namespace std; 
    int main () {
        float input, rate = 1.9556;
        cout << "Моля въведете сумата в лева кояте желате да бъде конвертирана: ";
        cin >> input;
        cout << fixed << setprecision(2);
        cout << "Сумата " << input << " Лв се равнява на " << input*rate << " Euro"<<endl;
        return 0;
    }