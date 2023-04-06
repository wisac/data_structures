#include "sLinkedList.h"

/**
 * pushBack - Insert a new node to the end of the list
 * @newNode: Node to be inserted when node is given
 * @newData: Data to be inserted when a data (int) is given
 * 
 */

void sLinkedList::pushBack(Node *newNode)
{
    // tail = head so that we can use tail to tranverse the list without moving head
   

    newNode->next = nullptr;

    // if list is empty
    if (head == nullptr)
    {
        head = newNode;
        length++;
        return;
    }

    Node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }

    tail->next = newNode;
    length++;
}





void sLinkedList::pushBack(const int newData)
{

    Node *newNode = new Node();

    newNode->data = newData;

    newNode->next = nullptr;

//if list empty
    if (head == nullptr)
    {
        head = newNode;
        length++;
        return;
    }

    // tail = head so that we can use tail to tranverse the list without moving head
    Node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }

    tail->next = newNode;
    length++;
}