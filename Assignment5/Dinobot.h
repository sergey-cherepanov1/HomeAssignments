/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment5
*/

#ifndef DINOBOT_h
#define DINOBOT_h

#include "Transformer.h"

class Dinobot : public Transformer
{
public:
    Dinobot(std::string species, unsigned hunger = 100);
    Dinobot(std::string species);
    Dinobot(unsigned hunger);

    std::string get_species() const;
    unsigned get_hunger() const;
    void eat();
    void roar();
private:
    std::string _species;
    unsigned _hunger;
};

std::ostream& operator<<(std::ostream& out, const Dinobot& dinobot);
std::istream& operator>>(std::istream& in, Dinobot& dinobot);
bool operator==(const Dinobot& left, const Dinobot& right);
bool operator!=(const Dinobot& left, const Dinobot& right);
bool operator<(const Dinobot& left, const Dinobot& right);
bool operator>(const Dinobot& left, const Dinobot& right);
bool operator<=(const Dinobot& left, const Dinobot& right);
bool operator>=(const Dinobot& left, const Dinobot& right);

#endif
