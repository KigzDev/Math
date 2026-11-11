// Includo le direttive

#include <iostream>
#include <cmath>

using namespace std;

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    int num1;
    int num2;

    int result;

    // Inserimento primo numero

    cout << "Inserisci numero: ";
    cin >> num1;

    // Inserimento secondo numero

    cout << "\nInserisci l'esponente: ";
    cin >> num2;

    // Risultato

    result = pow(num1,num2);
    cout << "\nRisultato: " << result;

    return 0;

}