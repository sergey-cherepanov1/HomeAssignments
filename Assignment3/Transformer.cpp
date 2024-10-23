/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment3
*/

#include "Transformer.h"

Transformer::Transformer(unsigned ammo, double fuel, bool form, Gun gun)
    : _ammo(ammo), _fuel(fuel), _form(form), _core(100), _gun(gun) {}

void Transformer::transform()
{
	_form = !_form;
}
void Transformer::fire()
{
		if (_ammo != 0) {
			_ammo--;
		} else {
			std::cout << "No ammo! Reload!" << std::endl;
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
            std::cout << "Not enough fuel! Refuel!\n";
        }
    }
    else
    {
        std::cout << "You need to transform to drive!\n";
    }
}

unsigned Transformer::get_ammo() {return _ammo;}
double Transformer::get_fuel() {return _fuel;}
bool Transformer::get_form() {return _form;}
unsigned Transformer::get_power() {return _core.get_power();}
std::string Transformer::get_gun() {return _gun.get_gun();}

void Transformer::change_gun(Gun new_gun) {_gun.change_gun(new_gun);}
void Transformer::reload(unsigned ammo) {_ammo = ammo;}
void Transformer::refuel(double fuel) {_fuel = fuel;}
