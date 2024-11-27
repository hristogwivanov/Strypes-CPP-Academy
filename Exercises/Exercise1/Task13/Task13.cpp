#include <iostream>
using namespace std; 
int main (){
    int a, b, c, maxNum; 
    cout << "Въведете първото число:" << endl; 
    cin >> a;
    cout << "Въведете второто число: " << endl; 
    cin >> b;
    cout << "Въведете третото число: " << endl; 
    cin >> c; 
    
    if (a >= b) maxNum = a;
    else if (b>=c) maxNum = b;
    else maxNum = c;

    cout << "Най-голямото от трите числа е: " << maxNum << endl;

    return 0; 
}