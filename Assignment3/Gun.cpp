#include "Gun.h"

Gun::Gun(std::string type) : _type(type) {}

bool Gun::get_gun() {return 1;}

bool Gun::change_gun(std::string new_gun) {return 1;}
