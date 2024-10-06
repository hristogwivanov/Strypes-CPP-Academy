#include<iostream>
#include <limits> 

using namespace std;

int f_one(int a, int b, int c) {
    return (!a && !b && !c) || (!a && b && !c) || (!a && b && c) || (a && b && c);
}

int f_zero(int a, int b, int c) {
    return (a || b || !c) && (!a || b || c) && (!a || b || !c) && (!a || !b || c);
}

int f_minimized(int a, int b, int c) {
    return (!a && !c) || (b && c);
}

int getValidInput(const string& prompt) {
    int num;
    while (true) {
        cout << prompt;
        cin >> num;
        
        if (cin.fail() || (num != 0 && num != 1)) {
            cout << "Невалиден избор. Моля въведете 0 или 1!" << endl;
            cin.clear();  
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  
        } else {
            return num; 
        }
    }
}

int main() {
    int a, b, c;

    a = getValidInput("Моля въведете първото число (0 или 1) за a: ");
    b = getValidInput("Моля въведете второто число (0 или 1) за b: ");
    c = getValidInput("Моля въведете третото число (0 или 1) за c: ");

    cout << "Резултат от синтез по '1': " << f_one(a, b, c) << endl;
    cout << "Резултат от синтез по '0': " << f_zero(a, b, c) << endl;
    cout << "Резултат от минимизиран логически израз: " << f_minimized(a, b, c) << endl;

    return 0;
}
