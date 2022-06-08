#include <iostream>
#include <vector>
#include "Player.h";
using namespace std;

int main()
{
    string name;
    int classtype;
    int racetype;
    Warrior warrior(name, Player::HUMAN, 200, 0);
    Priest priest(name, Player::HUMAN, 100, 200);
    Mage mage(name, Player::HUMAN, 200, 0);
    vector<Warrior> warriorVector;
    vector<Priest> priestVector;
    vector<Mage> mageVector;
    bool loop = true;

    while (loop) {

        //taking input from user for classtype, if user has finished creating classes 4 will print out all the created classes
        cout << "\tCHARACTER CREATION\n\n";
        cout << "Which of the following would you like?\n";
        cout << "\t1. Create a Warrior!\n";
        cout << "\t2. Create a Priest!\n";
        cout << "\t3. Create a Mage!\n";
        cout << "\t4. Finish creating player characters!\n";
        cout << "\nYour input: ";
        cin >> classtype;

        //accessing vector and exiting application
        if (classtype == 4) {
            cout << "\nWarrior Vector: \n";
            unsigned int size = warriorVector.size();
            for (int i = 0; i < size; i++) {
                cout << "I am a Warrior with name: " << warriorVector[i].getName() << " and race: " << warriorVector[i].whatRace() << " and my attack is: " << warriorVector[i].attack() << endl;
            }
            cout << "\nPriest Vector: \n";
            unsigned int size1 = priestVector.size();
            for (int i = 0; i < size1; i++) {
                cout << "I am a Priest with name: " << priestVector[i].getName() << " and race: " << priestVector[i].whatRace() << " and my attack is: " << priestVector[i].attack() << endl;
            }      
            cout << "\nMage Vector: \n";
            unsigned int size2 = mageVector.size();
            for (int i = 0; i < size2; i++) {
                cout << "I am a Mage with name: " << mageVector[i].getName() << " and race: " << mageVector[i].whatRace() << " and my attack is: " << mageVector[i].attack() << endl;
            }
            cout << "\n\nExiting Application...\n";
            return 0;
        }

        //taking input from user for Race and Name
        cout << "\nWhich race do you want?\n";
        cout << "\t1. Human!\n";
        cout << "\t2. Elf!\n";
        cout << "\t3. Dwarf!\n";
        cout << "\t4. Orc!\n";
        cout << "\t5. Troll!\n";
        cout << "\nYour input: ";
        cin >> racetype;
        cout << "\nWhat would you like to name your character? ";
        cin >> name;
        cout << endl;

        //saving to vector
        if (classtype == 1) {
            warrior.setRace(racetype - 1);
            warrior.setName(name);
            warriorVector.push_back(warrior);
        }
        else if (classtype == 2) {
            priest.setRace(racetype - 1);
            priest.setName(name);
            priestVector.push_back(priest);
        }
        else if (classtype == 3) {
            mage.setRace(racetype - 1);
            mage.setName(name);
            mageVector.push_back(mage);
        }
    } 
}