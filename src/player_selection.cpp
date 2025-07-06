#include "player_selection.h"
#include <iostream>

using namespace std;

Character chooseCharacter(){ 
int choice;
cout << "Choose your character!" << endl; 
cout << "1. Naruto" << endl;
cout << "2. Sasuke" << endl;
cout << "3. Neji" << endl;
cout << "4. Rock Lee" << endl;
cout << "5. Gaara" << endl;

do { 
cout << "Enter your choice (1-5): ";
cin >> choice; 

if (cin.fail() || choice < 1 || choice > 5) { 
cin.clear(); // Limpiar el estado de error del cin
cin.ignore(1000, '\n'); // Limpiar el buffer de entrada
cout << "Invalid choice. Please try again." << endl; 

}

} while (choice < 1 || choice > 5); 

switch (choice) { 
    case 1: 
        return createNaruto(); 
    case 2: 
        return createSasuke(); 
    case 3: 
        return createNeji(); 
    case 4: 
        return createRocklee(); 
    case 5: 
        return createGaara(); 
    default: return createNaruto(); // Por defecto, si algo falla, se elige Naruto

}

}

