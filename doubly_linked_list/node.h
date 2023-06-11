#ifndef _NODE_H_
#define _NODE_H_
/**
 * class node - A class for all nodes
 * @data : data stored by node
 * @next : node pointer to the next node
 * @previous : node pointer to the previous node
 * @Node : no args constructor for instantiating a new node
 * 
 * Description: Node is a class with data and a node pointer which points to the next node. The member "next" and "previous" also have datas and would have pointers to the next node and previous nodes
*/
class Node 
{
    public:
        int data;
        Node *next;
        Node *previous;

        Node() :data{0}, next{nullptr}, previous{nullptr}{}
};

#endif