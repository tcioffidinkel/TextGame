#ifndef MONSTER_H
#define MONSTER_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Monster
{
private:
    int health;
    int attackRoll;
    int defenceRoll;
public:
    Monster();
    int attack();
    int defend();
    void takeDamage(int damage);
    bool isDead();
    int getHealth();
    ~Monster();

};

#endif // MONSTER_H
