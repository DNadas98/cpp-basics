#include <iostream>
#include <limits>
#include <cstdlib>
#include "model/Car.h"

using std::cout, std::endl, std::cin, std::string, std::system;

void clearScreen();
double getDouble();

int main() {
  clearScreen();
  string make, model;
  double maxSpeed;
  cout << "Enter oop_car make: ";
  cin >> make;
  cout << "Enter oop_car model: ";
  cin >> model;
  cout << "Enter oop_car max speed: ";
  maxSpeed = getDouble();
  getchar();

  Car car(make, model, maxSpeed);

  bool isRunning = true;

  while (isRunning) {
    clearScreen();
    cout << "Car: " << car.getMake() << " " << car.getModel() << endl;
    cout << "Max speed: " << car.getMaxSpeed() << endl;
    cout << "Current speed: " << car.getSpeed() << endl;
    cout << "1. Accelerate" << endl;
    cout << "2. Brake" << endl;
    cout << "3. Exit" << endl;
    int option = getDouble();

    switch (option) {
      case 1:
        car.accelerate();
        break;
      case 2:
        car.brake();
        break;
      case 3:
        isRunning = false;
        break;
      default:
        cout << "Invalid option" << endl;
    }
  }
  return 0;
}

void clearScreen() {
  cout << "\x1B[2J\x1B[H";
}

double getDouble(){
  double value;
  cin >> value;
  while (cin.fail()) {
    cin.clear(); // Clears error flags
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "Invalid input. Please enter a number." << endl;
    cin >> value;
  }
  return value;
}
