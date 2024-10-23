/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment3
*/

#include "Dinobot.h"

Dinobot::Dinobot(std::string species, unsigned hunger) : _species(species), _hunger(hunger) {}

std::string Dinobot::get_species() {return _species;}
unsigned Dinobot::get_hunger() {return _hunger;}
void Dinobot::eat() {_hunger++;}
void Dinobot::roar() {std::cout << "ROAARR!" << std::endl;}
