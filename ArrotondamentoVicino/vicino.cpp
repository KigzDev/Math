// Includo le direttive

#include <iostream>
#include <cmath>

using namespace std;

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    double num;
    double result;

    // Inserimento numero

    cout << "Inserisci numero: ";
    cin >> num;

    // Risultato

    result = round(num);
    cout << "\nRisultato: " << result;

    return 0;

}