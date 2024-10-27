#include<iostream> 
using namespace std;

int factoriel(int &num,int &result){
    while (num > 0){
        result = num * result;
        num--;
        factoriel (num, result);
    }
    return result; 
}

int main(){
    int num, result = 1;
    cout << "Моля, въведете цяло число на което да бъде изчислен факториел: " << endl;
    cin >> num;
    if(num < 0) { cout << "Грешка: номерът трябва да бъде цяло положително число!" << endl;
        return 1;}
    result = factoriel(num, result);
    cout << result << endl;
}