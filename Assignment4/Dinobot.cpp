/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment3
*/

#include "Dinobot.h"

Dinobot::Dinobot(std::string species, unsigned hunger)
    : _species(species), _hunger(hunger) {}

Dinobot::Dinobot(std::string species)
    : _species(species), _hunger(100) {}

Dinobot::Dinobot(unsigned hunger)
    : _species("T-Rex"), _hunger(hunger) {}

std::string Dinobot::get_species() const
{
    return _species;
}
unsigned Dinobot::get_hunger() const
{
    return _hunger;
}
void Dinobot::eat()
{
    _hunger++;
}
void Dinobot::roar()
{
    std::cout << "ROAARR!" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Dinobot& dinobot)
{
    return out << "Dinobot Species: " << dinobot.get_species() << ", Hunger: " << dinobot.get_hunger();
}

std::istream& operator>>(std::istream& in, Dinobot& dinobot)
{
    std::string species;
    unsigned hunger;
    std::cout << "Enter species: ";
    in >> species;
    std::cout << "Enter hunger level: ";
    in >> hunger;
    dinobot = Dinobot(species, hunger);
    return in;
}

bool operator==(const Dinobot& left, const Dinobot& right)
{
    return left.get_species() == right.get_species() &&
           left.get_hunger() == right.get_hunger();
}

bool operator!=(const Dinobot& left, const Dinobot& right)
{
    return !(left == right);
}

bool operator<(const Dinobot& left, const Dinobot& right)
{
    if (left.get_species() != right.get_species())
    {
        return left.get_species() < right.get_species();
    }
    return left.get_hunger() < right.get_hunger();
}

bool operator>(const Dinobot& left, const Dinobot& right)
{
    return right < left;
}

bool operator<=(const Dinobot& left, const Dinobot& right)
{
    return !(left > right);
}

bool operator>=(const Dinobot& left, const Dinobot& right)
{
    return !(left < right);
}
