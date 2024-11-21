/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment5
*/

#include "Decepticon.h"

Decepticon::Decepticon(std::string evilPlanName, unsigned enemyCount)
    : Transformer(), _evilPlanName(evilPlanName), _enemyCount(enemyCount) {}

Decepticon::Decepticon(std::string evilPlanName)
    : Transformer(), _evilPlanName(evilPlanName), _enemyCount(0) {}

Decepticon::Decepticon(unsigned enemyCount)
    : Transformer(), _evilPlanName("World Domination"), _enemyCount(enemyCount) {}

std::string Decepticon::get_evilPlanName() const
{
    return _evilPlanName;
}

void Decepticon::transform()
{
    std::cout << "transform Decepticon\n";
}

void Decepticon::fire()
{
    std::cout << "fire Decepticon\n";
}

void Decepticon::drive(unsigned km)
{
    std::cout << "drive Decepticon\n";
}

unsigned Decepticon::get_enemyCount() const
{
    return _enemyCount;
}
void Decepticon::make_enemy()
{
    _enemyCount++;
}
void Decepticon::change_plan(std::string new_plan)
{
    _evilPlanName = new_plan;
}

std::ostream& operator<<(std::ostream& out, const Decepticon& decepticon)
{
    return out << "Decepticon Evil Plan: " << decepticon.get_evilPlanName() << ", Enemies: " << decepticon.get_enemyCount();
}

std::istream& operator>>(std::istream& in, Decepticon& decepticon)
{
    std::string evil_plan_name;
    unsigned enemy_count;
    std::cout << "Enter evil plan name: ";
    std::getline(in, evil_plan_name);
    std::cout << "Enter number of enemies: ";
    in >> enemy_count;
    decepticon = Decepticon(evil_plan_name, enemy_count);
    return in;
}

bool operator==(const Decepticon& left, const Decepticon& right)
{
    return left.get_evilPlanName() == right.get_evilPlanName() &&
           left.get_enemyCount() == right.get_enemyCount();
}

bool operator!=(const Decepticon& left, const Decepticon& right)
{
    return !(left == right);
}

bool operator<(const Decepticon& left, const Decepticon& right)
{
    if (left.get_enemyCount() != right.get_enemyCount())
    {
        return left.get_enemyCount() < right.get_enemyCount();
    }
    return left.get_evilPlanName() < right.get_evilPlanName();
}

bool operator>(const Decepticon& left, const Decepticon& right)
{
    return right < left;
}

bool operator<=(const Decepticon& left, const Decepticon& right)
{
    return !(left > right);
}

bool operator>=(const Decepticon& left, const Decepticon& right)
{
    return !(left < right);
}
