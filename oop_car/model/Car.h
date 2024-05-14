#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
    const std::string make;
    const std::string model;
    const double maxSpeed;
    double speed;

public:
    Car(const std::string &make, const std::string &model, double maxSpeed);

    const std::string &getMake() const;
    const std::string &getModel() const;
    double getSpeed() const;
    double getMaxSpeed() const;

    void accelerate();
    void brake();
};

#endif // CAR_H
