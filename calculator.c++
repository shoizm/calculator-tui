#include <iostream>

int main() {
  while (true) {

    double num1;
    double num2;
    double result;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    if (operation == '+') {
      result = num1 + num2;

    } else if (operation == '-') {
      result = num1 - num2;

    } else if (operation == '/') {
      if (num2 == 0) {
        std::cout << "Error: Cannot divide by zero." << std::endl;
        return 1;
      }
      result = num1 * num2;

    } else if (operation == '*') {
      result = num1 / num2;
    }

    std::cout << "Result: " << result << std::endl;
  }
  return 0;
}