#include "stock.h"
#include <iostream>
using namespace std;


Stock::Stock(){
    length = 0;
    structure = new ItemType[MAX_SIZE];
}

Stock::~Stock(){
    delete[] structure;
}

bool Stock::isEmpty() const{
    return length == 0;
}
bool Stock::isFull() const{
    return length == MAX_SIZE;
}
void Stock::print() const{
    if(isEmpty()){
        cout << "Pilha vazia!" << endl;
    }else{
        cout << "Pilha atual: ";    
    for(int i = 0; i < length; i++){
            cout << structure[i] << " ";
        }
        cout << endl;
    }

}
void Stock::push(ItemType item){
    if(isFull()){
        cout << "Pilha cheia!" << endl;
    }else{
        structure[length] = item;
        length++;
    }
}
ItemType Stock::pop(){
    if(isEmpty()){
        cout << "Pilha vazia!" << endl;
        return '\0'; // Retorna um valor nulo para indicar que a pilha está vazia
    }else{  
        length--;
        return structure[length];
    }
}
