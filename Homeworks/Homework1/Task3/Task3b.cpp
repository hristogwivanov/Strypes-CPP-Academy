#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    float r;
    float h; 
    float l;

    cout << "Даден е варел с формата на прав кръгов цилиндър с радиус на основата R метра и височина L метра. Варелът е пълен донякъде с вода." << endl;
    cout << "Варелът е легнал на хоризонтална повърхност и е пълен с вода до височина H метра." << endl;
    cout << "Въведете от клавиатурата радиуса R, височината H и нивото на водата L за да получите обема на водата в кубически метри." << endl;

    do {
        cout << "Въведете радиуса R: ";
        cin >> r;
        if (r <= 0) {
            cout << "Грешка: Радиусът трябва да бъде положителен. Опитайте отново." << endl;
        }
    } while (r <= 0);

    do {
        cout << "Въведете височината на водата H: ";
        cin >> h;
        if (h < 0) {
            cout << "Грешка: Височината на водата не може да бъде отрицателна. Опитайте отново." << endl;
        } else if (h>2*r) {
            cout << "Грешка: Височината на водата не може да бъде по-голяма от диаметъра на варела. Опитайте отново." << endl;
        }
    } while ((h < 0) || (h>2*r));

        do {
        cout << "Въведете височината(или дължината тъй като е легнал) на варела L: ";
        cin >> l;
        if (l < 0) {
            cout << "Грешка: Височината на варела не може да бъде отрицателна. Опитайте отново." << endl;
        }
    } while (l < 0);

    float theta = acos((r - h)/r);
    float segmentArea = r * r * theta - (r-h) * sqrt(2*r*h-h*h);
    float volume = l * segmentArea;

    cout << fixed << setprecision(3);
    cout << "Обема на водата в кубически метри е " << volume << " кубически метра." << endl;

    return 0;
}
