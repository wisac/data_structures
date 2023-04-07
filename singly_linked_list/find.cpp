#include "sLinkedList.h"
/**
 *find - Searches the entire list for a given data.
 *         Return: pointer to the data if it is found;
 *         Otherwise: Return null
 */

int *sLinkedList::find(const int data)
{
    if (head == nullptr)
    {
        return nullptr;
    }

    Node *temp = head;
    int *dataPtr = nullptr;

    while (temp != nullptr)
    {
        if (temp->data == data)
        {
            dataPtr = &temp->data;
            break;
        }
        temp = temp->next;
    }

    return dataPtr;
}


int *sLinkedList::find(const Node *givenNode)
{
    if (head == nullptr)
    {
        return nullptr;
    }

    if (givenNode == nullptr)
    {
        return nullptr;
    }

    Node *temp = head;

    while(temp != nullptr)
    {
        if (temp == givenNode)
        {
            return &(temp->data);
        }
        temp = temp->next;
    }
    
    return nullptr;   
}