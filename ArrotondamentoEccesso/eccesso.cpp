// Includo le direttive\

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

    result = ceil(num);
    cout << "\nNumero arrotondato per eccesso: " << result;

    return 0;
    
}