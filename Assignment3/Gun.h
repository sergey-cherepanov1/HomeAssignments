#ifndef GUN_h
#define GUN_h

#include <string>

class Gun
{
public:
	Gun(std::string type);
	bool get_gun();
	bool change_gun(std::string new_gun);
private:
	std::string _type;
};

#endif
