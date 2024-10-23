#ifndef CAR_h
#define CAR_h

#include <string>

class Car
{
public:
	Car(std::string type);
	std::string get_car();
	void change_car(std::string new_car);
private:
	std::string _type;
};

#endif
