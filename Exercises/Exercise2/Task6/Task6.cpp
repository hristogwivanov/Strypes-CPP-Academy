#include <iostream>
using namespace std;
int main()
{
    int number, choice, bit_position;
    cout << "Въведете число: ";
    cin >> number;

    while (choice != 4)
    {
        cout << "Изберете операция: \n";
        cout << "1. Задайте бит на 1 \n";
        cout << "2. Задайте бит на 0 \n";
        cout << "3. Проверете стойността на бит \n";
        cout << "4. Изход \n";
        cout << "Въведете вашия избор: ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Въведете позиция на бита: ";
            cin >> bit_position;
            number |= (1 << (bit_position - 1));
            cout << "Резултат след задаване на бит " << bit_position << " на 1: " << number << endl;
        }
        else if (choice == 2)
        {
            cout << "Въведете позиция на бита: ";
            cin >> bit_position;
            number &= ~(1 << (bit_position - 1));
            cout << "Резултат след задаване на бит " << bit_position << " на 0: " << number << endl;
        }
        else if (choice == 3)
        {
            cout << "Въведете позиция на бита: ";
            cin >> bit_position;
            int bit_value = (number >> (bit_position - 1)) & 1;
            cout << "Стойността на бит " << bit_position << " e: " << bit_value << endl;
        }
        else if (choice == 4)
        {
            return 0;
        }
        else
        {
            cout << "Невалиден избор." << endl;
        }
        cout << "Натиснете Enter за да продължите...";
        cin.ignore(); 
        cin.get();    
        cout << endl;
    }
    return 0;
}
