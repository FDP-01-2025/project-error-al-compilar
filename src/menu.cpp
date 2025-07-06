#include "menu.h"
#include "character.h"
#include "player_selection.h"
#include "battle.h"
#include "logger.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void ShowMainMenu() {
    int choice; 

    do {
        cout << "\n Welcome to Naruto Shippuden Console Game \n"; 
        cout << "1 - Fight MADARA the Final Boss\n";
        cout << "2 - Fight a Random Opponent\n";
        cout << "3 - Exit the Game\n";
        cout << "4 - View Battle History\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
            Character player = chooseCharacter();
            Character boss = createMadara();
            cout << "\n🔥 Welcome to the final battle! Time to face MADARA!\n";
            startBattle(player, boss);
            // llamar la funcion de batalla contra el jefe final 
            break; 
            }

            case 2:{
            cout << "You chose to fight a random opponent!\n";
            Character player = chooseCharacter();
            // Lista de personajes jugables para elegir enemigo aleatorio
            Character enemies[5] = {
            createNaruto(),
            createSasuke(),
            createNeji(),
            createRocklee(),
            createGaara()
            };
             // Elegir un oponente al azar (distinto del jugador)
                Character randomEnemy;
                do {
                    randomEnemy = enemies[rand() % 5];
                } while (randomEnemy.name == player.name);

                cout << "\n👊 You will fight against: " << randomEnemy.name << "!\n";
                startBattle(player, randomEnemy);
            break;
            }

            case 3:{
             cout << "\n👋 Thanks for playing! Game closed successfully.\n";
            break;
            }

            case 4: {
            cout << "\n Battle History:\n";
            showBattleLog();
            break; 
            }
            default:{
            cout << "\n❌ Invalid choice. Please select a valid option.\n";
            break;
            }
        }

    } while (choice != 3);
}