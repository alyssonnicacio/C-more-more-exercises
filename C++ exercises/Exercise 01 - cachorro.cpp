#include <iostream>
#include <string>

class Cachorro {
private:
    std::string nome;
    std::string raca;
    int idade;
    std::string cor;

public:
    // Uso do construtor
    Cachorro(std::string _nome, std::string _raca, int _idade, std::string _cor) : nome(_nome), raca(_raca), idade(_idade), cor(_cor) {}

    // Definindo os valores
    void setNome(std::string _nome) {
        nome = _nome;
    }

    void setRaca(std::string _raca) {
        raca = _raca;
    }

    void setIdade(int _idade) {
        idade = _idade;
    }

    void setCor(std::string _cor) {
        cor = _cor;
    }

    // Obtendo os valores
    std::string getNome() const {
        return nome;
    }

    std::string getRaca() const {
        return raca;
    }

    int getIdade() const {
        return idade;
    }

    std::string getCor() const {
        return cor;
    }

    // Implementacao para fazer o cachorro latir - usuario pode fazer um uso sinistro nisso!
    void latir() const {
        std::string barulho;
        std::cout << "Qual barulho o cachorro emite ao latir? ";
        std::getline(std::cin, barulho);
        std::cout << "O cachorro ta latindo: " << barulho << std::endl;
    }
};

int main() {
    std::string nome, raca, cor;
    int idade;

    std::cout << "Digite o nome do cachorro: ";
    std::getline(std::cin, nome);

    std::cout << "Digite a marca do cachorro: ";
    std::getline(std::cin, raca);

    std::cout << "Digite a idade do cachorro: ";
    std::cin >> idade;

    std::cin.ignore(); 

    std::cout << "Digite a cor do cachorro: ";
    std::getline(std::cin, cor);

    // O usuario emite as informacoes sobre o dog
    Cachorro cachorro(nome, raca, idade, cor);

    // colocando informacoes do dog em tela
    std::cout << "\nInformacoes do cachorro:\n";
    std::cout << "Nome: " << cachorro.getNome() << std::endl;
    std::cout << "Raca: " << cachorro.getRaca() << std::endl;
    std::cout << "Idade: " << cachorro.getIdade() << std::endl;
    std::cout << "Cor: " << cachorro.getCor() << std::endl;

    // Para o dog latir:
    cachorro.latir();

    return 0;
}
