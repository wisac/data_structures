#include "sLinkedList.h"
#include <iostream>

/**
 * popLast - Removes last element in the list
*/

void sLinkedList::popLast()
{

        Node *first = head;
        Node *second = nullptr;
    
        while (first->next->next != nullptr)
        {
                first = first->next;
        }
        second = first->next;
        first->next = nullptr;
        delete(second);
       

}