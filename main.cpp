#include <iostream>
#include <math.h>

enum Commands
{
    add,
    sub,
    mul,
    div,
    modulus,
    invalid
};
Commands hashit(std::string const &inString);

int main()
{
    std::string op;
    std::string commands[5] = {"add", "sub", "mul", "div", "modulus"};
    std::cout << "Terminal Calculator by Linn";
    std::cout << "Available commands: " << commands << ": ";
    std::cin >> op;
    switch (hashit(op))
    {
    case add:
        /* code */
        break;

    default:
        break;
    }
    return 0;
}

double twoNumberOperations(Commands op, double num_1, double num_2)
{

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
    case div:
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
Commands hashit(std::string const &inString)
{
    if (inString == "add")
        return add;
    else if (inString == "sub")
        return sub;
    else if (inString == "mul")
        return sub;
    else if (inString == "div")
        return sub;
    else if (inString == "modulus")
        return sub;
    else
        return invalid;
}