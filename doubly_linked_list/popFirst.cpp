#include "dLinkedList.h"
#include <iostream>

/**
 * popFirst - Removes the first element in the list
 */

void dLinkedList::popFirst()
{   
    try
    {
        if (head == nullptr)  
            throw 0;
        
        Node *temp = head->next;
        temp->previous = nullptr;
        head->next = nullptr;
        delete(head);
        head = temp;
        length--;
    }
    catch(int emptyList)
    {   
        std::cerr << "Error: Nothing to pop, List is empty\n";
    }
}