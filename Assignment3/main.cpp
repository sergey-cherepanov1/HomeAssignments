#include "Autobot.h"
#include "Decepticon.h"
#include "Dinobot.h"

int main()
{
    Autobot Optimus;
    std::cout << Optimus.get_gun() << std::endl;
    Gun Rifle("Rifle");
    Optimus.change_gun(Rifle);
    std::cout << Optimus.get_gun() << std::endl;
    std::cout << Optimus.get_power() << std::endl;
}
