#include <iostream> 
#include <cmath> 
using namespace std; 
int main () {
    float a, b, area, perimeter; 
    cout << "Пресмятане на площта и периметъра на правоъгълник" << endl; 
    cout << "Въведете първата страна на правоъгълника: ";
    cin >> a; 
    cout << "Въведете втората страна на правоъгълника: ";
    cin >> b; 
    area = a*b/2; 
    perimeter = (a + b) + sqrt(a*a + b*b);
    cout << "Площта на правоъгълника е: " << area << endl;
    cout << "Периметъра на правоъгълника е: " << perimeter << endl; 
    return 0;
}