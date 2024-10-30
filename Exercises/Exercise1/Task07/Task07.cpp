#include<iostream> 
using namespace std;
 int main() {
    cout << "Разменяне на 2 променливи, без използването на трета." << endl; 
    int a, b;
    cout << "Въведете първата променлива: ";
    cin >> a; 
    cout << "Въведете втората променлива: ";
    cin >> b;
    a = a + b;
    b = a - b; 
    a = a - b; 
    cout << "Първата променлива е: " << a << endl; 
    cout << "Втората променлива е: " << b << endl; 
    return 0; 
 }