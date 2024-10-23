#include "Autobot.h"

Autobot::Autobot(std::string teamName, unsigned allyCount) : _teamName(teamName), _allyCount(allyCount) {}

bool Autobot::get_teamName() {return 1;}
bool Autobot::get_allyCount() {return 1;}
bool Autobot::make_alliance() {return 1;}
bool Autobot::change_team(std::string new_team) {return 1;}
