#include "dLinkedList.h"
#include <iostream>
/**
 * pushAfter - Inserts a new node after a given node
 * @newNode: Node to be inserted
 * @newData: Data to be inserted
 * @previousNode: Node to after which new node will be inserted
 * @index : Position after which new data would be inserted
 */
void dLinkedList::pushAfter(Node *previousNode, Node *newNode)
{
    if (previousNode == tail)
    {
        pushBack(newNode);
        return;
    }
    newNode->next = previousNode->next;
    previousNode->next->previous = newNode;
    newNode->previous = previousNode;
    previousNode->next = newNode;
    length++;
}

void dLinkedList::pushAfter(Node *previousNode, const int newData)
{
    if (previousNode == tail)
    {
        pushBack(newData);
        return;
    }
    Node *newNode = new Node();
    newNode->data = newData;
    newNode->next = previousNode->next;
    previousNode->next->previous = newNode;
    newNode->previous = previousNode;
    previousNode->next = newNode;
    length++;
}

// void dLinkedList::pushAfter(const int index, const int givenData)
// {

// }
