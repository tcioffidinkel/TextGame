#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Player
{
private:
    string name;
    int health;
    int magic;
    int attackRoll;
    int defenceRoll;
    int healRoll;
    int manaRoll;
public:
    Player();
    int attack();
    int defend();
    void setName(string nameInput);
    void takeDamage(int damage);
    string getName();
    bool isDead();
    void heal();
    int getHealth();
    int getMana();
    ~Player();

};

#endif // PLAYER_H
