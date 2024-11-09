/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment3
*/

#ifndef CORE_h
#define CORE_h

#include <iostream>

class Core
{
public:
	Core(unsigned power);
	unsigned get_power() const;
	void change_power(int power);
private:
	unsigned _power;
};

std::ostream& operator<<(std::ostream& out, const Core& core);
bool operator==(const Core& left, const Core& right);
bool operator!=(const Core& left, const Core& right);
bool operator<(const Core& left, const Core& right);
bool operator>(const Core& left, const Core& right);
bool operator<=(const Core& left, const Core& right);
bool operator>=(const Core& left, const Core& right);


#endif
