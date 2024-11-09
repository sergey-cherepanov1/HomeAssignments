/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment4
*/

#ifndef DECEPTICON_h
#define DECEPTICON_h

#include <string>
#include "Transformer.h"

class Decepticon : public Transformer
{
public:
    Decepticon(std::string evilPlanName, unsigned enemyCount = 0);
    Decepticon(std::string evilPlanName);
    Decepticon(unsigned enemyCount);

    std::string get_evilPlanName() const;
    unsigned get_enemyCount() const;
    void make_enemy();
    void change_plan(std::string new_plan);
private:
    std::string _evilPlanName;
    unsigned _enemyCount;
};

std::ostream& operator<<(std::ostream& out, const Decepticon& decepticon);
std::istream& operator>>(std::istream& in, Decepticon& decepticon);
bool operator==(const Decepticon& left, const Decepticon& right);
bool operator!=(const Decepticon& left, const Decepticon& right);
bool operator<(const Decepticon& left, const Decepticon& right);
bool operator>(const Decepticon& left, const Decepticon& right);
bool operator<=(const Decepticon& left, const Decepticon& right);
bool operator>=(const Decepticon& left, const Decepticon& right);

#endif
