#include <iostream>

// Adicionado o ponto e vírgula (;) no final de cada instrução
int sum(int number1, int number2) { return number1 + number2; }
int sub(int number1, int number2) { return number1 - number2; }
int mul(int number1, int number2) { return number1 * number2; }
int idiv(int number1, int number2) { return number1 / number2; }

int main() {
    int num1, num2;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;

    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;

    std::cout << "\n--- Resultados ---\n";

    // Aqui estamos "chamando" as funções e imprimindo o retorno delas
    std::cout << "Soma: " << sum(num1, num2) << "\n";
    std::cout << "Subtracao: " << sub(num1, num2) << "\n";
    std::cout << "Multiplicacao: " << mul(num1, num2) << "\n";

    // Prevenção contra divisão por zero
    if (num2 != 0) {
        std::cout << "Divisao inteira: " << idiv(num1, num2) << "\n";
    } else {
        std::cout << "Divisao: Nao e possivel dividir por zero!\n";
    }

    return 0;
}
