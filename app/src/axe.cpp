#include "Axe.h"

Axe::Axe(int damage) :m_damage(damage) {
    if (damage < 10 || damage > 20) {
        std::cerr << "Damage has to be in a range of 10-20 points.\n";
        exit(1);
    } else {
        
    }
}
int Axe::getDamage() const {
    return m_damage;
}
