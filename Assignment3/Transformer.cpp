#include "Transformer.h"

Transformer::Transformer(unsigned ammo, double fuel, unsigned level, bool form, Gun gun)
    : _ammo(ammo), _fuel(fuel), _level(level), _form(form), _core(100), _gun(gun) {}

bool Transformer::transform() {return 1;}
bool Transformer::fire() {return 1;}
bool Transformer::drive(unsigned km) {return 1;}

bool Transformer::get_ammo() {return 1;}
bool Transformer::get_fuel() {return 1;}
bool Transformer::get_level() {return 1;}
bool Transformer::get_form() {return 1;}
bool Transformer::get_power() {return 1;}
bool Transformer::get_gun() {return 1;}

bool Transformer::reload(unsigned ammo) {return 1;}
bool Transformer::refuel(double fuel) {return 1;}
