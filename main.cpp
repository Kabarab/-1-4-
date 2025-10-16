#include <iostream>
#include <cmath>
#include <limits>
#define _USE_MATH_DEFINES

int main() {
    double a;
    while (true)
    {
        std::cout << "enter a" << std::endl;
        if (!(std::cin >> a)) {
            std::cout << "incorrect value" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else if(std::cos(2 * a) == -1 || std::cos(4 * a) == -1)
        {
            std::system("cls");
            std::cout << "incorrect value" << std::endl;
        }
        else
        {
            break;
        }
    }
    std::cout << "z1 = " << std::sin(4*a)/(1+std::cos(4*a))*(std::cos(2*a)/(1+std::cos(2*a))) << std::endl;
    std::cout << "z2 = " << (std::cos(3.0/2*M_PI-a))/(std::sin(3.0/2*M_PI-a)) << std::endl;

    return 0;
}
