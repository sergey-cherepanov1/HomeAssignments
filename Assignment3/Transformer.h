#ifndef TRANSFORMER_h
#define TRANSFORMER_h

#include <iostream>
#include "Core.h"
#include "Gun.h"

class Transformer
{
public:
    Transformer(unsigned ammo = 0, double fuel = 0, bool form = true, Gun gun = Gun("shotgun"));
    void transform();
    void fire();
    void drive(unsigned km);
    
    unsigned get_ammo();
    double get_fuel();
    bool get_form();
    unsigned get_power();
    std::string get_gun();
    
    void change_gun(Gun new_gun);
    void reload(unsigned ammo);
	void refuel(double fuel);
private:
	unsigned _ammo;
    double _fuel;
    bool _form;
    Core _core;
    Gun _gun;
};

#endif
