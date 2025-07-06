#include "battle.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void showAbilities(const Character& character){
cout << character.name << "s abilities:" << endl; 
for (int i = 0; i < 4; ++i) {
cout << i + 1 << "." << character.abilities[i].name 
     << " (Damage: " << character.abilities[i].damage 
     << ", Hit chance: " << character.abilities[i].hitChance * 100 << "%)" << endl;
}

}

void startBattle(Character player, Character enemy) {
srand(time(0)); // Inicializa la semilla aleatoria
cout << "⚔️ Battle begins: " << player.name << " vs " << enemy.name << "!" << endl;

while (player.health > 0 && enemy.health > 0) {
        // Turno del jugador
        cout << "\n--- Your Turn ---" << endl;
        showAbilities(player);

         int choice;
        do {
            cout << "Choose an ability (1-4): ";
            cin >> choice;
        } while (choice < 1 || choice > 4);
    
        Ability chosen = player.abilities[choice - 1];
        float roll = static_cast<float>(rand()) / RAND_MAX;
        if (roll <= chosen.hitChance) {
            if (chosen.damage >= 0) {
                enemy.health -= chosen.damage;
                cout << "You used " << chosen.name << "! It hit and dealt " << chosen.damage << " damage!" << endl;
            } else {
                player.health -= chosen.damage; // daño negativo = curación
                if (player.health > MAX_HEALTH) player.health = MAX_HEALTH;
                cout << "You used " << chosen.name << " and healed " << -chosen.damage << " HP!" << endl;
                cout << player.name << " now has " << player.health << " HP." << endl;
  }
        } else {
            cout << "Your attack missed!" << endl;
        }

       if (enemy.health <= 0) break;

        // Turno del enemigo
        cout << "\n--- Enemy's Turn ---" << endl;
        int enemyChoice = rand() % 4;
        Ability enemyAttack = enemy.abilities[enemyChoice];
        float enemyRoll = static_cast<float>(rand()) / RAND_MAX;
        if (enemyRoll <= enemyAttack.hitChance) {
            if (enemyAttack.damage >= 0) {
                player.health -= enemyAttack.damage;
                cout << enemy.name << " used " << enemyAttack.name << " and dealt " << enemyAttack.damage << " damage!" << endl;

                 } else {
                enemy.health -= enemyAttack.damage;
                if (enemy.health > MAX_HEALTH) enemy.health = MAX_HEALTH;
                cout << enemy.name << " used " << enemyAttack.name << " and healed " << -enemyAttack.damage << " HP!" << endl;
            }
        } else {
            cout << enemy.name << "'s attack missed!" << endl;
        }

        // Mostrar salud actual
        cout << "\nCurrent HP - " << player.name << ": " << player.health
             << " | " << enemy.name << ": " << enemy.health << endl;
    }

    // Resultado
    if (player.health > 0)
        cout << "\n🎉 You won the battle!" << endl;
    else
        cout << "\n💀 You were defeated..." << endl;
}