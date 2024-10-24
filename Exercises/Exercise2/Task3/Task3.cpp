#include <iostream>
#include <string>
#include <bitset>
#include <algorithm>

using namespace std;

int main(){
    string s1, s2;
    cout << "Въведете първото число: ";
    cin >> s1;

    for(char c : s1) {
        if (c != '0' && c != '1') {
            cout << "Невалидно число!" << endl;
            return 1;
        }
    }

    cout << "Въведете второто число: ";
    cin >> s2;

    for(char c: s2) {
        if (c!= '0' && c != '1') {
            cout << "Невалидно число!" << endl;
        return 1;
        }
    }

    int n = max(s1.length(), s2.length());
    s1 = string(n - s1.length(), '0') + s1;
    s2 = string(n - s2.length(), '0') + s2;

    bitset<64> bits1(s1);
    bitset<64> bits2(s2);

    cout << "AND: " << (bits1 & bits2).to_string().substr(64-n) << endl;
    cout << "OR: " << (bits1 | bits2).to_string().substr(64-n) << endl;
    cout << "XOR: " << (bits1 ^ bits2).to_string().substr(64-n) << endl;
    cout << "NOT на първото число: " << (~bits1).to_string().substr(64-n) << endl;

    return 0;
}