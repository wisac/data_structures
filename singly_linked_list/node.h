#ifndef _NODE_H_
#define _NODE_H_
/**
 * class Node - A class for all nodes
 * @data : data stored by current node
 * @next : node pointer to the next node
 * @Node : no args constructor for Node object
 * 
 * Description: Node is a class with data and a node pointer which points to the next node. The member "next" also has data and would have point to the next node 
*/

class Node
{
public:
  int data;
  Node *next;

  Node() :data{0}, next{nullptr}{};
};


#endif