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

    cout << "Inserisci un numero intero: ";
    cin >> num;

    // Risultato

    result = sqrt(num);
    cout << "\nRadice quadrata: " << result;

    return 0;
    
}