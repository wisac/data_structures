#include "sLinkedList.h"
#include <iostream>
/**
 * pushAfter - Inserts a new node after a given node
 * @newNode: Node to be inserted
 * @newData: Data to be inserted
 * @newNode: Node to be inserted
 * @previousNode: Node to after which new node will be inserted
 * @dataBefore: Data after which new data would be inserted
 * @dataGiven: Data to be inserted
 */

void sLinkedList::pushAfter(Node *previousNode, Node *newNode)
{
    newNode->next = previousNode->next;
    previousNode->next = newNode;
    length++;
}

void sLinkedList::pushAfter(Node *previousNode, const int newData)
{
    Node *newNode = new Node();
    newNode->data = newData;

    newNode->next = previousNode->next;
    previousNode->next = newNode;
    length++;
}

void sLinkedList::pushAfter(const int dataBefore, const int givenData)
{
    Node *current = head;
    while (current != nullptr)
    {
        if (current->data == dataBefore)
        {
            Node *newNode = new Node();
            newNode->data = givenData;
            newNode->next = current->next;
            current->next = newNode;
            length++; 
            return; 
        }
        current = current->next;
    }

     std::cerr << "Error: Cannot insert after  "<< dataBefore<< ". Because "<<dataBefore<< " was not found in the list\n";
}