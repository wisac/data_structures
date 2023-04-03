#include "sLinkedList.h"
#include <iostream>

/**
 * printList = Prints all elements in the list on a new line:
 * If list is, prints an error message to the console.
 * 
*/

void sLinkedList::printList()
{
    if (head == nullptr)
    {
        std::cout << "List is empty\n";

        return;
    }

    Node *temp = head;

    while (temp != nullptr)
    {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
}