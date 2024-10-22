#include <iostream>
using namespace std;
int main()
{
    int num, lastnum, output = 0;
    cin >> num;
    while (num != 0){
        lastnum = num % 10;
        output += lastnum;
        num = num-lastnum;
        num /= 10;
        if (num!=0) output *= 10;
    }
    cout << output<<endl;

    return 0;
}