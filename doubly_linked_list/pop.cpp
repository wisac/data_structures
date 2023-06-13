#include "dLinkedList.h"
#include <iostream>

/**
 * pop - Removes an element from the list
 * @givenNode : Node pointer to the element to be removed
 * @givenData : Element(int) to be removed
 *
 * Description: Removes an element from the list.
 * Throws an exception of "Empty list error" when list is empty.
 *
 */

void dLinkedList::pop(Node *givenNode)
{
    try
    { // When list is empty
        if (head == nullptr)
        {
            throw 0;
        }

        // When node to remove is head
        if (head == givenNode)
        {
            popFirst();
            return;
        }

        else if (tail == givenNode)
        {
            popLast();
            return;
        }

        // popAfter(givenNode.previous);
        Node *previous = givenNode->previous;
        previous->next = givenNode->next;
        previous->next->previous = previous;
        givenNode->next = nullptr;
        givenNode->previous = nullptr;
        delete (givenNode);
        length--;
    }

    catch (int emptyList)
    {
        std::cerr << "Error: Cannot pop an empty list\n";
    }
}

void dLinkedList::pop(int givenData)
{
    /*Description: It removes the first occurrence of the given data from the list. If there are multipy nodes with same data as given, it removes the first one closest to the head node*/

    try
    { // When list is empty
        if (head == nullptr)
        {
            throw 0;
        }

        // When node to remove is head
        if (head->data == givenData)
        {
            popFirst();
            return;
        }

        // popAfter(givenNode.previous);
        Node *current = head;
        while (current->next != nullptr)
        {
            if (current->next->data == givenData)
            {
                Node *givenNode = current->next;
                Node *previous = givenNode->previous;
                previous->next = givenNode->next;
                previous->next->previous = previous;
                givenNode->next = nullptr;
                givenNode->previous = nullptr;
                delete (givenNode);
                length--;
                return;
            }
            current = current->next;
        }
        
        if (current->data == givenData)
        {
            tail = current->previous;
            tail->next = nullptr;
            current->previous->next = nullptr;
            delete(current);
            length--;
            return;
        }
         std::cout << "Element not found in list\n";
    }

    catch (int emptyList)
    {
        std::cerr << "Error: Cannot pop an empty list\n";
    }
}