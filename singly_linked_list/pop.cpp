#include "sLinkedList.h"
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

void sLinkedList::pop(Node *givenNode)
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
            Node *toRemove = head;
            head = head->next;
            if (toRemove->next != nullptr)
                delete (toRemove);
            length--;
            return;
        }

        // When node to remove is not head
        Node *current = head;
        while (current->next != nullptr)
        {
            if (current->next == givenNode)
            {
                Node *toRemove = current->next;
                current->next = current->next->next;
                if (toRemove->next != nullptr) // To avoid double call of free()
                    delete (toRemove);
                length--;
                return;
            }

            current = current->next;
        }

        // When item is not found
        std::cout << "Node not found in list\n";
    }

    // Empty list exception handling
    catch (int emptyList)
    {
        std::cerr << "Error: Cannot pop an empty list\n";
    }
}




void sLinkedList::pop(int givenData)
{
    try
    {
        // When list is empty
        if (head == nullptr)
        {
            throw 0;
        }

        //
        if (head->data == givenData)
        {
            Node *toRemove = head;
            head = head->next;
            if (toRemove->next != nullptr)
                delete (toRemove);
            length--;
            return;
        }

        Node *current = head;
        while (current->next != nullptr)
        {
            if (current->next->data == givenData)
            {
                Node *toRemove = current->next;
                current->next = current->next->next;
                if (toRemove->next != nullptr) // To avoid double call of free()
                    delete (toRemove);
                length--;
                return;
            }
            current = current->next;
            
        }

        std::cout << "Element not found in list\n";
    }
    catch (int emptyList)
    {
        std::cerr << "Error: Cannot pop an empty list\n";
    }
}
