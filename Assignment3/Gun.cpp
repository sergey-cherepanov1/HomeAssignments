#include "Gun.h"

Gun::Gun(std::string type) : _type(type) {}

std::string Gun::get_gun() {return _type;}

void Gun::change_gun(Gun new_gun) {_type = new_gun.get_gun();}
