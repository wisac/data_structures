#ifndef _DLINKEDLIST_H_
#define _DLINKEDLIST_H_
#include "node.h"
/**
 * dLinkedList - Doubly linked list class
 * @head : node pointer to the first node in the list
 * @tail : Node pointer to the last node in the list
 * @length : Length of the list
 * 
 * @pushBack - Inserts a new node at the end of the list
 * @pushFront - Insert a new node at the beginning of the list
 * @pushAfter - Inserts a new node after a given node
 * @newNode : Node to be inserted
 * @newData : Data to be inserted
 * @previousNode : Given node after which new node would be inserted
 */

class dLinkedList
{
    Node *head;
    Node *tail;
    int length;

public:
    dLinkedList();
    //insertion methods
    void pushBack(Node *newNode);
    void pushBack(const int newData);
    void pushFront(Node *newNode);
    void pushFront(const int newData);
    void pushAfter(Node *previousNode, Node *newNode);
    void pushAfter(Node *previousNode, const int newData);
    void pushAfter(const int index, const int givenData);
    void printLoc();
    //  void pushBefore(Node *previousNode, Node *newNode);
    // void pushBefore(Node *previousNode, const int newData);

};

#endif