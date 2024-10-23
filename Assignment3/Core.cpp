/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment3
*/

#include "Core.h"

Core::Core(unsigned power) : _power(power) {}

unsigned Core::get_power() {return _power;}
void Core::change_power(int diff) {_power = diff;}
