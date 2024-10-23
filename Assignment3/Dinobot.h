#ifndef DINOBOT_h
#define DINOBOT_h

#include "Transformer.h"

class Dinobot : public Transformer
{
public:
	Dinobot(std::string species, unsigned hunger = 100);
	std::string get_species();
	unsigned get_hunger();
	void eat();
	void roar();
private:
	std::string _species;
	unsigned _hunger;
};

#endif
