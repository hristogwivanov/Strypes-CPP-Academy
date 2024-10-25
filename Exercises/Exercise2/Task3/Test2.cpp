#include <iostream>
#include <bitset>
#include <string>

using namespace std;

const size_t BIT_SIZE = 32;

bool isValidBinary(const string& str) {
    if (str.length() > BIT_SIZE) {
        return false;
    }
    return str.find_first_not_of("01") == string::npos;
}

int main() {
    string input1, input2;
    
    cout << "Въведете първото число: ";
    cin >> input1;
    
    cout << "Въведете второто число: ";
    cin >> input2;
    
    if (!isValidBinary(input1) || !isValidBinary(input2)) {
        cout << "Грешка: Моля въведете валидни двоични числа (само 0 и 1)" << endl;
        cout << "Максимална дължина: " << BIT_SIZE << " бита" << endl;
        return 1;
    }
    
    bitset<BIT_SIZE> num1(input1);
    bitset<BIT_SIZE> num2(input2);
    
    bitset<BIT_SIZE> andResult = num1 & num2;
    bitset<BIT_SIZE> orResult = num1 | num2;
    bitset<BIT_SIZE> xorResult = num1 ^ num2;
    bitset<BIT_SIZE> notResult = ~num1;
    
    string andStr = andResult.to_string();
    string orStr = orResult.to_string();
    string xorStr = xorResult.to_string();
    string notStr = notResult.to_string();
    
    size_t maxLen = max(input1.length(), input2.length());
    
    andStr = andStr.substr(BIT_SIZE - maxLen);
    orStr = orStr.substr(BIT_SIZE - maxLen);
    xorStr = xorStr.substr(BIT_SIZE - maxLen);
    notStr = notStr.substr(BIT_SIZE - input1.length());
    
    cout << "AND: " << andStr << endl;
    cout << "OR: " << orStr << endl;
    cout << "XOR: " << xorStr << endl;
    cout << "NOT на първото число: " << notStr << endl;
    
    return 0;
}