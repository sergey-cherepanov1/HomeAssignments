#ifndef GUN_h
#define GUN_h

#include <string>

class Gun
{
public:
	Gun(std::string type);
	std::string get_gun();
	void change_gun(Gun new_gun);
private:
	std::string _type;
};

#endif
