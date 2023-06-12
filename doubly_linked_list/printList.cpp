#include <iostream>
#include "dLinkedList.h"

void dLinkedList::printLoc()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        std::cout << temp->data << "  " << temp << std::endl;

        temp = temp->next;
    }
}