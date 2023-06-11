#include "dLinkedList.h"
/**
 * pushBack - Insert a new node to the end of the list
 * @newNode: Node to be inserted when node is given
 * @newData: Data to be inserted when a data (int) is given
 
 */
void dLinkedList::pushBack(Node *newNode)
{
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
        head->next = nullptr;
        head->previous = nullptr;
        length++;
        return;
    }

    tail->next = newNode;
    newNode->previous = tail;
    tail = newNode;
    tail->next = nullptr;
    length++;
}


void dLinkedList::pushBack(const int newData)
{
    Node *newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;
    newNode->previous = nullptr;

    if (head == nullptr)
    {   
        head = newNode;
        tail = newNode;
        length++;
        return;
    }

    tail->next = newNode;
    newNode->previous = tail;
    tail = newNode;  
    length++; 
}