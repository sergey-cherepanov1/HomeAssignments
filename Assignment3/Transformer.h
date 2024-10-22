#ifndef TRANSFORMER_h
#define TRANSFORMER_h

#include <iostream>
#include "Car.h"

class Transformer
{
public:
    Transformer(unsigned _ammo = 0, double _fuel = 0, unsigned _level = 0, bool _form = true, Car _car = Car());
    void transform();
    void fire();
    void drive(unsigned km);
    
    unsigned get_ammo();
    double get_fuel();
    unsigned get_level();
    bool get_form();
    Car get_car();
    
    void reload(unsigned ammo);
	void refuel(double fuel);
private:
	unsigned _ammo;
    double _fuel;
    unsigned _level;
    bool _form;
    Car _car;
};

#endif
