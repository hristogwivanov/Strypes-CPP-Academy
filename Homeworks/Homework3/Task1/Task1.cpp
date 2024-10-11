#include <iostream>
#include <stdint.h>
#include <limits>

int main(void)
{
    uint64_t attendance = 0;
    int option;
    while (1)
    {
        std::cout << "1. Set attendamce" << std::endl;
        std::cout << "2. Clear attendance" << std::endl;
        std::cout << "3. Attendance info " << std::endl;
        std::cout << "4. Change attendance" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cin >> option;

        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cerr << "Моля въведете число от 1 до 5!" << std::endl;
            continue;
        }
        if (option == 1)
        {
            // to do
        }
        else if (option == 2)
        {
        }
        else if (option == 3)
        {
        }
        else if (option == 4)
        {
        }
        else if (option == 5)
        {
            return 0;
        }
        else
        {
            std::cerr << "Моля въведете число от 1 до 5!" << std::endl;
        }
    }
}