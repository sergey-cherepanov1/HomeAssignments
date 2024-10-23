#include "Car.h"

Car::Car(std::string type) : _type(type) {}

std::string Car::get_car() {return _type;}

void Car::change_car(std::string new_car) {_type = new_car;}
