#include <iostream>
#include <string>

class ContaCorrente {
private:
    double saldo;
    std::string numeroConta;
    std::string nomeTitular;

public:
    // Utilizando do construtor
    ContaCorrente(std::string _numeroConta, std::string _nomeTitular) : saldo(0.0), numeroConta(_numeroConta), nomeTitular(_nomeTitular) {}

    // Deposito
    void depositar(double valor) {
        saldo += valor;
        std::cout << "Deposito de R$" << valor << " realizado com sucesso!" << std::endl;
    }

    // Saque
    void sacar(double valor) {
        if (valor > saldo) {
            std::cout << "Saldo insuficiente para sacar R$" << valor << std::endl;
        } else {
            saldo -= valor;
            std::cout << "Saque de R$" << valor << " realizado com sucesso!" << std::endl;
        }
    }

    // Consulta de saldo
    double consultarSaldo() const {
        return saldo;
    }
};

int main() {
    std::string numeroConta, nomeTitular;
    double valor;

    std::cout << "Digite o numero da conta: ";
    std::cin >> numeroConta;
    std::cin.ignore(); 

    std::cout << "Digite o nome do titular da conta: ";
    std::getline(std::cin, nomeTitular);

    // Criando a conta corrente 
    ContaCorrente conta(numeroConta, nomeTitular);

    // fornecimento de menu
    int escolha;
    do {
        std::cout << "\nEscolha uma operacao:\n";
        std::cout << "1. Depositar\n";
        std::cout << "2. Sacar\n";
        std::cout << "3. Consultar saldo\n";
        std::cout << "0. Sair\n";
        std::cout << "Opcao: ";
        std::cin >> escolha;

        switch (escolha) {
            case 1:
                std::cout << "Digite o valor a depositar: ";
                std::cin >> valor;
                conta.depositar(valor);
                break;
            case 2:
                std::cout << "Digite o valor a sacar: ";
                std::cin >> valor;
                conta.sacar(valor);
                break;
            case 3:
                std::cout << "Saldo: R$" << conta.consultarSaldo() << std::endl;
                break;
            case 0:
                std::cout << "Finalizando..." << std::endl;
                break;
            default:
                std::cout << "Opcao invalida!" << std::endl;
                break;
        }
    } while (escolha != 0);

    return 0;
}
