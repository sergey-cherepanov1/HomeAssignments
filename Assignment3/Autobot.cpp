#include "Autobot.h"

Autobot::Autobot(std::string teamName, unsigned allyCount) : _teamName(teamName), _allyCount(allyCount) {}

std::string Autobot::get_teamName() {return _teamName;}
unsigned Autobot::get_allyCount() {return _allyCount;}
void Autobot::make_alliance() {_allyCount++;}
void Autobot::change_team(std::string new_team) {_teamName = new_team;}
