#ifndef TRANSFORMER_h
#define TRANSFORMER_h

#include <iostream>
#include "Core.h"
#include "Gun.h"

class Transformer
{
public:
    Transformer(unsigned ammo = 0, double fuel = 0, unsigned level = 0, bool form = true, Gun gun = Gun("shotgun"));
    bool transform();
    bool fire();
    bool drive(unsigned km);
    
    bool get_ammo();
    bool get_fuel();
    bool get_level();
    bool get_form();
    bool get_power();
    bool get_gun();
    
    bool reload(unsigned ammo);
	bool refuel(double fuel);
private:
	unsigned _ammo;
    double _fuel;
    unsigned _level;
    bool _form;
    Core _core;
    Gun _gun;
};

#endif
