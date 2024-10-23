#ifndef DECEPTICON_h
#define DECEPTICON_h

#include <string>
#include "Transformer.h"

class Decepticon : public Transformer
{
public:
	Decepticon(std::string evilPlanName, unsigned enemyCount = 0);
	std::string get_evilPlanName();
	unsigned get_enemyCount();
	void make_enemy();
	void change_plan(std::string new_plan);
private:
	std::string _evilPlanName;	 
	unsigned _enemyCount;
};

#endif
