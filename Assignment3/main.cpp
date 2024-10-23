#include "Autobot.h"
#include "Decepticon.h"
#include "Dinobot.h"

int main()
{
    Transformer Optimus;
    std::cout << Optimus.get_ammo() << std::endl;
    Optimus.reload(100);
    std::cout << Optimus.get_ammo() << std::endl;
    std::cout << Optimus.get_power() << std::endl;
    std::cout << Optimus.get_gun() << std::endl;
    Autobot Prime("Autobots");
    std::cout << Prime.get_ammo() << "!" << std::endl;
    std::cout << Prime.get_power() << std::endl;
    std::cout << Prime.get_gun() << std::endl;
    std::cout << Prime.get_teamName() << std::endl;
    Decepticon Megatron("Conquer the Earth!");
    std::cout << Megatron.get_ammo() << "!!" << std::endl;
    std::cout << Megatron.get_power() << std::endl;
    std::cout << Megatron.get_gun() << std::endl;
    std::cout << Megatron.get_evilPlanName() << std::endl;
    Dinobot Scorn("Tyrannosaurus rex");
    std::cout << Scorn.get_ammo() << "!!!" << std::endl;
    std::cout << Scorn.get_power() << std::endl;
    std::cout << Scorn.get_gun() << std::endl;
    std::cout << Scorn.get_species() << std::endl;
}
