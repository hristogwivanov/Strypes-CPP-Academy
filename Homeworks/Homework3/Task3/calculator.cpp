#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

int main(int argc, char* argv[]){ 
    if (argc != 4) {
        cerr << "Error - You must enter exactly 3 arguments!\n";
        return 1;
    }

    char* inputNum1;
    char* inputNum2;

    double num1 = strtod(argv[1], &inputNum1);
    if (*inputNum1 != '\0'){
        cerr << "The first argument has to be a number" << endl;
        return 1;
    }

    double num2 = strtod(argv[3], &inputNum2);
    if (*inputNum2 != '\0'){
        cerr << "The third argument has to be a number" << endl;
        return 1;
    }

    char op = argv[2][0];
    if (argv[2][1] != '\0')
    {
        cerr << ("Ivalid operator!") << endl;
    }

    double result; 

    switch(op){
        case '+': 
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
        case 'x':
        case 'X':
            result = num1 * num2;
        case '/':
            if (num2 == 0) {
                cout << ("infinity") << endl;
                return 0;
            }
            result = num1 / num2; 
            break;
            default:
                cerr << "Invalid operator!" << endl;
                return 1;
    }

    cout << "Result = " << fixed << setprecision(2) << result << endl;
    return 0;
}