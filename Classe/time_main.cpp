#include "time.h"
#include <iostream>
using namespace std;

int main() {
    Time t(23, 59, 59); // Cria um objeto Time com hora, minuto e segundo inicializados
    t.print(); // Imprime o tempo atual
    t.nextSecond(); // Avança o tempo em um segundo
    t.print(); // Imprime o tempo atualizado
   
    t.setHour(12); // Define a hora para 12
    t.setMinute(30); // Define o minuto para 30
    t.setSecond(45); // Define o segundo para 45
    t.print(); // Imprime o tempo atualizado
    
    return 0;
}