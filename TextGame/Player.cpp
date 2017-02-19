#include "Player.h"

Player::Player()
{
    health = 100;
    magic = 100;
    
}

int Player::attack()
{
    srand(time(0));
    attackRoll = rand() % 100 + 1;
    int critical = attackRoll * 2;
    
    manaRoll = rand() % 10 + 1;
    if(attackRoll > 8)
    {
        magic = magic - manaRoll;
        cout << "Champion critical struck for " << critical << " !" << endl;
        cout << "Champion used " << manaRoll << " mana on that strike!" << endl;
        cout << endl;
        return critical;
    }
    else{
        magic = magic - manaRoll;
        cout << "Champion struck for " << attackRoll << " !" << endl;
        cout << "Champion used " << manaRoll << " mana on that strike!" << endl;
        cout << endl;
        return attackRoll;
    }
    return 0;
}

int Player::defend()
{
    srand(time(0));
    defenceRoll = rand() % 10 + 1;
    int criticalBlock = defenceRoll * 2;
    
    if(defenceRoll > 8)
    {
        magic = magic + defenceRoll;
        cout << "Champion critical blocked for " << criticalBlock << " !" << endl;
        cout << "Champion gained " << magic << " mana on that block!" << endl;
        cout << endl;
        return criticalBlock;
    }
    else{
        magic = magic + defenceRoll;
        cout << "Champion blocked for " << defenceRoll << " !" << endl;
        cout << "Champion gained " << magic << " mana on that block!" << endl;
        cout << endl;
        return defenceRoll;
    }
    return 0;
}

void Player::takeDamage(int damage)
{
    cout << "Champion took " << damage << " points worth of damage!" << endl;
    cout << endl;
    health = health - damage;
}
void Player::setName(string nameInput)
{
    name = nameInput;
}

string Player::getName()
{
    return name;
}

bool Player::isDead()
{
    if(health <= 0)
    {
        return true;
    }
    return false;
}

int Player::getHealth()
{
    return health;
}

int Player::getMana()
{
    return magic;
}

void Player::heal()
{
    if(health == 100)
    {
        return;
    }
    healRoll = rand() % 3 + 1;
    health = health + healRoll;
    cout << "The champion healed for " << healRoll << " health points!" << endl;
    cout << endl;
}
Player::~Player()
{
    
}

