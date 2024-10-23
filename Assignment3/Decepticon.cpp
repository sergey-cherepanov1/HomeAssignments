/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment3
*/

#include "Decepticon.h"

Decepticon::Decepticon(std::string evilPlanName, unsigned enemyCount) : _evilPlanName(evilPlanName), _enemyCount(enemyCount) {}

std::string Decepticon::get_evilPlanName() {return _evilPlanName;}
unsigned Decepticon::get_enemyCount() {return _enemyCount;}
void Decepticon::make_enemy() {_enemyCount++;}
void Decepticon::change_plan(std::string new_plan) {_evilPlanName = new_plan;}
