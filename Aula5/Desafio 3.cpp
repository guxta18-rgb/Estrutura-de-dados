#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> A, B, C;
    int x;

    cout << "Digite 5 numeros para a lista A:\n";
    for (int i = 0; i < 5; i++) {
        cin >> x;
        A.push_back(x);
    }

    cout << "Digite 5 numeros para a lista B:\n";
    for (int i = 0; i < 5; i++) {
        cin >> x;
        B.push_back(x);
    }

    for (int i : A) {
        C.push_back(i);
    }

    for (int i : B) {
        C.push_back(i);
    }

    C.sort();


    cout << "Lista C ordenada: ";
    for (int i : C) {
        cout << i << " ";
    }

    return 0;
}
