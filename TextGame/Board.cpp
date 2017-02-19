#include "Player.h"
#include "Monster.h"


int main()
{
    int roller;
    Player player;
    string nameInput;
    string replay = "y";
    srand(time(0));
    while(replay != "n")
    {
        cout << "Welcome to the Monster Arena." << endl;
        cout << endl;
        cout << "You are a gladiator and have stepped into the ring to face your enemies." << endl;
        cout << endl;
        cout << "What is the name the crowd will cheer?" << endl;
        cout << endl;
        cin >> nameInput;
        player.setName(nameInput);
        
        cout << "Please welcome your champion! " << player.getName() << "!" << endl;
        cout << endl;
        roller = rand() % 4 + 1;
        int counter = 1;
        cout << "The champion " << player.getName() << " will face off against " << roller << " monsters in today's arena!" << endl;
        cout << endl;
        
        while(!player.isDead() && counter <= roller)
        {
            player.heal();
            Monster monster;
            
            cout << "Monster " << counter << " has entered the arena! A fearsome and mighty foe!" << endl;
            
            cout << endl;
            cout << "Let the battle begin!" << endl;
            cout << endl;
            int battleroll;
            while(!player.isDead() && !monster.isDead())
            {
                battleroll = rand() % 2 + 1;
                string move;
                
                cout << "Would you like to attack or defend? (a or d)" << endl;
                cin >> move;
                int playerMove;
                int monsterMove;
                if(move == "a" && battleroll == 1)
                {
                    playerMove = player.attack();
                    monsterMove = monster.attack();
                    
                    monster.takeDamage(playerMove);
                    player.takeDamage(monsterMove);
                }
                else if(move =="d" && battleroll == 1)
                {
                    playerMove = player.defend();
                    monsterMove = monster.attack();
                    
                    player.takeDamage(monsterMove - playerMove);
                }
                else if(move == "a" && battleroll == 2)
                {
                    playerMove = player.attack();
                    monsterMove = monster.defend();
                    
                    monster.takeDamage(playerMove);
                }
                else if (move == "d" && battleroll == 2){
                    playerMove = player.defend();
                    monsterMove = monster.defend();
                    
                    cout << "Nothing occured" << endl;
                }
                cout << "Champion has " << player.getHealth() << " health points and " << player.getMana() <<  " remaining" << endl;
                cout << "The monster has " << monster.getHealth() << " health points remaining" << endl;
            }
            
            
            counter++;
        }
        if(player.isDead())
        {
            cout << "Your champion " << player.getName() << " has been defeated!" << endl;
            cout << "Would you like to be reserected and try again? (y of n)" << endl;
            cout << endl;
            cin >> replay;
        }
        else
        {
            cout << "The monsters have been defeated! " << player.getName() << " is victorious!" << endl;
            cout << "Would you like to try the next arena? (y of n)" << endl;
            cout << endl;
            cin >> replay;
        }
        
    }
        
        
	return 0;
}

