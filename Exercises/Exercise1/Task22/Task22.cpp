#include<iostream> 
using namespace std; 
int main () {
    cout << "Моля, въведете разстоянието в мили: ";
    float miles;
    cin >> miles;
    cout << "Разстоянието в километри е " << miles*1.60934 << endl;
    return 0;
}