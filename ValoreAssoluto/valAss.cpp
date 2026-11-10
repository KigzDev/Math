// Includo le direttive

#include <iostream>
#include <cmath>

using namespace std;

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    int num;
    int result;

    // Inserimento numero

    cout << "Inserisci numero: ";
    cin >> num;

    // Risultato

    result = abs(num);
    cout << "\nValore assoluto: " << result;

    return 0;
    
}