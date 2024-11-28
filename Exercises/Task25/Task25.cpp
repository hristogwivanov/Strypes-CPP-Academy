#include<iostream> 
#include<cmath>
using namespace std;
int main() {
    float a, b;
    cout << "Моля, въведете първото положително число: ";
    cin >> a;
    cout << "Моля, въведете второто положително число: ";
    cin >> b; 
    if (a<=0 || b<=0) {
        cout << "И двете числа трябва да са положителни и различни от 0!" << endl;
        return 0;
    } else cout << "Средното геометрично число е " << sqrt(a*b) << endl;
    return 0;
}