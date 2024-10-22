#include <iostream>
#include <bitset>
#include <cstdint>
    using namespace std;
    int main(){
        float num;
        
        cout << "Въведете реално число: " << endl;
        cin >> num;

        union {
            float input;
            uint32_t bits;
        } data;

        data.input = num;

        uint32_t sign = (data.bits >> 31);
        uint32_t exponent = (data.bits >> 23) & 0xFF;
        uint32_t mantissa = data.bits & 0x7FFFFFF;

        bitset<8> exponentBits(exponent);
        bitset<23> mantissaBits(mantissa);

        cout << "Знак: " << sign << endl;
        cout << "Експонента: " << exponentBits << endl; 
        cout << "Мантиса: " << mantissaBits << endl; 

        return 0; 
    }