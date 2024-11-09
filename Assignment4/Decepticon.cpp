/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment3
*/

#include "Decepticon.h"

Decepticon::Decepticon(std::string evilPlanName, unsigned enemyCount) : _evilPlanName(evilPlanName), _enemyCount(enemyCount) {}

std::string Decepticon::get_evilPlanName() const {return _evilPlanName;}
unsigned Decepticon::get_enemyCount() const {return _enemyCount;}
void Decepticon::make_enemy() {_enemyCount++;}
void Decepticon::change_plan(std::string new_plan) {_evilPlanName = new_plan;}

std::ostream& operator<<(std::ostream& out, const Decepticon& decepticon) {
    return out << "Decepticon Evil Plan: " << decepticon.get_evilPlanName() << ", Enemies: " << decepticon.get_enemyCount();
}

bool operator==(const Decepticon& left, const Decepticon& right) {
    return left.get_evilPlanName() == right.get_evilPlanName() && 
           left.get_enemyCount() == right.get_enemyCount();
}

bool operator!=(const Decepticon& left, const Decepticon& right) {
    return !(left == right);
}

bool operator<(const Decepticon& left, const Decepticon& right) {
    if (left.get_evilPlanName() != right.get_evilPlanName()) {
        return left.get_enemyCount() < right.get_enemyCount();
    }
    return left.get_evilPlanName() < right.get_evilPlanName();
}

bool operator>(const Decepticon& left, const Decepticon& right) {
    return right < left;
}

bool operator<=(const Decepticon& left, const Decepticon& right) {
    return !(left > right);
}

bool operator>=(const Decepticon& left, const Decepticon& right) {
    return !(left < right);
}
