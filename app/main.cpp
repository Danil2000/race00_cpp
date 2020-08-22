#include <iostream>
#include "src/ImperialSoldier.h"
#include "src/StormcloakSoldier.h"
#include "src/Sword.h"
#include "src/Axe.h"

void RunBattle(Sword* sword, Axe* axe) {
    ImperialSoldier impSold;
    StormcloakSoldier stormSold;

    impSold.setWeapon(sword);
    stormSold.setWeapon(axe);
    
    while (impSold.getHealth() > 0 && stormSold.getHealth() > 0) {
        impSold.attack(stormSold);
        stormSold.attack(impSold);
        std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>\n";
    }
    if (impSold.getHealth() <= 0)
        std::cout << "Stormcloak has won!\n";
    if (stormSold.getHealth() <= 0)
        std::cout << "Imperial has won!\n";
}

int main(int argc, char **argv) {
    if (argc != 3) {
        std::cerr << "usage: ./imperialVsStormcloak [dmgOfSword] [dmgOfAxe]\n";
        exit(1);
    } else {
        try {
            Sword *sword = new Sword(std::stoi(argv[1]));
            Axe *axe = new Axe(std::stoi(argv[2]));
            RunBattle(sword, axe);
        } catch (...) {
            std::cerr << "usage: ./imperialVsStormcloak [dmgOfSword] [dmgOfAxe]\n";
            exit(1);
        }
    }
}
