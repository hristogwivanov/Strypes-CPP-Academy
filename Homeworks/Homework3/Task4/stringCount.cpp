#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
        if (argc == 1)
    {
        cerr << "Please enter a quoted expression or a single string/number as an argument!" << endl;
        return 1;
    }
    if (argc != 2)
    {
        cerr << "Please enter only one string/number or a quoted expression as an argument!" << endl;
        return 1;
    }

    string searchString = argv[1];
    string inputString; 
    int count = 1;

    while (getline(cin, inputString)){
        if (inputString == searchString) count++;
    }

    cout << "Count = " << count << endl;
    return 0;
}