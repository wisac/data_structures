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
    Node *tail;
    int length;

public:
    sLinkedList();
    void pushBack(Node *newNode);
    void pushBack(const int newData);
    void pushFront(Node *newNode);
    void pushFront(const int newData);
    void pushAfter(Node *previousNode, Node *newNode);
    void pushAfter(Node *previousNode, const int newData);
    
    void popFirst();
    void popLast();
    void pop(Node *givenNode);
    void pop(int givenData);

    void printList();
    
};

#endif