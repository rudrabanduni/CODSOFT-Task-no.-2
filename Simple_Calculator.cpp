#include <iostream>
int main()
{
    double num1, num2, result;
    char operation;

    std::cout << "Please enter two numbers: " << std::endl;
    std::cin >> num1 >> num2;

    std::cout << "Choose an operation (+, -, *, /): ";
    std::cin >> operation;

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        std::cout << "Result: " << num1 << " + " << num2 << " = " << result << std::endl;
        break;
    case '-':
        result = num1 - num2;
        std::cout << "Result: " << num1 << " - " << num2 << " = " << result << std::endl;
        break;
    case '*':
        result = num1 * num2;
        std::cout << "Result: " << num1 << " * " << num2 << " = " << result << std::endl;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            std::cout << "Result: " << num1 << " / " << num2 << " = " << result << std::endl;
        }
        else
        {
            std::cout << "Error: Division by zero is not allowed!" << std::endl;
        }
        break;
    default:
        std::cout << "Invalid operation! Please enter one of +, -, *, /." << std::endl;
    }
    return 0;
}
