#include "sLinkedList.h"
#include <iostream>
/**
 * deleteList - Removes all elements from the list making it empty
 * Displays an error message if list is already empty
*/
void sLinkedList::deleteList()
{
    if (head == nullptr)
    {
        std::cerr << "Error: List is already empty\n";
        return;
    }
    Node *temp = new Node();
    while (head->next != nullptr)
    {

        temp = head->next;
        delete (head);
        head = temp;
    }
    head = nullptr;
    length = 0;
}