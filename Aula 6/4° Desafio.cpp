#include <iostream>
using namespace std;

int somarVetor(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma = soma + vetor[i];
    }
    return soma;
}

int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    int tamanho = 5;

    int resultado = somarVetor(numeros, tamanho);

    cout << "Elementos do vetor: ";
    for (int i = 0; i < tamanho; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    cout << "A soma dos elementos é: " << resultado << endl;

    return 0;
}
