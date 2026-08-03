#ifndef TIME_H // Se a constante TIME_H não estiver definida
#define TIME_H // Define a constante TIME_H


class Time{
    
    private: // Seção privada
        int hour; // 0-23
        int minute; // 0-59
        int second; // 0-59

    public: // Seção pública
        Time(int h = 0, int m = 0, int s = 0); // Construtor com valores padrão
        int getHour() const; // Retorna a hora
        int getMinute() const; // Retorna o minuto
        int getSecond() const; // Retorna o segundo
        //Definição dos métodos setHour, setMinute e setSecond
        void setHour(int h); // Define a hora
        void setMinute(int m); // Define o minuto
        void setSecond(int s); // Define o segundo
        //Definição do método print e nextSecond
        void print() const; // Imprime o tempo no formato HH:MM:SS
        void nextSecond(); // Avança o tempo em um segundo

};

#endif