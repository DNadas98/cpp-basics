#include <iostream>

/**
 * Dynamic memory is memory that is allocated at runtime.<br>
 * `new` operator allocates memory at runtime in the heap rather than the stack.<br>
 * `delete` operator deallocates memory allocated at runtime.<br>
 * Memory allocated at runtime is not deallocated automatically,
 * memory leak means memory is not deallocated and kept in the heap.<br>
 */
int main() {
  int *pNumber = NULL;
  pNumber = new int;
  *pNumber = 100;
  std::cout << "address: " << pNumber << std::endl;
  std::cout << "value: " << *pNumber << std::endl;
  delete pNumber; // deallocate memory (avoid memory leak)

  int *pNumbers = NULL;
  int size;
  std::cout << "Enter the size of the array: ";
  std::cin >> size;

  pNumbers = new int[size];
  for (int i = 0; i < size; i++) {
    std::cout << "Enter number " << i + 1 << ": ";
    std::cin >> pNumbers[i];
  }
  for (int i = 0; i < size; ++i) {
    std::cout << "Number " << i + 1 << ": " << pNumbers[i] << std::endl;
  }
  delete[] pNumbers; //deallocate memory for array

  return 0;
}
