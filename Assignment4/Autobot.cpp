/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment3
*/

#include "Autobot.h"

Autobot::Autobot(std::string teamName, unsigned allyCount) : Transformer(), _teamName(teamName), _allyCount(allyCount) {}

Autobot::Autobot(std::string teamName)
    : Transformer(), _teamName(teamName), _allyCount(0) {}

Autobot::Autobot(unsigned allyCount)
    : Transformer(), _teamName("Autobots"), _allyCount(allyCount) {}


std::string Autobot::get_teamName() const
{
    return _teamName;
}
unsigned Autobot::get_allyCount() const
{
    return _allyCount;
}
void Autobot::make_alliance()
{
    _allyCount++;
}
void Autobot::change_team(std::string new_team)
{
    _teamName = new_team;
}

std::ostream& operator<<(std::ostream& out, const Autobot& autobot)
{
    return out << "Autobot Team: " << autobot.get_teamName() << ", Allies: " << autobot.get_allyCount();
}

std::istream& operator>>(std::istream& in, Autobot& autobot)
{
    std::string team_name;
    unsigned ally_count;
    std::cout << "Enter team name: ";
    std::getline(in, team_name);
    std::cout << "Enter number of allies: ";
    in >> ally_count;
    autobot = Autobot(team_name, ally_count);
    return in;
}

bool operator==(const Autobot& left, const Autobot& right)
{
    return left.get_teamName() == right.get_teamName() && left.get_allyCount() == right.get_allyCount();
}

bool operator!=(const Autobot& left, const Autobot& right)
{
    return !(left == right);
}

bool operator<(const Autobot& left, const Autobot& right)
{
    if (left.get_allyCount() != right.get_allyCount())
    {
        return left.get_allyCount() < right.get_allyCount();
    }
    return left.get_teamName() < right.get_teamName();
}

bool operator>(const Autobot& left, const Autobot& right)
{
    return right < left;
}

bool operator<=(const Autobot& left, const Autobot& right)
{
    return !(left > right);
}

bool operator>=(const Autobot& left, const Autobot& right)
{
    return !(left < right);
}
