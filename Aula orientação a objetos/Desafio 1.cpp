#include <iostream>
#include <string>

using namespace std;

class Carro {
private:
  
    string cor;
    string modelo;
    bool aerofolio;
    bool farois_led;

public:
    
    Carro(string _cor, string _modelo, bool _aerofolio, bool _farois_led) {
        cor = _cor;
        modelo = _modelo;
        aerofolio = _aerofolio;
        farois_led = _farois_led;
    }

    
    void acelerar() {
        cout << "O carro " << modelo << " está acelerando! Vrummm!" << endl;
    }

    void frear() {
        cout << "O carro " << modelo << " acionou os freios!" << endl;
    }

    void acender_farois() {
        if (farois_led) {
            cout << "Faróis de LED acesos! Iluminação super branca ativada." << endl;
        } else {
            cout << "Faróis halógenos comuns acesos." << endl;
        }
    }

    void exibir_informacoes() {
        cout << "\n--- Informações do Veículo ---" << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Cor: " << cor << endl;
        
        cout << "Aerofólio Esportivo: " << (aerofolio ? "Sim" : "Não") << endl;
        cout << "Faróis Projetores de LED: " << (farois_led ? "Sim" : "Não") << endl;
        cout << "------------------------------\n" << endl;
    }  
};

int main() {
   
    Carro carroDaImagem("Amarela", "Lancer Evolution", true, true);

 
    carroDaImagem.exibir_informacoes();
    carroDaImagem.acender_farois();
    carroDaImagem.acelerar();
    carroDaImagem.frear();

    return 0;
}
