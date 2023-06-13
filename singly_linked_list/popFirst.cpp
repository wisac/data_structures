#include "sLinkedList.h"
#include <iostream>

/**
 * popFirst - Removes the first element in the list
 */

void sLinkedList::popFirst()
{
    try
    {
        if (head == nullptr)
        {
            throw -1;
        }

        Node *temp = head->next;
        delete(head) ;
        head = temp; 
        
        length--;
    }
    catch (const int emptyList)
    {
        std::cerr << "Error: Nothing to pop, List is empty\n";
    }
}
