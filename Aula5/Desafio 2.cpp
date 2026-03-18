#include <iostream>
#include <list>

using namespace std;

int main() {

    list<string> lista;
    string x;

    for (int i = 0; i < 5; i++) {
        cin >> x;
        lista.push_back(x);
    }

    lista.reverse();

    for (string i : lista) {
        cout << i << " ";
    }

    return 0;
}
