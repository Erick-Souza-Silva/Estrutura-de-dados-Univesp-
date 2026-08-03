/* Implementação da classe Time */
#include "time.h" // Inclui o arquivo de cabeçalho da classe Time
#include <iostream> // Inclui a biblioteca de entrada e saída padrão

using namespace std;

Time::Time(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
}

/*Geters */
int Time::getHour() const { // Retorna a hora
    return hour;
}
int Time::getMinute() const { // Retorna o minuto
    return minute;
}
int Time::getSecond() const { // Retorna o segundo
    return second;
}

/*Seters */

void Time::setHour(int h){ // Define a hora
    this->hour = h;
}
void Time::setMinute(int m){ // Define o minuto
    this->minute = m;
}
void Time::setSecond(int s){ // Define o segundo
    this->second = s;
}
void Time::print() const { // Imprime o tempo no formato HH:MM:SS
    cout << (hour < 10 ? "0" : "") << hour << ":"
         << (minute < 10 ? "0" : "") << minute << ":"
         << (second < 10 ? "0" : "") << second << endl;
}
void Time::nextSecond() { // Avança o tempo em um segundo
    second++;
    if (second >= 60) {
        second = 0;
        minute++;
        if (minute >= 60) {
            minute = 0;
            hour++;
            if (hour >= 24) {
                hour = 0;
            }
        }
    }
}