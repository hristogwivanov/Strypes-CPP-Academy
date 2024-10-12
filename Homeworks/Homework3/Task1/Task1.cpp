#include <iostream>
#include <stdint.h>
#include <limits>

void pressEnterToContinue(){
    std::cout << "Press Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}

int main(void)
{
    uint64_t attendance = 0;
    int option;
    while (1)
    {
        std::cout << "1. Set attendance" << std::endl;
        std::cout << "2. Clear attendance" << std::endl;
        std::cout << "3. Attendance info " << std::endl;
        std::cout << "4. Change attendance" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cin >> option;

        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cerr << "Please type a number between 1 and 5!" << std::endl;
            continue;
        }
        if (option == 1)
        {
            std::cout << "Enter student number (1-64) to set attendance: ";
            int student_number;
            std::cin >> student_number;

            if(std::cin.fail() || student_number < 1 || student_number > 64) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cerr << "Invalid student number! Please enter a number between 1 and 64.\n";
                pressEnterToContinue();
            } else {
                attendance |= (uint64_t(1) << (student_number -1));
                std::cout << "Attendance set for student " << student_number << ".\n";
            }
        }
        else if (option == 2)
        {
            std::cout << "Enter student number (1-64) to clear attendance: ";
            int student_number;
            std::cin >> student_number;

            if(std::cin.fail() || student_number <1 || student_number > 64) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cerr << "Invalid student number! Please enter a number between 1 and 64.\n";
                pressEnterToContinue();
            } else {
                attendance &= ~(uint64_t(1) << (student_number -1));
                std::cout << "Attendance cleared for student " << student_number << ".\n";
            }
        }
        else if (option == 3)
        {
            std::cout << "1. Show present students" << std::endl;
            std::cout << "2. Show absent students" << std::endl;
            std::cout <<"Please select an option: ";
            int sub_option;
            std::cin >> sub_option;

            if(std::cin.fail() || (sub_option != 1 && sub_option != 2)) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cerr << "Invalid option! Please enter 1 or 2.\n";
            }else if (sub_option == 1) {
                if(attendance){
                    std::cout << "Present students: ";
                    for (int i = 1; i <= 64; ++i){
                        if (attendance & (uint64_t(1) << (i-1))){
                            std::cout << i << " ";
                        }
                    }
                    std::cout << std::endl;
                    pressEnterToContinue();
                } else {
                    std::cout << "No students are present. \n";
                    pressEnterToContinue();
                }
            } else if (sub_option == 2) {
                if(~attendance){
                    std::cout << "Absent students: ";
                    for (int i = 1; i <= 64; ++i){
                        if (!(attendance & (uint64_t(1) << (i-1)))){
                            std::cout << i << " ";
                        }
                    }
                    std::cout << std::endl;
                    pressEnterToContinue();
                }
                else {
                    std::cout << "No students are absent. \n";
                    pressEnterToContinue();
                }
            }
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
            std::cerr << "Please type a number between 1 and 5!" << std::endl;
        }
    }
}