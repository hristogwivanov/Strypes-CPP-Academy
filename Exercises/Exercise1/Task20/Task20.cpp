#include<iostream>
#include<math.h>
using namespace std;
int main() {
    float a, b, c, avg; 
    cout << "Въведете 3 реални числа, разделени с интервал: ";
    cin >> a >> b >> c; 
    avg = (a+b+c)/3;
    cout << "Първото число е " << a << " и отклонението му от средното е " << fabs(a-avg)<<endl;
    cout << "Второто число е " << a << " и отклонението му от средното е " << fabs(b-avg)<<endl;
    cout << "Третото число е " << a << " и отклонението му от средното е " << fabs(c-avg)<<endl;
    return 0;
}