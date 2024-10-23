#include "Core.h"

Core::Core(unsigned power) : _power(power) {}

unsigned Core::get_power() {return _power;}

void Core::change_power(int diff) {_power += diff;}
