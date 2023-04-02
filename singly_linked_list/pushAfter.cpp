#include "sLinkedList.h"
#include <iostream>
/**
 * pushAfter - Inserts a new node after a given node
 * @newNode: Node to be inserted
 * @newData: Data to be inserted
 * @newNode: Node to be inserted
 * @previousNode: Node to after which new node will be inserted
 */

void sLinkedList::pushAfter(Node *previousNode, Node *newNode)
{
    newNode->next = previousNode->next;
    previousNode->next = newNode;
}

void sLinkedList::pushAfter(Node *previousNode, const int newData)
{
    Node *newNode = new Node();
    newNode->data = newData;

    newNode->next = previousNode->next;
    previousNode->next = newNode;
}