#include <iostream>


enum Months {
    january = 1, february
    , march, april, may, june, julay, august, september, october, november, december
};

int main()
{
    int month{};
    std::cout << "Enter current month" << std::endl;
    std::cin >> month;



    switch (month) {
    case january:
        std::cout << "Current month is January" << std::endl;
        break;
    case 2:
        std::cout << "Current month is February" << std::endl;
        break;
    case 3:
        std::cout << "Current month is March" << std::endl;
        break;
    case 4:
        std::cout << "Current month is April" << std::endl;
        break;
    case 5:
        std::cout << "Current month is May" << std::endl;
        break;
    case 6:
        std::cout << "Current month is June" << std::endl;
        break;
    case 7:
        std::cout << "Current month is Julay" << std::endl;
        break;
    case 8:
        std::cout << "Current month is August" << std::endl;
        break;
    case 9:
        std::cout << "Current month is September" << std::endl;
        break;
    case 10:
        std::cout << "Current month is October" << std::endl;
        break;
    case 11:
        std::cout << "Current month is November" << std::endl;
        break;
    case 12:
        std::cout << "Current month is December" << std::endl;
        break;

    default:
        std::cout << "Error!" << std::endl;
        break;


    }


}





























































































