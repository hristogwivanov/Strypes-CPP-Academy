#include <iostream>
#include <string>
#include <sstream>
#include <bitset>
#include <stdexcept>

using namespace std;

void convertBinary(const string &numStr)
{
    int num;
    try
    {
        num = stoi(numStr, nullptr, 2); 
    }
    catch (const invalid_argument &)
    {
        cout << "Невалиден двоичен номер.\n";
        return;
    }
    catch (const out_of_range &)
    {
        cout << "Номерът е извън допустимия диапазон.\n";
        return;
    }

    cout << "Десетично: " << num << endl;
    cout << "Осмично: " << std::oct << num << std::dec << endl;
    cout << "Шестнадесетично: " << std::hex << num << std::dec << endl;
}

void convertOctal(const string &numStr)
{
    int num;
    try
    {
        num = stoi(numStr, nullptr, 8); 
    }
    catch (const invalid_argument &)
    {
        cout << "Невалиден осмичен номер.\n";
        return;
    }
    catch (const out_of_range &)
    {
        cout << "Номерът е извън допустимия диапазон.\n";
        return;
    }

    cout << "Десетично: " << num << endl;
    cout << "Двоично: " << std::bitset<32>(num) << endl;
    cout << "Шестнадесетично: " << std::hex << num << std::dec << endl;
}

void convertDecimal(const string &numStr)
{
    int num;
    try
    {
        num = stoi(numStr);
    }
    catch (const invalid_argument &)
    {
        cout << "Невалиден десетичен номер.\n";
        return;
    }
    catch (const out_of_range &)
    {
        cout << "Номерът е извън допустимия диапазон.\n";
        return;
    }

    cout << "Двоично: " << std::bitset<32>(num) << endl;
    cout << "Осмично: " << std::oct << num << std::dec << endl;
    cout << "Шестнадесетично: " << std::hex << num << std::dec << endl;
}

void convertHex(const string &numStr)
{
    int num;
    try
    {
        num = stoi(numStr, nullptr, 16); // Parse numStr as base 16
    }
    catch (const invalid_argument &)
    {
        cout << "Невалиден шестнадесетичен номер.\n";
        return;
    }
    catch (const out_of_range &)
    {
        cout << "Номерът е извън допустимия диапазон.\n";
        return;
    }

    cout << "Десетично: " << num << endl;
    cout << "Двоично: " << std::bitset<32>(num) << endl;
    cout << "Осмично: " << std::oct << num << std::dec << endl;
}

int main()
{
    int choice;
    bool valid = false;

    while (!valid)
    {
        cout << "Моля въведете в каква бройна система е входното число (2, 8, 10 или 16): " << endl;
        string input;
        getline(cin, input);
        stringstream ss(input);

        if (ss >> choice)
        {
            if (ss.eof())
            {
                if (choice == 2 || choice == 8 || choice == 10 || choice == 16)
                {
                    valid = true;
                }
                else
                {
                    cout << "Невалиден номер. Моля въведете 2, 8, 10 или 16. \n";
                }
            }
            else
            {
                cout << "Невалиден вход. Моля използвайте числови стойности!\n";
            }
        }
        else
        {
            cout << "Невалиден вход. Моля използвайте числови стойности!\n";
        }
    }

    string numStr;

    cout << "Моля въведете номер който да бъде конвертиран:";
    getline(cin, numStr);

    switch (choice)
    {
    case 2:
        convertBinary(numStr);
        break;
    case 8:
        convertOctal(numStr);
        break;
    case 10:
        convertDecimal(numStr);
        break;
    case 16:
        convertHex(numStr);
        break;
    default:
        cout << "Невалиден избор.\n";
        break;
    }

    return 0;
}
