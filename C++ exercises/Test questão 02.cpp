#include <iostream>
#include <string>

class Carro {
private:
    std::string modelo;
    int ano;
    std::string cor;
    double preco;
    std::string tipoCombustivel;

public:
// setters
    void setModelo(const std::string& _modelo) {
        modelo = _modelo;
    }

    void setAno(int _ano) {
        ano = _ano;
    }

    void setCor(const std::string& _cor) {
        cor = _cor;
    }

    void setPreco(double _preco) {
        preco = _preco;
    }

    void setTipoCombustivel(const std::string& _tipoCombustivel) {
        tipoCombustivel = _tipoCombustivel;
    }

    std::string getModelo() const {
        return modelo;
    }
// getters
    int getAno() const {
        return ano;
    }

    std::string getCor() const {
        return cor;
    }

    double getPreco() const {
        return preco;
    }

    std::string getTipoCombustivel() const {
        return tipoCombustivel;
    }
};

int main() {
    Carro carro;
    
    std::cout << "Informe o modelo do carro: ";
    std::string modelo;
    std::getline(std::cin, modelo);
    carro.setModelo(modelo);

    std::cout << "Informe o ano do carro: ";
    int ano;
    std::cin >> ano;
    carro.setAno(ano);
    std::cin.ignore(); 

    std::cout << "Informe a cor do carro: ";
    std::string cor;
    std::getline(std::cin, cor);
    carro.setCor(cor);

    std::cout << "Informe o preco do carro: ";
    double preco;
    std::cin >> preco;
    carro.setPreco(preco);
    std::cin.ignore(); 

    std::cout << "Informe o tipo de combustivel do carro: ";
    std::string tipoCombustivel;
    std::getline(std::cin, tipoCombustivel);
    carro.setTipoCombustivel(tipoCombustivel);

    std::cout << "\nDados do carro:" << std::endl;
    std::cout << "Modelo: " << carro.getModelo() << std::endl;
    std::cout << "Ano: " << carro.getAno() << std::endl;
    std::cout << "Cor: " << carro.getCor() << std::endl;
    std::cout << "Preço: R$" << carro.getPreco() << std::endl;
    std::cout << "Tipo de combustivel: " << carro.getTipoCombustivel() << std::endl;

    return 0;
}
