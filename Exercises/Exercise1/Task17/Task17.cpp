#include<iostream>
using namespace std; 
int main(){
    float a, b;
    cout << "Моля въведете първото число: ";
    cin >> a; 
    cout << "Моля въведете второто число: ";
    cin >> b;
    cout << "Разликата между двете числа е: ";
    if(a>b){
        cout << (a-b) << endl;
    }else cout << (b-a) << endl;
    
    return 0; 
}