#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> numeros;
    int valor;

   
    for (int i = 0; i < 5; i++) {
        cout << "Digite o " << i + 1 << "º numero: ";
        cin >> valor;
        numeros.push_back(valor);
    }

    int soma = 0;
    int multiplicacao = 1;

   
    for (int n : numeros) {
        soma += n;
        multiplicacao *= n;
    }

    cout << "Soma: " << soma << endl;
    cout << "Multiplicacao: " << multiplicacao << endl;

    return 0;
}
