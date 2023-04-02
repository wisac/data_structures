#include "sLinkedList.h"
#include <iostream>

/**
 *pushFront - Insert new node at the beginning of the list
 * @newNode: Node to be inserted
 * @newData: Data to be inserted
 */

void sLinkedList::pushFront(const int newData)
{
    try
    {
        if (head == nullptr)
        {
            throw 0;
        }

        Node *newNode = new Node();

        newNode->data = newData;
        newNode->next = head;
        head = newNode;
    }

    catch (int emptyList)
    {
        std::cerr << "Error: cannot pushFront() in an empty list. Try pushBack() instead\n";
    }
}

void sLinkedList::pushFront(Node *newNode)
{
    try
    {
        if (head == nullptr)
        {
            throw 0;
        }

        newNode->next = head;
        head = newNode;
    }

    catch (int emptyList)
    {
        std::cerr << "Error: cannot pushFront() in an empty list. Try pushBack() instead\n";
    }
}