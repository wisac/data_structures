#ifndef _DLINKEDLIST_H_
#define _DLINKEDLIST_H_
#include "node.h"
/**
 * dLinkedList - Doubly linked list class
 * @head : node pointer to the first node in the list
 * @tail : Node pointer to the last node in the list
 * @length : Length of the list
 * 
 * @pushBack - Adds a new node to the end of the list
 * @pushFront - Adds a new node to the beginning of the list
 * @newNode : Node to be inserted
 * @newData : Data to be inserted
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
    // void pushAfter(Node *previousNode, Node *newNode);
    // void pushAfter(Node *previousNode, const int newData);
    // void pushAfter(const int dataBefore, const int givenData);
    //  void pushBefore(Node *previousNode, Node *newNode);
    // void pushBefore(Node *previousNode, const int newData);

};

#endif