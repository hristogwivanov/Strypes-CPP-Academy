#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    int choice;
    cout << "Моля въведете в каква бройна система е входното число (2, 8, 10 или 16): ";

    do
    {
        bool errorflag = 0;

        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Невалиден вход. Моля въведете число (2, 8, 10 или 16): ";
            errorflag = 1;
            continue;
        }
        
        if ((choice == 2 || choice == 8 || choice == 10 || choice == 16) && errorflag == 0)
        {
            break;
        }
        else if (errorflag == 0)
            cout << "Невалиден избор. Моля опитайте отново (2, 8, 10 или 16): ";
    } while (choice != 2 && choice != 8 && choice != 10 && choice != 16);
}