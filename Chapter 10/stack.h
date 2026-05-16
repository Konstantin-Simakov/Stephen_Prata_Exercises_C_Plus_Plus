// stack.h
// Class definition for Stack ADT.

#ifndef STACK_H_
#define STACK_H_

struct Customer {
    char fullname[35];
    double payment;
};

typedef Customer Item;

class Stack {
private:
    enum {MAX = 3};
    Item items[MAX];
    int top;
public:
    Stack(void);
    bool isEmpty(void) const;
    bool isFull(void) const;
    void push(const Item & item);
    Item pop(void);
};

#endif
