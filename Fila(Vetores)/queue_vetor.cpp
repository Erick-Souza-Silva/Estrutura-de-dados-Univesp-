#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue(){
    front = 0;
    back = 0;
    structure = new itemType[MAX_ITEMS];
}
Queue::~Queue(){
    delete[] structure;
}

bool Queue::isEmpty() const{
    return front == back;
}
bool Queue::isFull() const{
    return (back + 1) % MAX_ITEMS == front;
}
void Queue::enqueue(itemType item){
    if(!isFull()){
        structure[back] = item;
        back = (back + 1) % MAX_ITEMS;
    }else{
        cout << "Fila cheia!" << endl;
    }
}
itemType Queue::dequeue(){
    if(!isEmpty()){
        itemType item = structure[front];
        front = (front + 1) % MAX_ITEMS;
        return item;
    }else{
        cout << "Fila vazia!" << endl;
        return '\0';
    }
}
void Queue::print() const{
    if(isEmpty()){
        cout << "Fila vazia!" << endl;
    }else{
        cout << "Fila atual: ";
        for(int i = front; i < back; i++){
            cout << structure[i % MAX_ITEMS] << " ";
        }
        cout << endl;
    }
}