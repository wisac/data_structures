#ifndef _SLINKEDLIST_H_
#define _SLINKEDLIST_H_
#include "node.h"
/**
 * sLinkedList - Singly linked list class
 * @head : Node pointer to the first node in the list
 * @tail : Node pointer to the last node in the list
 * @length : Length of the list
 *
 * @sLinkedList - No args constructor for initailizing   the list
 *printList - Prints all data in linked list
 * @pushFront - Insert new node at the beginning of the list
 * @pushAfter - Inserts a new node after a given node
 * @pushBack - Insert a new node to the end of the list
 * @deleteList - Frees the list by removing all elements
 * @getLength - Calculates the size of the list
 *             Return: size of list (size_t)
 * @find - Searches the entire list for a given element.
 *          Return the pointer to the data if it is found;
 *          Otherwise: Return null
 * 
 * @newNode: Node to be inserted
 * @newData: Data to be inserted
 * @newNode: Node to be inserted
 * @previousNode: Node to after which new node will be inserted
 * @newData: Data to be inserted
 *
 *
 *
 *
 */

class sLinkedList
{
private:
    Node *head;
    int length;

public:
    sLinkedList();
    void pushBack(Node *newNode);
    void pushBack(const int newData);
    void pushFront(Node *newNode);
    void pushFront(const int newData);
    void pushAfter(Node *previousNode, Node *newNode);
    void pushAfter(Node *previousNode, const int newData);
    void pushAfter(const int dataBefore, const int givenData);
    
    
    void popFirst();
    void popLast();
    void pop(Node *givenNode);
    void pop(int givenData);
    void deleteList();

    void printList();
    unsigned long int getLength();

    int *find(const int data);
    int *find(const Node *givenNode);
    int findIndex(const int data);
    int findIndex(const Node *givenNode);

    
};

#endif