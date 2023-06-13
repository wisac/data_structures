#include "dLinkedList.h"
#include <iostream>
/**
 * popLast - Removes last element in the list
 * Throws an exception of "Empty list" if list is empty
 */

void dLinkedList::popLast()
{
    try
    {
        if (head == nullptr)
        {
            throw 0;
        }

        Node *last = tail;
        Node *beforeTail = tail->previous;

        beforeTail->next = nullptr;
        last->previous = nullptr;
        tail = beforeTail;
        delete (last);
        length--;
    }
    catch (int emtpyList)
    {
        std::cerr << "Error: Cannot pop an empty list\n";
    }
}