#ifndef DINOBOT_h
#define DINOBOT_h

#include "Transformer.h"

class Dinobot : public Transformer
{
public:
	Dinobot(std::string species, unsigned hunger = 100);
	bool get_species();
	bool get_hunger();
	bool eat();
	bool roar();
private:
	std::string _species;
	unsigned _hunger;
};

#endif
