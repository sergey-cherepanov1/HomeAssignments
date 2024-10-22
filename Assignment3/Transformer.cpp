#include "Transformer.h"

Transformer::Transformer(unsigned _ammo, double _fuel, unsigned _level, bool _form, Car _car)
    : _ammo(_ammo), _fuel(_fuel), _level(_level), _form(_form), _car(_car) {}

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
Car Transformer::get_car() {return _car;}

void Transformer::reload(unsigned ammo) {_ammo = ammo;}
void Transformer::refuel(double fuel) {_fuel = fuel;}
