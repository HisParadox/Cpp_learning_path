//This is my first Calculator project.

#include <iostream>
#include <cmath>

int main()
{
    char op;

    double num1, num2, result;

    std::cout << "**************Calculator***************\n";
    std::cout << "Enter either +, -, *, /, or ^ for exponentials:";

    std:: cin >> op;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch(op)
    {
        case '+':
        {
            result = num1 + num2; //Addition
            std::cout << "Result: " << result;
            break;
        }

        case '-':
        {
            result = num1 - num2; //Subtraction
            std::cout << "Result: " << result;
            break;

        }

        case '*':
        {
            result = num1 * num2; //Multiplication
            std::cout << "Result: " << result;
            break;
        }

        case '/':
        {
            result = num1 / num2; //Division
            std::cout << "Result: "<< result;
            break;
        }

        case '^':
        {
            result = pow(num1, num2); //Exponentiation
            std::cout << "Result: " <<result;
            break;
        }

        default:
        {
            std::cout << "Invalid Operator! Please enter a valid operator (+, -, *, /, ^). ";
            return 1; // Exit the program with an error code.
        }
    }

    return 0; // end of the program.
}