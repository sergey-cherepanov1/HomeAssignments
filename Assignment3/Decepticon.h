#ifndef DECEPTICON_h
#define DECEPTICON_h

#include <string>
#include "Transformer.h"

class Decepticon : public Transformer
{
public:
	Decepticon(std::string evilPlanName, unsigned enemyCount = 0);
	bool get_evilPlanName();
	bool get_enemyCount();
	bool make_enemy();
	bool change_plan(std::string new_plan);
private:
	std::string _evilPlanName;	 
	unsigned _enemyCount;
};

#endif
