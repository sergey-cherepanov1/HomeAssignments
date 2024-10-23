/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment3
*/

#ifndef CORE_h
#define CORE_h

class Core
{
public:
	Core(unsigned power);
	unsigned get_power();
	void change_power(int power);
private:
	unsigned _power;
};

#endif
