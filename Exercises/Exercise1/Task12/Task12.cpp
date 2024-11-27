#include<iostream>
using namespace std; 
int main() { 
    int a, b; 
    cout << "Разлика между 2 числа." << endl;
    cout << "Въведете първото число: ";
    cin >> a;
    cout << "Въведете второто число: ";
    cin >> b; 
    cout << "Разликата между числата е: " << ((a > b) ? (a-b) : (b-a)) << endl;
    return 0; 
}