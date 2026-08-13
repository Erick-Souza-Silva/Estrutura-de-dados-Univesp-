#include "Queue.h"
#include <iostream>
using namespace std;


int main(){
    char Character;
    Queue queue;
    char queueChar;

    cout << "Digite uma string" << endl;
    cin.get(Character);
    while(Character != '\n' and !queue.isFull()){
        queue.enqueue(Character);
        cin.get(Character);
    }
    while(!queue.isEmpty()){
        queueChar = queue.dequeue();
        cout << queueChar;
    }
    cout << endl;
    return 0;
}

