/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment4
*/

#ifndef AUTOBOT_h
#define AUTOBOT_h

#include <string>
#include "Transformer.h"

class Autobot : public Transformer
{
public:
    Autobot(std::string teamName = "Autobots", unsigned allyCount = 0);
    Autobot(std::string teamName);
    Autobot(unsigned allyCount);

    std::string get_teamName() const;
    unsigned get_allyCount() const;
    void make_alliance();
    void change_team(std::string new_team);
private:
    std::string _teamName;
    unsigned _allyCount;
};

std::ostream& operator<<(std::ostream& out, const Autobot& autobot);
std::istream& operator>>(std::istream& in, Autobot& autobot);
bool operator==(const Autobot& left, const Autobot& right);
bool operator!=(const Autobot& left, const Autobot& right);
bool operator<(const Autobot& left, const Autobot& right);
bool operator>(const Autobot& left, const Autobot& right);
bool operator<=(const Autobot& left, const Autobot& right);
bool operator>=(const Autobot& left, const Autobot& right);

#endif
