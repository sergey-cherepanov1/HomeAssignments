#ifndef CAR_h
#define CAR_h

#include <string>

class Car
{
public:
	Car(std::string _type = "truck", std::string _colour = "blue");
	std::string get_type();
	std::string get_colour();
	void change_car(std::string new_car);
	void change_colour(std::string new_colour);
private:
	std::string _type;
	std::string _colour;
};

#endif
