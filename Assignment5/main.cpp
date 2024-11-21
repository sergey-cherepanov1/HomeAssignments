/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment5
*/

#include "Autobot.h"
#include "Decepticon.h"
#include "Dinobot.h"
#include "Gun.h"
#include "Core.h"
#include "Transformer.h"

int main()
{
    Autobot a;
    a.transform();
    a.fire();
    a.drive(5);
    
    Decepticon d;
    d.transform();
    d.fire();
    d.drive(5);
}
