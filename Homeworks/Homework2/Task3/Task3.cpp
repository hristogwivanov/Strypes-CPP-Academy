#include <iostream>
#include <fstream> 
#include <limits>   

using namespace std;

int main() {
    char choice;
    int a, b;
    string input;

    cout << "Програма за XOR операция между 2 булеви числа" << endl;

    do {
        cout << "Моле въведете 'k' за четене от клавиатурата или 'f' за четене от файл: ";
        cin >> input;
        if (input.length() != 1 || (input[0] != 'k' && input[0] != 'f')) {
            cout << "Невалиден избор. Опитайте отново!" << endl;
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        } else {
            choice = input[0]; 
        }
    } while (choice != 'k' && choice != 'f');

    if (choice == 'k') {
        do {
            cout << "Моля въведете първото число (0 или 1): ";
            cin >> a;
            if (cin.fail() || (a != 0 && a != 1)) {
                cout << "Невалиден избор. Опитайте отново!" << endl;
                cin.clear();  
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                a = -1; 
            }
        } while (a != 0 && a != 1);

        do {
            cout << "Моля въведете второто число (0 или 1): ";
            cin >> b;
            if (cin.fail() || (b != 0 && b != 1)) {
                cout << "Невалиден избор. Опитайте отново!" << endl;
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                b = -1; 
            }
        } while (b != 0 && b != 1);

    } else if (choice == 'f') {
        ifstream inputFile("numbers.txt");
        if (!inputFile) {
            cout << "Грешка при отваряне на файла!" << endl;
            return 1; 
        }

        inputFile >> a >> b;

        if (inputFile.fail() || (a != 0 && a != 1) || (b != 0 && b != 1)) {
            cout << "Невалидни данни във файла. Уверете се, че съдържа само 0 и 1." << endl;
            return 1; 
        }

        inputFile.close();
    }

    cout << "Резултатът от XOR операцията: " << (a ^ b) << endl;

    return 0;
}
