#include "./Car.h"
#include <iostream>

using std::cout,std::endl, std::string;

Car::Car(const string &make, const string &model, double maxSpeed)
  : make(make), model(model), maxSpeed(maxSpeed), speed(0) {}

const string &Car::getMake() const {
  return make;
}

const string &Car::getModel() const {
  return model;
}

double Car::getSpeed() const {
  return speed;
}

double Car::getMaxSpeed() const {
  return maxSpeed;
}

void Car::accelerate() {
  if (speed <= maxSpeed) {
    cout << "Accelerating..." << endl;
    if (speed + 5 > maxSpeed) {
      speed = maxSpeed;
    } else {
      speed += 5;
    }
  }
}

void Car::brake() {
  if (speed > 0) {
    cout << "Braking..." << endl;
    if (speed - 5 < 0) {
      speed = 0;
    } else {
      speed -= 5;
    }
  }
}
