#include <iostream>

int main()
{
    double temp;
    char unit;

    std::cout << "***********Temperature Conversion***********\n";

    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit do you need to convert to (F or C)?";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f')
    {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;
        temp = (temp * 9/5) + 32; //formula to convert celsius to fahrenheit

        std::cout << "Temp in Fahrenheit: " << temp << "F\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter the temperature in fahrenheit:";
        std::cin >> temp;
        temp = (temp - 32) * 5/9; //formula to convert fahrenheit to celsius
        std::cout << "Temp in Celsius: " << temp << "C\n";
    }
    else
    {
        std::cout << "Invalid unit! Please enter either 'F' for Fahrenheit or 'C' for Celsius.\n";
    }

    return 0;
}