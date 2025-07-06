#ifndef CHARACTER_H
#define CHARACTER_H

#include <string> 

//Constantes Maximas 
const int MAX_ABILITIES = 4; 
const int MAX_HEALTH = 100; 

//Structura de las habilidades 
struct Ability {
    std::string name;
    int damage;
    float hitChance; // valor entre 0.0 (0%) y 1.0 (100%)
};

// Estructura de los personajes 
struct Character {
    std::string name;
    int health; 
    Ability abilities[MAX_ABILITIES]; // habilidades del personaje
};

// Función para crear los personajes
Character createNaruto(); 
Character createMadara(); 
Character createSasuke();
Character createNeji(); 
Character createRocklee(); 
Character createGaara();

#endif 