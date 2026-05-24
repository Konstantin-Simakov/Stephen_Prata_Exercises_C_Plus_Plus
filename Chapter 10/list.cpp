// list.cpp
// Compile along with exercise8.cpp.

#include "list.h"

void List::add(const Item & it)
{
    Node * newNode = new Node {it, NULL};
    
    if (isEmpty()) {
        pHead = newNode;
    } else {
        Node * last = pHead;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = newNode;
    }
}

void List::visit(void (* pf)(Item & it))
{
    if (!isEmpty()) {
        Node * iter = pHead;
        while (iter->next != NULL) {
            pf(iter->item);
            iter = iter->next;
        }
        pf(iter->item);
    }
}

void List::empty(void)
{
    if (!isEmpty()) {
        Node * curr = pHead;
        Node * prev = curr;
    
        while (curr->next != NULL) {
            curr = curr->next;
            
            delete prev;
            prev = curr;
        }
        delete prev;
    }
}
