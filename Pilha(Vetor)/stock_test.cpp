#include "stock.h"
#include <iostream>
using namespace std;

int main(){
    ItemType item;
    Stock stock;
    ItemType stockItems [] = {'A', 'B', 'C', 'D', 'E'};

    for(int i = 0; i < 5; i++){
        stock.push(stockItems[i]);
    }
    stock.print();
    
    

    
    
    
    
    
    return 0;
}