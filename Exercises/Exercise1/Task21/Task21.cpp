#include<iostream>
using namespace std; 
int main() {
    cout << "Моля, въведете цяло число: ";
    int a;
    cin >> a;
    if (a == 0) cout << "Нула";
    else if (a > 0) cout << "Положително";
    else cout << "Отрицателно";
    cout << endl;
    return 0;
}