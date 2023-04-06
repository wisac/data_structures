#include "sLinkedList.h"
#include <iostream>

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
}