#include<iostream>
#include<iomanip>

using namespace std;

void dec2bin(int number){
    cout << "Binary: ";
    int binary[32];
    int index = 0; 

    if (number == 0){
        cout << "0";
    } else {
        while (number > 0) {
            binary[index++] = number % 2;
            number /=2;
        }

        for (int i = index - 1; i >= 0; i--){
            cout << binary[i];
        }
    }
    cout << endl;

}

int main(){
    int number;
    cout << "Въведете цяло десетично число: ";
    cin >> number;
    
    dec2bin(number);
}