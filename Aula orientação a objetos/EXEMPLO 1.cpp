#include <iostream>
#include <string>
using namespace std;

class Pessoa {
private:
    string nome;
    int idade;
    string endereco;
    string profissao;

public:
    // Construtor da classe Pessoa
    Pessoa(string nome, int idade, string endereco, string profissao) {
        this->nome = nome;
        this->idade = idade;
        this->endereco = endereco;
        this->profissao = profissao;
    }

    // Métodos para definir e obter o nome
    void setNome(string novoNome) {
        nome = novoNome;
    }

    string getNome() {
        return nome;
    }

    // Métodos para definir e obter a idade
    void setIdade(int novaIdade) {
        idade = novaIdade;
    }

    int getIdade() {
        return idade;
    }

    // Métodos para definir e obter o endereço
    void setEndereco(string novoEndereco) {
        endereco = novoEndereco;
    }

    string getEndereco() {
        return endereco;
    }

    // Métodos para definir e obter a profissão
    void setProfissao(string novaProfissao) {
        profissao = novaProfissao;
    }

    string getProfissao() {
        return profissao;
    }

    // Método para exibir informações da pessoa
    void mostrarInfo() {
        cout << "------------------------" << endl;
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << " anos" << endl;
        cout << "Endereço: " << endereco << endl;
        cout << "Profissão: " << profissao << endl;
    }
}; 
