#include <iostream>
using namespace std;

int soma(int a, int b) {
    int resultado = a + b;
    return resultado;
}

int subtracao(int a, int b) {
    int resultado = a - b;
    return resultado;
}

int multiplicacao(int a, int b) {
    int resultado = a * b;
    return resultado;
}

float divisao(int a, int b) {
    float resultado = (float)a / b;
    return resultado;
}

int main() {
    int x, y, opcao;

    cout << "Digite o primeiro numero: ";
    cin >> x;
    cout << "Digite o segundo numero: ";
    cin >> y;

    cout << "\nEscolha a operacao:" << endl;
    cout << "1 - Soma" << endl;
    cout << "2 - Subtracao" << endl;
    cout << "3 - Multiplicacao" << endl;
    cout << "4 - Divisao" << endl;
    cout << "Opcao: ";
    cin >> opcao;

    cout << "\nResultado: ";

    if (opcao == 1) {
        cout << x << " + " << y << " = " << soma(x, y) << endl;
    } else if (opcao == 2) {
        cout << x << " - " << y << " = " << subtracao(x, y) << endl;
    } else if (opcao == 3) {
        cout << x << " x " << y << " = " << multiplicacao(x, y) << endl;
    } else if (opcao == 4) {
        if (y == 0) {
            cout << "Erro: divisao por zero!" << endl;
        } else {
            cout << x << " / " << y << " = " << divisao(x, y) << endl;
        }
    } else {
        cout << "Opcao invalida!" << endl;
    }

    return 0;
}
