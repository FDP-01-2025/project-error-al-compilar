#include "logger.h"
#include <fstream>
#include <iostream>
#include <ctime>

using namespace std; 

void logBattleResult(const string& playerName, const string& enemyName, bool playerWon) {
ofstream logFile("battle_log.txt", ios::app); // Abre el archivo para agregar (append)

if (!logFile) {
cerr << "Error opening Log file!" << endl; 
return; 
}

//Obtener fecha y hora actual 
time_t now = time(0); 
tm* timeinfo = localtime(&now); 

logFile << "--------------------------------------\n";
    logFile << " Date: " << asctime(timeinfo);
    logFile << " Player: " << playerName << "\n";
    logFile << " Enemy: " << enemyName << "\n";
    logFile << " Result: " << (playerWon ? "Victory" : "Defeat") << "\n";
    logFile << "--------------------------------------\n\n";

    logFile.close();
}

    void showBattleLog() {
    ifstream logFile("battle_log.txt");

    if (!logFile){
        cerr << "Could not open log file because no battles have been played yet!" << endl;
        return; 
    }

    cout << "========== Battle History =========="; 
    string line; 
    while (getline(logFile, line)) { 
        cout << line << endl; 

    }

    logFile.close(); 
}
