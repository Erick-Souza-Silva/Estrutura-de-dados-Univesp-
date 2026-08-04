#include "item_Type.h"

const int MAX_ITEMS = 100;

class Queue
{
    public:
        Queue();
        ~Queue();
        bool isEmpty() const;
        bool isFull() const;
        void print() const;

        void enqueue(itemType);
        itemType dequeue();
    private:
        int front;
        int back;
        itemType* structure;
};