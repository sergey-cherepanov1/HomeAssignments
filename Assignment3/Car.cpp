#include "Car.h"

Car::Car(std::string _type, std::string _colour) : _type(_type), _colour(_colour) {}

std::string Car::get_type() {return _type;}
std::string Car::get_colour() {return _colour;}

void Car::change_car(std::string new_car) {_type = new_car;}
void Car::change_colour(std::string new_colour) {_colour = new_colour;}
