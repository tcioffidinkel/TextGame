#include "Monster.h"

Monster::Monster()
{
    health = 1000;
}

int Monster::attack()
{
    srand(time(0));
    attackRoll = rand() % 10 + 1;
    int critical = attackRoll * 2;
    
    if(attackRoll > 8)
    {
        cout << "The monster critically struck for " << critical << " !" << endl;
        cout << endl;
        return critical;
    }
    else{
        cout << "The monster struck for " << attackRoll << " !" << endl;
        cout << endl;
        return attackRoll;
    }
    return 0;
}

int Monster::defend()
{
    srand(time(0));
    defenceRoll = rand() % 10 + 1;
    int criticalBlock = defenceRoll * 2;
    
    if(defenceRoll > 8)
    {
        cout << "The monster critically blocked for " << criticalBlock << " !" << endl;
        cout << endl;
        return criticalBlock;
    }
    else{
        cout << "The monster blocked for " << defenceRoll <<  " !" << endl;
        cout << endl;
        return defenceRoll;
    }
    return 0;
}

void Monster::takeDamage(int damage)
{
    cout << "The monster took " << damage << " points worth of damage!" << endl;
    cout << endl;
    health = health - damage;
}

int Monster::getHealth()
{
    return health;
}

bool Monster::isDead()
{
    if(health <= 0)
    {
        return true;
    }
    return false;
}

Monster::~Monster()
{
}

