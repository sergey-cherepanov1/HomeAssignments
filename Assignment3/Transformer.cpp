#include "Transformer.h"

Transformer::Transformer(unsigned ammo, double fuel, unsigned level, bool form, Gun gun)
    : _ammo(ammo), _fuel(fuel), _level(level), _form(form), _core(100), _gun(gun) {}

void Transformer::transform()
{
    _form = !_form;
}

void Transformer::fire()
{
    if (_ammo != 0)
    {
        _ammo--;
    }
    else
    {
        std::cout << "You have no ammo! You need to reload!\n";    
    }
}

void Transformer::drive(unsigned km)
{
    if (_form)
    {
        double cons = km * 0.08;
        if (_fuel >= cons)
        {
            _fuel -= cons;
        }
        else
        {
            std::cout << "Not enough fuel to drive such distance!\nRefuel your car!\n";
        }
    }
    else
    {
        std::cout << "You need to transform to drive!\n";
    }
}

unsigned Transformer::get_ammo() {return _ammo;}
double Transformer::get_fuel() {return _fuel; }
unsigned Transformer::get_level() {return _level;}
bool Transformer::get_form() {return _form;}
unsigned Transformer::get_power() {return _core.get_power();}
std::string Transformer::get_gun() {return _gun.get_gun();}

void Transformer::reload(unsigned ammo) {_ammo = ammo;}
void Transformer::refuel(double fuel) {_fuel = fuel;}
