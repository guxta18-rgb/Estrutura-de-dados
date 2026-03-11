#include <iostream>
using namespace std;

int main() {

    int vetor[6];
    int maior, menor;

    
    for(int i = 0; i < 6; i++) {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> vetor[i];
    }

    
    maior = vetor[0];
    menor = vetor[0];

   
    for(int i = 1; i < 6; i++) {

        if(vetor[i] > maior) {
            maior = vetor[i];
        }

        if(vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    cout << "Maior elemento: " << maior << endl;
    cout << "Menor elemento: " << menor << endl;

    return 0;
}
