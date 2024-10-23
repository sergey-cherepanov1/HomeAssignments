#include "Core.h"

Core::Core(unsigned power) : _power(power) {}

bool Core::get_power() {return 1;}
bool Core::change_power(int diff) {return 1;}
