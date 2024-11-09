/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment4
*/

#include "Gun.h"

Gun::Gun(std::string type) : _type(type) {}
std::string Gun::get_gun() const
{
    return _type;
}
void Gun::change_gun(Gun new_gun)
{
    _type = new_gun.get_gun();
}

std::ostream& operator<<(std::ostream& out, const Gun& gun)
{
    return out << "Gun Type: " << gun.get_gun();
}

std::istream& operator>>(std::istream& in, Gun& gun)
{
    std::string type;
    std::cout << "Enter gun type: ";
    std::getline(in, type);
    gun = Gun(type);
    return in;
}

bool operator==(const Gun& left, const Gun& right)
{
    return left.get_gun() == right.get_gun();
}

bool operator!=(const Gun& left, const Gun& right)
{
    return !(left == right);
}

bool operator<(const Gun& left, const Gun& right)
{
    return left.get_gun() < right.get_gun();
}

bool operator>(const Gun& left, const Gun& right)
{
    return left.get_gun() > right.get_gun();
}

bool operator<=(const Gun& left, const Gun& right)
{
    return !(left > right);
}

bool operator>=(const Gun& left, const Gun& right)
{
    return !(left < right);
}
