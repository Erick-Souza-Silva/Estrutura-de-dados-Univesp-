#include <iostream>


int main(){
int number1;
int number2;

std::cout << "Digite o primemiro numero:";
std::cin >> number1;
std::cout << "Digite o segundo numero:";
std::cin >> number2;

int sum = number1 + number2;
int sub = number1 - number2;
int mut = number1 * number2;
int div = number1 / number2;
int fdiv = (float)number1 / (float)number2;

std::cout << "\n--- Resultados ---\n";
std::cout << "Soma: " << sum << "\n";
std::cout << "Subtracao: " << sub << "\n";
std::cout << "Multiplicacao: " << mut << "\n";
std::cout << "resto" << fdiv << "\n";

if (number1 == number2)
    std::cout << number1 << "==" << number2 << std::endl;
if (number1 != number2)
    std::cout << number1 << "!=" << number2 << std::endl;
if (number1 < number2)
    std::cout << number1 << "<" << number2 << std::endl;
if (number1 > number2)
    std::cout << number1 << ">" << number2 << std::endl;


return 0;
}


