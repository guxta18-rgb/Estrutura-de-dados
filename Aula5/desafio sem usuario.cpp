#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> numeros = {1, 2, 3, 4, 5};

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
