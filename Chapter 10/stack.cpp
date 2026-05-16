// stack.cpp
// Compile along with exercise5.cpp
// Stack class methods.

#include "stack.h"

Stack::Stack(void)
{
    top = 0;
}

bool Stack::isEmpty(void) const
{
    return 0 == top;
}

bool Stack::isFull(void) const
{
    return MAX == top;
}

void Stack::push(const Item & item)
{
    if (!isFull()) {
        items[top] = item;
        top++;
    }
}

Item Stack::pop(void)
{
    Item item = {0};
    
    if (!isEmpty()) {
        top--;
        item = items[top];
    }

    return item;
}
