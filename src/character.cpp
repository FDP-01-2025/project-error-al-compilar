#include "character.h"

// Naruto character 
Character createNaruto() { 
Character naruto; 
    naruto.name = "Naruto"; 
    naruto.health = MAX_HEALTH; 
    naruto.abilities[0] = {"Rasengan", 25, 0.8f};
    naruto.abilities[1] = {"Shadow clone Attack", 20, 1.0f};
    naruto.abilities[2] = {"Rasen Shuriken", 60, 0.5f};
    naruto.abilities[3] = {"Hinata's kiss", -30, 1.0f}; // Cura
    return naruto;
}

// Madara Character (Jefe) 
Character createMadara(){ 
Character madara; 
madara.name = "Madara"; 
madara.health = MAX_HEALTH + 30; // El jefe siempre suele tener mas vida base
madara.abilities[0] = {"Fire style: Majestic Destroyer Flame", 30, 0.75f};
madara.abilities[1] = {"Susano'o Slash", 30, 0.8f};
madara.abilities[2] = {"Meteor Shower", 40, 0.4f};
madara.abilities[3] = {"Genjutsu Trap", 20, 0.7f};
return madara;
}

// Sasuke Character 
Character createSasuke(){ 
Character sasuke; 
sasuke.name = "Sasuke"; 
sasuke.health = MAX_HEALTH;
sasuke.abilities[0] = {"Chidori", 30, 0.75f};
sasuke.abilities[1] = {"Fireball Jutsu", 20, 0.9f};
sasuke.abilities[2] = {"Amaterasu", 50, 0.5f};
sasuke.abilities[3] = {"Susano'o", -30, 1.0f};  // Cura
return sasuke;
}

// Neji Character 
Character createNeji(){ 
Character neji; 
neji.name = "Neji"; 
neji.health = MAX_HEALTH;
neji.abilities[0] = {"Eight Trigrams Sixty-Four Palms", 50, 0.8f};
neji.abilities[1] = {"Gentle Fist", 20, 0.9f};
neji.abilities[2] = {"Rotation Defense", 10, 1.0f};  
neji.abilities[3] = {"Byakugan Focus", -30, 1.0f};  // Cura
return neji;
}

// Rock Lee Character 
Character createRocklee(){ 
Character lee; 
lee.name = "Rock Lee"; 
 lee.health = MAX_HEALTH;
    lee.abilities[0] = {"Leaf Hurricane", 20, 0.9f};
    lee.abilities[1] = {"Eight Gates Formation", 55, 0.6f};
    lee.abilities[2] = {"Drunken Fist", 25, 0.8f};
    lee.abilities[3] = {"Recovery Push-ups", -30, 1.0f};  // Cura
    return lee;
}

// Gaara Character 
Character createGaara(){ 
Character gaara;
gaara.name = "Gaara"; 
gaara.health = MAX_HEALTH;
gaara.abilities[0] = {"Sand Coffin", 30, 0.75f};
gaara.abilities[1] = {"Sand Shield", 20, 1.0f};  
gaara.abilities[2] = {"Shukakus Rage", 50, 0.5f};
gaara.abilities[3] = {"Sand Healing", -30, 1.0f};  // Cura
return gaara;
}

