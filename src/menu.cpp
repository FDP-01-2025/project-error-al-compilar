#include <iostream> 
#include "menu.h" 

using namespace std;

void ShowMainMenu() {
    int choice; 

    do {
        cout << "\n--- Welcome to Naruto Shippuden: Final Battle ---\n"; 
        cout << "1 - Fight the Final Boss\n";
        cout << "2 - Fight a Random Opponent\n";
        cout << "3 - Exit the Game\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
            cout << "You chose to fight the Final Boss!\n"; 
            // llamar la funcion de batalla contra el jefe final 
            break; 

            case 2:
                cout << "You chose to fight a random opponent!\n";
                // Llamar la función de batalla contra un oponente aleatorio
                break;
            case 3:
                cout << "Game closed successfully. See you next time!\n";
                break;
            default:
                cout << "Invalid choice. Please select a valid option.\n";
                break;
        }

    } while (choice != 3);
}







    

    
   