#include<iostream>
using namespace std;
int main() {
    int num, sum = 0; 
    cout << "Моля въведете цяло число: ";
    cin >> num; 
    while (num > 0) {
        sum += num % 10;
        num = num/10;
    }

    cout << "Сбора на всички цифри в числото е: " << sum << endl; 
    return 0; 
}