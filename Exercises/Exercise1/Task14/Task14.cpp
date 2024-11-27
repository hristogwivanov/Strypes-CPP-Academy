#include<iostream>
using namespace std; 
int main() {
    float m, km;
    cout << "Въведете стойността в метри: "; 
    cin >> m;
    km = m/1000; 
    cout << m << " метра е равно на " << km << " километра." << endl;
    return 0;
}