#include "Transformer.h"

int main()
{
    Transformer Optimus;
    std::cout << Optimus.get_ammo() << std::endl;
    Optimus.reload(100);
    std::cout << Optimus.get_ammo() << std::endl;
    std::cout << Optimus.get_car().get_type() << std::endl;
}
