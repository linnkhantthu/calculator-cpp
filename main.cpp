#include <iostream>
#include <math.h>

enum Commands
{
    add,
    sub,
    mul,
    divi,
    modulus,
    squrt,
    invalid
};

Commands hashit(std::string const inString);
double twoNumberOperations(Commands op);
double squareRoot();

int main()
{
    std::string op;
    std::string commands[6] = {"add", "sub", "mul", "divi", "modulus", "squrt"};
    std::string availableCommands;
    for (int i = 0; i < 6; i++)
    {
        if (i == 5)
        {
            availableCommands += commands[i];
        }
        else
        {
            availableCommands += commands[i] + ", ";
        }
    }

    std::cout << "Terminal Calculator by Linn";
    std::cout << "Available commands (" << availableCommands << "): ";
    std::cin >> op;
    switch (hashit(op))
    {
    case add:
        std::cout << twoNumberOperations(hashit(op));
        break;
    case sub:
        std::cout << twoNumberOperations(hashit(op));
        break;
    case mul:
        std::cout << twoNumberOperations(hashit(op));
        break;
    case divi:
        std::cout << twoNumberOperations(hashit(op));
        break;
    case modulus:
        std::cout << twoNumberOperations(hashit(op));
        break;
    case squrt:
        std::cout << squareRoot();
        break;
    default:
        std::cout << "Invalid Operation\n";
        break;
    }
    return 0;
}

double twoNumberOperations(Commands op)
{
    double num_1, num_2;

    std::cout << "Enter first number: ";
    std::cin >> num_1;

    std::cout << "Enter second number: ";
    std::cin >> num_2;

    double result;
    switch (op)
    {
    case add:
        result = num_1 + num_2;
        break;
    case sub:
        result = num_1 - num_2;
        break;
    case mul:
        result = num_1 * num_2;
        break;
    case divi:
        result = num_1 / num_2;
        break;
    case modulus:
        result = fmod(num_1, num_2);
        break;

    default:
        result = 0.0;
        break;
    }
    return result;
}
Commands hashit(std::string const inString)
{
    if (inString == "add")
    {
        return add;
    }
    else if (inString == "sub")
    {
        return sub;
    }
    else if (inString == "mul")
    {
        return mul;
    }
    else if (inString == "divi")
    {
        return divi;
    }
    else if (inString == "modulus")
    {
        return modulus;
    }
    else if (inString == "squrt")
    {
        return squrt;
    }
    else
    {
        return invalid;
    }
}

double squareRoot()
{
    double x;
    std::cout << "Enter Number: ";
    std::cin >> x;
    return sqrt(x);
}