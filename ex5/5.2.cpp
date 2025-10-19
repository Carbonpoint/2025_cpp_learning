#include <iostream>
#include <stdexcept>

int main() {
    char operation;
    int operand1, operand2;
    int result;

    // Read the arithmetic operation
    std::cout << "operator (+, -, *, /, %): ";
    std::cin >> operation;

    // Read the operands
    std::cout << "operands: ";
    std::cin >> operand1 >> operand2;

    // Perform the desired arithmetic operation
    switch (operation) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            if (operand2 == 0) {
                std::cerr << "Error: Division by zero!" << std::endl;
                return 1; // Exit with error code
            }
            result = operand1 / operand2;
            break;
        case '%':
            if (operand2 == 0) {
                std::cerr << "Error: Division by zero!" << std::endl;
                return 1; // Exit with error code
            }
            result = operand1 % operand2;
            break;
        default:
            std::cerr << "Error: Invalid operator!" << std::endl;
            return 1; // Exit with error code
    }

    // Output the result
    std::cout << "result: " << result << std::endl;

    return 0; // Successful execution
}

