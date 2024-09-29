#include <iostream>
#include <fstream>

using namespace std;

int main() {
    float num1, num2, num3;
    char choice;
    cout << "Това е програма която извежда най-голямото от 3 реални числа" << endl;
    cout << "Моля въведете 'k' за вход от клавиатурата или 'f' за четене от файл" << endl;
    cin >> choice;
    
    if (choice == 'f' || choice == 'F') {
        ifstream file("numbers.txt");

        if (!file.is_open()) {
            cerr << "Грешка: Файлът не може да бъде прочетен!" << endl;
            return 1;
        }

        file >> num1 >> num2 >> num3;
        file.close();
    } else if (choice == 'k' || choice == 'K') {
        cout << "Въведете 3 реални числа от клавиатурата: " << endl;
        cin >> num1 >> num2 >> num3;
    } else {
        cerr << "Невалиден избор!" << endl;
        return 1;
    }

    
    float max = num1;
    
    if (num2 > max) {
        max = num2;
    }

    if (num3 > max) {
        max = num3;
    }

    cout << "Най-голямото от трите реални числа е: " << max << endl; 

    return 0;
}