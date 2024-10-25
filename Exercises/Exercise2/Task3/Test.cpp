#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isValidBinary(const string& str) {
    for (char c : str) {
        if (c != '0' && c != '1') {
            return false;
        }
    }
    return true;
}

pair<string, string> equalizeLength(string num1, string num2) {
    int len1 = num1.length();
    int len2 = num2.length();
    
    if (len1 < len2) {
        num1 = string(len2 - len1, '0') + num1;
    } else if (len2 < len1) {
        num2 = string(len1 - len2, '0') + num2;
    }
    
    return {num1, num2};
}

string logicAND(string num1, string num2) {
    auto [n1, n2] = equalizeLength(num1, num2);
    string result;
    
    for (size_t i = 0; i < n1.length(); i++) {
        result += ((n1[i] - '0') & (n2[i] - '0')) + '0';
    }
    
    return result;
}

string logicOR(string num1, string num2) {
    auto [n1, n2] = equalizeLength(num1, num2);
    string result;
    
    for (size_t i = 0; i < n1.length(); i++) {
        result += ((n1[i] - '0') | (n2[i] - '0')) + '0';
    }
    
    return result;
}

string logicXOR(string num1, string num2) {
    auto [n1, n2] = equalizeLength(num1, num2);
    string result;
    
    for (size_t i = 0; i < n1.length(); i++) {
        result += ((n1[i] - '0') ^ (n2[i] - '0')) + '0';
    }
    
    return result;
}

string logicNOT(string num) {
    string result;
    
    for (char bit : num) {
        result += (bit == '0') ? '1' : '0';
    }
    
    return result;
}

int main() {
    string num1, num2;
    
    cout << "Въведете първото число: ";
    cin >> num1;
    
    cout << "Въведете второто число: ";
    cin >> num2;
    
    if (!isValidBinary(num1) || !isValidBinary(num2)) {
        cout << "Грешка: Моля въведете валидни двоични числа (само 0 и 1)" << endl;
        return 1;
    }
    
    cout << "AND: " << logicAND(num1, num2) << endl;
    cout << "OR: " << logicOR(num1, num2) << endl;
    cout << "XOR: " << logicXOR(num1, num2) << endl;
    cout << "NOT на първото число: " << logicNOT(num1) << endl;
    
    return 0;
}