#include <iostream>
#include <string>

class ContaPoupanca {
private:
    double saldo;
    std::string numeroConta;
    std::string nomeTitular;

public:
    // o construtor
    ContaPoupanca(std::string _numeroConta, std::string _nomeTitular) : saldo(0.0), numeroConta(_numeroConta), nomeTitular(_nomeTitular) {}

    // Dep
    void depositar(double valor) {
        saldo += valor;
        std::cout << "Depósito de R$" << valor << " realizado com sucesso!" << std::endl;
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

    std::cout << "Digite o numero da conta poupanca: ";
    std::cin >> numeroConta;
    std::cin.ignore();

    std::cout << "Digite o nome do titular da conta poupanca: ";
    std::getline(std::cin, nomeTitular);

    // conta poupanca
    ContaPoupanca contaPoupanca(numeroConta, nomeTitular);

    // Menu para operar
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
                contaPoupanca.depositar(valor);
                break;
            case 2:
                std::cout << "Digite o valor a sacar: ";
                std::cin >> valor;
                contaPoupanca.sacar(valor);
                break;
            case 3:
                std::cout << "Saldo: R$" << contaPoupanca.consultarSaldo() << std::endl;
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
