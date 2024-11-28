#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main() {
    string input;
    int hours, minutes, totalMinutes;
    cout << "Въведете брой часове във формат hh:mm : " << endl;
    cin >> input; 

    stringstream ss(input);

    char delimiter; 
    ss >> hours >> delimiter >> minutes;
    
    totalMinutes = hours*60 + minutes;
    
    cout << "Общ брой минути: " << totalMinutes << endl;


    return 0;
}