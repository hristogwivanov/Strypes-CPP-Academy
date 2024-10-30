#include <iostream>
using namespace std; 
int main () {
    int t; 
    cout << "Моля въведете температурата в Целзий: "; 
    cin >> t; 
    cout << "Конвертираната температура е: " << t*9.0/5 + 32 << endl; 
    return 0; 
}