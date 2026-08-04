#include "item_Type.h"


const int MAX_SIZE = 100;


class Stock{
    public:
        Stock();
        ~Stock();
        bool isEmpty() const;
        bool isFull() const;
        void print() const;
    
        void push(ItemType);
        ItemType pop();
    private:
        int length;
        ItemType* structure;
};