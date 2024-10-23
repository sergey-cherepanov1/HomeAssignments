#include "Decepticon.h"

Decepticon::Decepticon(std::string evilPlanName, unsigned enemyCount) : _evilPlanName(evilPlanName), _enemyCount(enemyCount) {}

bool Decepticon::get_evilPlanName() {return 1;}
bool Decepticon::get_enemyCount() {return 1;}
bool Decepticon::make_enemy() {return 1;}
bool Decepticon::change_plan(std::string new_plan) {return 1;}
