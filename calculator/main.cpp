#include <iostream>

int main() {
  char op;
  double num1, num2;
  double result;

  std::cout << "*** Calculator ***" << std::endl;
  std::cout << "Enter operator: ";
  std::cin >> op;

  std::cout << "Enter first number: ";
  std::cin >> num1;

  std::cout << "Enter second number: ";
  std::cin >> num2;

  switch (op) {
    case '+':
      result = num1 + num2;
      std::cout << "Result: " << result << std::endl;
      break;
    case '-':
      result = num1 - num2;
      std::cout << "Result: " << result << std::endl;
      break;
    case '*':
      result = num1 * num2;
      std::cout << "Result: " << result << std::endl;
      break;
    case '/':
      result = num1 / num2;
      std::cout << "Result: " << result << std::endl;
      break;
    default:
      std::cout << "Invalid operator, please enter either +, -, *, or /" << std::endl;
  }
  std::cout << "******************" << std::endl;
  return 0;
}
