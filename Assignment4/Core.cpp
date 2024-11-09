/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment3
*/

#include "Core.h"

Core::Core(unsigned power) : _power(power) {}
unsigned Core::get_power() const {return _power;}
void Core::change_power(int diff) {_power = diff;}

std::ostream& operator<<(std::ostream& out, const Core& core) {
    return out << "Core Power: " << core.get_power();
}

bool operator==(const Core& left, const Core& right) {
    return left.get_power() == right.get_power();
}

bool operator!=(const Core& left, const Core& right) {
    return !(left == right);
}

bool operator<(const Core& left, const Core& right) {
    return left.get_power() < right.get_power();
}

bool operator>(const Core& left, const Core& right) {
    return left.get_power() > right.get_power();
}

bool operator<=(const Core& left, const Core& right) {
    return !(left > right);
}

bool operator>=(const Core& left, const Core& right) {
    return !(left < right);
}
