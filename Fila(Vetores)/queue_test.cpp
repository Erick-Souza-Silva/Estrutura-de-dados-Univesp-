#include "Queue.h"
#include <iostream>

using namespace std;

int main() {

    char character;
    Queue queue;
    char queueChar;

    cout << "Digite uma string" << endl;
    cin.get(character);
    while(character != '\n' and !queue.isFull()){
        queue.enqueue(character);
        cin.get(character);
    }

    return 0;
}