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
        std::cout << "List is empty[]\n";

        return;
    }

    Node *temp = head;

    std::cout << "[";
    while (temp != nullptr)
    {   
        std::cout << temp->data;
        if(temp->next != nullptr)
        {
            std::cout <<", ";
        }
        temp = temp->next;
    }
    std::cout <<"]\n";
}