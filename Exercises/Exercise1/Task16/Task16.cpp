#include<iostream>
using namespace std;
int main(){
    int n;
    float buff, sum = 0;
    cout << "Моля, въведете брой на въведените числа: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Моля, въведете число номер " << i << ":"; 
        cin >> buff; 
        sum += buff;
    }

    cout << "Средната стойност на всички " << n << " числа е " << static_cast<float>(sum)/n << endl;

    return 0;
}