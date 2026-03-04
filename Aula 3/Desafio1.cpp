#include <iostream>
using namespace std;

int main() {
    int N;
    int soma = 0;

    cout << "Digite um numero inteiro: ";
    cin >> N;

    for(int i = 1; i <= N; i++) {
        soma += i;
    }

    cout << "Soma dos numeros inteiros positivos ate " << N << " = " << soma << endl;

    return 0;
}
