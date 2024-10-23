/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment3
*/

#ifndef AUTOBOT_h
#define AUTOBOT_h

#include <string>
#include "Transformer.h"

class Autobot : public Transformer
{
public:
	Autobot(std::string teamName = "Autobots", unsigned allyCount = 0);
	std::string get_teamName();
	unsigned get_allyCount();
	void make_alliance();
	void change_team(std::string new_team);
private:
	std::string _teamName;	 
	unsigned _allyCount;
};

#endif
