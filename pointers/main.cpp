#include <iostream>

/**
 * pointer = variable that stores the memory address of another variable<br>
 * `&` address of operator = returns the memory address of a variable<br>
 * `*` dereference operator = returns the value of the variable located at the memory address<br>
 * `nullptr` = null pointer<br>
 * Dereferencing a null pointer will cause a segmentation fault - when a program tries to access memory that is unavailable<br>
 * `signal 11:SIGSEGV` = signal segmentation violation
 */
int main() {
  using std::cout, std::cin, std::endl, std::string;

  string hello = "Hello World!";
  string *pHello = &hello; // pointer to hello world string
  string **ppHello = &pHello; // pointer to pointer of hello world string
  cout << *ppHello << " - " << *pHello << endl;

  string array[] = {"Hello", "World", "!"};
  string *pArray = array;
  cout << pArray << " - " << *pArray << endl;

  int *pNull = nullptr; // null pointer

  cout << "Dereferencing a null pointer will cause a segmentation fault"<< endl;
  cout << &pNull << " - " << *pNull << endl;

  return 0;
}
