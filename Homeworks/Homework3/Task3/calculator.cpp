#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

int main(int argc, char* argv[]){ 
    if (argc != 4) {
        cerr << "Грешка - броят на аргументите тярбва да е точно 3!\n";
        return 1;
    }

    char* inputNum1;
    char* inputNum2;

    double num1 = strtod(argv[1], &inputNum1);
    if (*inputNum1 != '\0'){
        cerr << "Първият аргумент трябва да бъде цисло" << endl;
        return 1;
    }

    double num2 = strtod(argv[3], &inputNum2);
    if (*inputNum2 != '\0'){
        cerr << "Вторият аргумент трябва да бъде число" << endl;
        return 1;
    }

}