/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment3
*/

#ifndef GUN_h
#define GUN_h

#include <iostream>
#include <string>

class Gun
{
public:
    Gun(std::string type);
    std::string get_gun() const;
    void change_gun(Gun new_gun);
private:
    std::string _type;
};

std::ostream& operator<<(std::ostream& out, const Gun& gun);
std::istream& operator>>(std::istream& in, Gun& gun);
bool operator==(const Gun& left, const Gun& right);
bool operator!=(const Gun& left, const Gun& right);
bool operator<(const Gun& left, const Gun& right);
bool operator>(const Gun& left, const Gun& right);
bool operator<=(const Gun& left, const Gun& right);
bool operator>=(const Gun& left, const Gun& right);

#endif
