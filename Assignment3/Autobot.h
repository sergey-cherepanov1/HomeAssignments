#ifndef AUTOBOT_h
#define AUTOBOT_h

#include <string>
#include "Transformer.h"

class Autobot : public Transformer
{
public:
	Autobot(std::string teamName, unsigned allyCount = 0);
	bool get_teamName();
	bool get_allyCount();
	bool make_alliance();
	bool change_team(std::string new_team);
private:
	std::string _teamName;	 
	unsigned _allyCount;
};

#endif
