#include<iostream>
using namespace std; 
    int main() {
        bool a, b, c;
        bool result; 
        cout << "Програма за изчисляване на логически израз (A AND B) OR NOT C" << endl;
        cout << "Въведете стойност за А: "; 
        cin >> a;
        cout << "Въведете стойност за B: "; 
        cin >> b;
        cout << "Въведете стойност за C: "; 
        cin >> c; 
        result = (a & b) | (~c); 
        cout << "Реултатът от (А AND B) OR NOT C е: " << result << endl; 
 }