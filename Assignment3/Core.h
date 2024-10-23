#ifndef CORE_h
#define CORE_h

class Core
{
public:
	Core(unsigned power);
	bool get_power();
	bool change_power(int power);
private:
	unsigned _power;
};

#endif
