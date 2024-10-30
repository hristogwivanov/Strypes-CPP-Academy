#include <iostream>
using namespace std;
int main () {
    int a, b; 
    cout << "Програма за проверка на делимост на 2 числа" << endl;
    cout << "Моля въведете делимо: "; 
    cin >> a; 
    cout << "Моля въведете делител: ";
    cin >> b; 
    if (a % b == 0) {
        cout << "Делителя се дели на делимото точно!" << endl;
    } else {
        cerr << "Делителя не се дели точно на делимото!" << endl;
    }
}