// Includo le direttive

#include <iostream>
#include <cmath>

using namespace std;

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    double num;
    double result;

    // Inserimento angolo

    cout << "Inserisci angolo: ";
    cin >> num;

    // Risultato

    result = tan(num);
    cout << "\nTangente: " << result;

    return 0;
    
}