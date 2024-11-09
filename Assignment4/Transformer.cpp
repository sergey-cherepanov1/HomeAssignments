/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment3
*/

#include "Transformer.h"

Transformer::Transformer(unsigned ammo, double fuel, bool form, Gun gun)
    : _ammo(ammo), _fuel(fuel), _form(form), _core(100), _gun(gun) {}

Transformer::Transformer(unsigned ammo) 
    : _ammo(ammo), _fuel(100), _form(true), _core(100), _gun("shotgun") {}

Transformer::Transformer(double fuel) 
    : _ammo(100), _fuel(fuel), _form(true), _core(100), _gun("shotgun") {}


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

unsigned Transformer::get_ammo() const {return _ammo;}
double Transformer::get_fuel() const {return _fuel;}
bool Transformer::get_form() const {return _form;}
unsigned Transformer::get_power() const {return _core.get_power();}
std::string Transformer::get_gun() const {return _gun.get_gun();}

void Transformer::change_gun(Gun new_gun) {_gun.change_gun(new_gun);}
void Transformer::reload(unsigned ammo) {_ammo = ammo;}
void Transformer::refuel(double fuel) {_fuel = fuel;}

std::ostream& operator<<(std::ostream& out, const Transformer &transformer)
{
    return out << "Ammo: " << transformer.get_ammo() << ", Fuel: " << transformer.get_fuel() << ", Form: " << (transformer.get_form() ? "Robot" : "Vehicle") << ", Power: " << transformer.get_power() << ", Gun: " << transformer.get_gun();
}

bool operator==(const Transformer& left, const Transformer& right) {
    return left.get_ammo() == right.get_ammo() &&
           left.get_fuel() == right.get_fuel() &&
           left.get_form() == right.get_form() &&
           left.get_power() == right.get_power() &&
           left.get_gun() == right.get_gun();
}

bool operator!=(const Transformer& left, const Transformer& right) {
    return !(left == right);
}

bool operator<(const Transformer& left, const Transformer& right) {
    if (left.get_ammo() != right.get_ammo())
        return left.get_ammo() < right.get_ammo();
    if (left.get_fuel() != right.get_fuel())
        return left.get_fuel() < right.get_fuel();
    if (left.get_form() != right.get_form())
        return left.get_form() < right.get_form();
    
    return left.get_gun() < right.get_gun();
}

bool operator>(const Transformer& left, const Transformer& right) {
    return right < left;
}

bool operator<=(const Transformer& left, const Transformer& right) {
    return !(left > right);
}

bool operator>=(const Transformer& left, const Transformer& right) {
    return !(left < right);
}


