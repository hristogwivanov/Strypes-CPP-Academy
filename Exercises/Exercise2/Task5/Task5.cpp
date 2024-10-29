#include<iostream>
#include<limits> 
using namespace std; 
    int main() {
        bool a, b, c, result;
        cout << "Програма за изчисляване на логически израз (A AND B) OR NOT C" << endl;

        auto getValidatedInput = [](const char* prompt){
            int input;
            while(true){
                cout << prompt;
                cin >> input;
                if (!cin.fail() && (input == 0 || input == 1)){
                    return static_cast<bool>(input);
                } else {
                    cout << "Невалидна стойност! Моля, въведете 0 за false или 1 за true" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }
        };

        a = getValidatedInput("Въведете стойност за A: ");
        b = getValidatedInput("Въведете стойност за B: ");
        c = getValidatedInput("Въведете стойност за C: ");
        result = (a & b) | (!c); 
        cout << "Реултатът от (А AND B) OR NOT C е: " << result << endl; 
        return 0;
 }