// list.h

#ifndef LIST_H_
#define LIST_H_

#include <cstddef>

typedef int Item;

struct Node {
    Item item;
    Node * next;
};

class List {
private:
    Node * pHead;              // Head of the list is the first node's address.
public:
    List(void) {pHead = NULL;}
    bool isEmpty(void) const {return NULL == pHead;}
    void add(const Item & it);
    void empty(void);
    void visit(void (* pf)(Item & it));
};

#endif
