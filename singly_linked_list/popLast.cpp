#include "sLinkedList.h"
#include <iostream>

/**
 * popLast - Removes last element in the list
 * Throws an exception of "Empty list" if list is empty
 */

void sLinkedList::popLast()
{
    try
    {
        if (head == nullptr)
            throw 0;

        Node *first = head;
        Node *second = nullptr;

        while (first->next->next != nullptr)
        {
            first = first->next;
        }
        second = first->next;
        first->next = nullptr;
        delete (second);
    }

    catch (int emptyList)
    {
        std::cerr << "Error: Cannot pop an empty list\n";
    }
}