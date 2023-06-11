#include "dLinkedList.h"
#include <iostream>
/**
 *pushFront - Insert new node at the beginning of the list
 * @newNode: Node to be inserted
 * @newData: Data to be inserted
 */

void dLinkedList::pushFront(Node *newNode)
{
    try
    {
        if (head == nullptr)
        { throw 0; }
    }
    catch (int emptyList)
    {
        std::cerr << "Error: cannot pushFront() in an empty list. Try pushBack() instead\n";
    }

    head->previous = newNode;
    newNode->next = head;
    newNode->previous = nullptr;
    head = newNode;
    length++;
}

void dLinkedList::pushFront(const int newData)
{
    try
    {
        if (head == nullptr)
        { throw 0; }
    }
    catch (int emptyList)
    {
        std::cerr << "Error: cannot pushFront() in an empty list. Try pushBack() instead\n";
    }

    Node *newNode = new Node;
    newNode->data = newData;
    head->previous = newNode;
    newNode->previous = nullptr;
    newNode->next = head;
    head = newNode;
    length++;
}
