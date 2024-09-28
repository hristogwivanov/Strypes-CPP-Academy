#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {
    float weight;
    float height;
    float bmi;
    float trefethenbmi;
    cout << "Enter your weight in kgs: ";
    cin >> weight;
    cout << "Enter your height in meters: ";
    cin >> height;
    bmi = weight/pow(height, 2);
    cout << fixed << setprecision(2);
    cout << "The BMI according the classical formula is: " << bmi << endl;
    trefethenbmi = 1.3*(weight/pow(height, 2.5));
    cout << "The BMI according the Trefethen formula is: " << trefethenbmi << endl;
    return 0;
}