#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int choice;
    bool valid = false;

    while(!valid) {
        cout << "Моля въведете в каква бройна система е входното число (2, 4, 8 или 16): " << endl;
        string input;
        getline(cin, input);
        stringstream ss(input);

        if(ss >> choice) {
            if(ss.eof()){
                if(choice == 2 || choice == 8 || choice == 16) {
                    valid = true;
                } else {
                    cout << "Невалиден номер. Моля въведете 2, 8, 10 или 16. \n";
                }
            } else {
                cout << "Невалиден вход. Моля използвайте числови стойности!\n";
            }
        } else {
            cout << "Невалиден вход. Моля използвайте числови стойности!\n";
        }
    }
    return 0;
}