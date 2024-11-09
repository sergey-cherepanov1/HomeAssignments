/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment3
*/

#ifndef TRANSFORMER_h
#define TRANSFORMER_h

#include <iostream>
#include "Core.h"
#include "Gun.h"

class Transformer
{
public:
    Transformer(unsigned ammo = 0, double fuel = 0, bool form = true, Gun gun = Gun("shotgun"));

    
    void transform();
    void fire();
    void drive(unsigned km);
    
    unsigned get_ammo() const;
    double get_fuel() const;
    bool get_form() const;
    unsigned get_power() const;
    std::string get_gun() const;
    
    void change_gun(Gun new_gun);
    void reload(unsigned ammo);
	void refuel(double fuel);
private:
	unsigned _ammo;
    double _fuel;
    bool _form;
    Core _core;
    Gun _gun;
};

std::ostream& operator<<(std::ostream& out, const Transformer& transformer);
bool operator==(const Transformer& left, const Transformer& right);
bool operator!=(const Transformer& left, const Transformer& right);
bool operator<(const Transformer& left, const Transformer& right);
bool operator>(const Transformer& left, const Transformer& right);
bool operator<=(const Transformer& left, const Transformer& right);
bool operator>=(const Transformer& left, const Transformer& right);


#endif
