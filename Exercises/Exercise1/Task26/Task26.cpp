#include<iostream>
#include<string> 
#include<sstream>
#include<cmath>
#include<vector>

using namespace std; 

int getMonthNumber(const string& month){
    string m = month;
    for (char& c : m) {
        if (c >= 'A' && c <= 'Z'){
            c = c + ('a' - 'A');
        }
    }

    if (m == "яну") return 1;
    else if (m == "фев") return 2; 
    else if (m == "мар") return 3;
    else if (m == "апр") return 4;
    else if (m == "май") return 5;
    else if (m == "юни") return 6;
    else if (m == "юли") return 7;
    else if (m == "авг") return 8;
    else if (m == "сеп") return 9;
    else if (m == "окт") return 10;
    else if (m == "ное") return 11;
    else if (m == "дек") return 12;
    else {
        cout << "Невалиден месец: " << month << endl;
        return -1;}
}

vector<string> split(const string& s, char delimeter){
    vector<string> tokens;
    string token;
    istringstream tokenStream(s);
    while (getline(tokenStream, token, delimeter)) {
        tokens.push_back(token);
    }
    return tokens;
}

int main() {
    int day1, day2, year1, year2; 
    string month1_str, month2_str;
    string input_line;

    cout << "Моля въведете първата дата във формат dd.mmm.yyyy: ";
    getline(cin, input_line);
    vector<string> date_parts = split(input_line, '.');
    if (date_parts.size() !=3) {
        cout << "Грешка при преобразуването на първата дата." << endl;
        return 1;
    }
    try{
        day1 = stoi(date_parts[0]);
        month1_str = date_parts[1];
        year1 = stoi(date_parts[2]);
    } catch (...) {
        cout << "Грешка при преобразуването на първата дата." << endl;
        return 1;
    }

    int month1 = getMonthNumber(month1_str);
    if(month1 == -1) return 1;

    cout << "Моля въведете втората дата във формат dd.mmm.yyyy: ";
    getline(cin, input_line);
    date_parts = split(input_line, '.');
    if (date_parts.size() != 3) {
        cout << "Грешка при преобразуването на втората дата." << endl;
        return 1;
    }
    try{
        day2 = stoi(date_parts[0]);
        month2_str = date_parts[1];
        year2 = stoi(date_parts[2]);
    }catch(...){
        cout << "Грешка при преобразуването на втората дата." << endl;
        return 1;
    }
    int month2=getMonthNumber(month2_str);
    int timestamp1 = year1*365+month1*30+day1;
    int timestamp2 = year2*365+month2*30+day2;
    cout << "Разликата между двете дати е " << abs(timestamp1-timestamp2) << " дни." << endl;

    return 0;
}