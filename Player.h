#pragma once
#include <iostream>
using namespace std;

class Player {

public:

    enum EnumRace {

        HUMAN, ELF, DWARF, ORC, TROLL

    };

    Player(string name, EnumRace race, int hitpoints, int magicpoints) {
        Name = name;
        EnumRace Race = race;
        Hitpoints = hitpoints;
        Magicpoints = magicpoints;
    }

    void setName(string name) {
        Name = name;
    }

    string getName() {
        return Name;
    }

    void setRace(int race) {
        if (race == 0) {
            Race = HUMAN;
        }

        else if (race == 1) {
            Race = ELF;
        }

        else if (race == 2) {
            Race = DWARF;
        }

        else if (race == 3) {
            Race = ORC;
        }

        else {
            Race = TROLL;
        }
    }

    EnumRace getRace() {
        return Race;
    }

    string whatRace() {
        if (Race == 0) {
            return "Human";
        }

        if (Race == 1) {
            return "Elf";
        }

        if (Race == 2) {
            return "Dwarf";
        }

        if (Race == 3) {
            return "Orc";
        }

        if (Race == 4) {
            return "Troll";
        }
    }

    string attack() {
        return "No attack method defined yet!";
    }

    void setHitpoints(int hitpoints) {
        Hitpoints = hitpoints;
    }

    int getHitpoints() {
        return Hitpoints;
    }

    void setMagicpoints(int magicpoints) {
        Magicpoints = magicpoints;
    }

    int getMagicpoints() {
        return Magicpoints;
    }

protected:

    EnumRace Race;
    string Name;
    int Hitpoints;
    int Magicpoints;

};


class Warrior : public Player {

public:

    Warrior(string name, EnumRace race, int hitpoints, int magicpoints) : Player (name, race, hitpoints, magicpoints) {

    }

    string attack() {
        return "I will destroy you with my sword!";
    }

};


class Priest : public Player {

public:

    Priest(string name, EnumRace race, int hitpoints, int magicpoints) : Player (name, race, hitpoints, magicpoints) {

    }

    string attack() {
        return "I will assault you with holy wrath!";
    }

};


class Mage : public Player {

public:

    Mage(string name, EnumRace race, int hitpoints, int magicpoints) : Player (name, race, hitpoints, magicpoints) {

    }

    string attack() {
        return "I will crush you with my arcane missiles!";
    }

};

