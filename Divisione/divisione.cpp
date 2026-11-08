// Includo le direttive

#include <iostream>
using namespace std;

// Funzione divisione

int divisione(int a,int b) {

    return a / b;

}

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    int num1;
    int num2;

    int result;

    // Inserimento primo numero

    cout << "Inserisci il primo numero: ";
    cin >> num1;

    // Inserimento secondo numero

    cout << "\nInserisci il secondo numero: ";
    cin >> num2;

    // Chiamata funzione e risultato

    result = divisione(num1,num2);
    cout << "\nRisultato: " << result;
    
    return 0;
    
}