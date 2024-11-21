/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment5
*/

#include "Autobot.h"
#include "Decepticon.h"
#include "Gun.h"
#include "Core.h"
#include "Transformer.h"
#include <vector>

int main()
{
    std::cout << "!!! explicit testing !!!\n";
    Autobot a;
    a.transform();
    a.fire();
    a.drive();

    Decepticon d;
    d.transform();
    d.fire();
    d.drive();

    std::cout << "\n";
    std::cout << "!!! testing using a pointer typed by the base class !!!\n";
    Transformer * t_A = &a;
    t_A->transform();
    t_A->fire();
    t_A->drive();

    Transformer * t_D = &d;
    t_D->transform();
    t_D->fire();
    t_D->drive();

    std::cout << "\n";
    std::cout << "!!! testing using a vector of pointers !!!\n";

    Transformer t1, t2, t3;
    Autobot a1, a2, a3;
    Decepticon d1, d2, d3;

    std::vector<Transformer*> T = {&t1, &t2, &t3, &a1, &a2, &a3, &d1, &d2, &d3};

    for (auto& obj : T)
    {
        obj->transform();
        obj->fire();
        obj->drive();
    }
}
