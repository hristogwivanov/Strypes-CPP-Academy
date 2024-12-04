#include<iostream>
using namespace std; 
int main() {
    float num;
    cout << "Въведете число на което да бъде отпечата обратната стойност: ";
    cin >> num;
    if (num == 0){
        cerr << "Числото не може да бъде 0" << endl;
        return 1;
    }
    cout << "Обратното число на " << num << " e " << 1/num << endl;
    return 0;
}