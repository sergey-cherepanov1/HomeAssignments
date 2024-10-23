#include "Dinobot.h"

Dinobot::Dinobot(std::string species, unsigned hunger) : _species(species), _hunger(hunger) {}

bool Dinobot::get_species() {return 1;}
bool Dinobot::get_hunger() {return 1;}
bool Dinobot::eat() {return 1;}
bool Dinobot::roar() {return 1;}
