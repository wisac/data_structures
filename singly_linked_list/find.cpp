#include "sLinkedList.h"
/**
 *@find - Searches the entire list for a given data.
 *         Return: pointer to data if it is found;
 *         Otherwise: Return null
 */

int *sLinkedList::find(int data)
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