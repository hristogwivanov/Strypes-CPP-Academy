#include<iostream>
#include<cmath>
#include<iomanip>
#include<limits>

using namespace std;

int circle(double radius, double* perimeter, double* area){
    if (radius < 0)   
    return -1;

    *perimeter = 2 * M_PI * radius;
    *area = M_PI * radius * radius; 

    return 0;
}

int main(){
    double radius;
    while(1){
        cin >> radius;

        if (cin.eof())
        break;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cerr << "Invalid input data" << endl;
            continue;
        }

        double perimeter, area;
        int result = circle(radius, &perimeter, &area);

        if (result == 0)
        {
            cout << fixed << setprecision(2);
            cout << "P = " << perimeter << ", S = " << area << endl;
        }
        else
        {
            cerr << "Invalid input data" << endl;
        }
    };
    
    return 0;
}