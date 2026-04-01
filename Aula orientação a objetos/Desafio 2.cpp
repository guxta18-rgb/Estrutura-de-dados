#include <iostream>
#include <string>

using namespace std;

class Livro {

private: 
    string titulo;
    string autor;
    int paginas;
    bool emprestado;


public: 
    
    Livro(string _titulo, string _autor, int _paginas) {
        titulo = _titulo;
        autor = _autor;
        paginas = _paginas;
        emprestado = false; 
    }

    void ler() {
        cout << "Você está lendo o livro '" << titulo << "', de " << autor << "." << endl;
    }

    void emprestar() {
        if (!emprestado) {
            emprestado = true;
            cout << "Sucesso: O livro '" << titulo << "' foi emprestado!" << endl;
        } else {
            cout << "Aviso: O livro '" << titulo << "' já está emprestado no momento." << endl;
        }
    }

    bool estaEmprestado() {
        return emprestado;
    }
};

int main() {
    
    Livro livro1("O Programador Pragmático", "Andrew Hunt", 352);

    
    livro1.ler();

    cout << "-----------------------------------" << endl;

    
    cout << "Status: " << (livro1.estaEmprestado() ? "Indisponível (Emprestado)" : "Disponível") << endl;


    livro1.emprestar();

    
    cout << "Status: " << (livro1.estaEmprestado() ? "Indisponível (Emprestado)" : "Disponível") << endl;

    
    livro1.emprestar();

    return 0;
}
