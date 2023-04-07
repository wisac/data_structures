#include "sLinkedList.h"
/**
 * findIndex - Finds the index position of an element in the list
 *          Return: The index of the element; Otherwise return -1
*/

int sLinkedList::findIndex(const int data)
{
    int index = 0;
    Node *temp = head;

    while (temp != nullptr)
    {
        if (temp->data == data)
        {
            return index;
        }
        temp = temp->next;
        index++;

    }
    return -1;
}

int sLinkedList::findIndex(const Node *givenNode)
{
    int index = 0;
    Node *temp = head;

    while(temp != nullptr)
    {
        if (temp == givenNode)
        {
            return index;
        }
        temp = temp->next;
        index++;
    }

    return -1;
}