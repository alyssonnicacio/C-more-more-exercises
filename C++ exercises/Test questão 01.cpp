#include <iostream>
#include <string>

class ContaPoupanca {
private:
    double saldo;
    std::string numeroConta;
    std::string nomeTitular;

public:
    ContaPoupanca(std::string _numeroConta, std::string _nomeTitular) : saldo(0.0), numeroConta(_numeroConta), nomeTitular(_nomeTitular) {}

// Depósito
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

// Saldo para consulta
    double consultarSaldo() const {
        return saldo;
    }
//  1% ao mês
    void atualizarSaldoBaixaTaxa() {
        saldo *= 1.01;
    }
// 10% ao mês
    void atualizarSaldoAltaTaxa() {
        saldo *= 1.10;
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

    ContaPoupanca contaPoupanca(numeroConta, nomeTitular);

    int escolha;
    do {
        std::cout << "\nEscolha uma operacao:\n";
        std::cout << "1. Depositar\n";
        std::cout << "2. Sacar\n";
        std::cout << "3. Consultar saldo\n";
        std::cout << "4. Atualizar saldo com 1% ao mes\n";
        std::cout << "5. Atualizar saldo com 10% ao mes\n";
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
            case 4:
                contaPoupanca.atualizarSaldoBaixaTaxa();
                std::cout << "Saldo atualizado com 1% ao mes." << std::endl;
                break;
            case 5:
                contaPoupanca.atualizarSaldoAltaTaxa();
                std::cout << "Saldo atualizado com 10% ao mes." << std::endl;
                break;
            case 0:
                std::cout << "Finalizando..." << std::endl;
                break;
            default:
                std::cout << "Opcao inserida nao eh valida!" << std::endl;
                break;
        }
    } while (escolha != 0);

    return 0;
}
