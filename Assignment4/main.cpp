#include <iostream>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Dinobot.h"

int main()
{
    Transformer t(200, 100, 1, Gun("Riffle"));
    Transformer t1 = t;
    Autobot a("Autobots", 5);
    Decepticon d("Destroy Earth", 10);
    Dinobot db("T-Rex", 100);
    Core c(100);
    Gun g("Pistol");
    std::cout << t << std::endl;
    std::cout << a << std::endl;
    std::cout << d << std::endl;
    std::cout << db << std::endl;
    std::cout << c << std::endl;
    std::cout << g << std::endl;
    
    if (t1 == t) {std::cout << "1\n";}
}
