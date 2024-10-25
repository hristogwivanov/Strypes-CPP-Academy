#include <iostream> 
using namespace std;
int main() {
    int a, b, result, choice; 
    cout << "Моля въведете първото число: ";
    cin >> a;;
    cout << "Моля въведете второто число: ";
    cin >> b; 
    cout << "Mоля, изберете операция: " << endl << "1: AND \n2: OR \n3: XOR \n4: Изместване наляво \n5: Изместване надясно \n";
    cin >> choice;
    switch(choice) {
        case 1: 
            result = a & b; 
            break;
        case 2:
            result = a | b;
            break;
        case 3: 
            result = a ^ b;
            break;
        case 4: 
            result = a << b; 
            break;
        case 5: 
            result = a >> b;
        default: break;
    }
    cout << "Резултат: " << result << endl;


    
}