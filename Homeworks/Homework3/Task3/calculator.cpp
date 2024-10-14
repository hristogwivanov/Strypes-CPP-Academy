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

}