**Singly linked list implementation in C++**


*A singly linked list is a type of linked list that is **unidirectional**, that is, it can be **traversed[access elements]** in only one direction from head to the last node (tail).*

*Each element in a linked list is called a **node.** A single node contains data and a pointer to the next node which helps in maintaining the structure of the list.*

*The first node is called the **head**; it points to the first node of the list and helps us access every other element in the list. The last node, also sometimes called the **tail**, points to NULL which helps us in determining when the list ends.*


<img src="https://media.geeksforgeeks.org/wp-content/uploads/20220816144425/LLdrawio.png" alt="linked list image">



**Basic Operations on Singly Linked List**
<ol>
<li><b>Transversal</b>: To traverse all the nodes one after another.</li>
<li><b>Insertion</b>: To add a node at the given position.</li>
<li><b>Deletion</b>: To delete a node.</li>
<li><b>Searching</b>: To search an element(s) by value.</li>
<li><b>Sorting</b>: To arrange nodes in a linked list in a specific order.</b></li>
<li><b>Updating</b>: To update a node</li>

<li><b>Merging</b>: To merge two linked lists into one.</li>
</ol>
<br>
<br>

***USAGE***
*Step 1: Include the header file #sLinkedList.h*

***0. To create a LinkedList:***
```#include "sLinkedList.h"
int main(void)
{
    sLinkedList Ages;

    return 0;
}
```
***1. Insertion***

*To insert at the end of the list:*
Call ```pushBack()``` method and pass in the data to be inserted. 
<br>

*Time complexity: O(1)*
```#include "sLinkedList.h"
int main(void)
{
    sLinkedList Ages;

    Ages.pushBack(10); //Add 10 to list
    Ages.pushBack(25); //Add 25 to list
    

    return 0;
}
```
Output:
```[10, 25] ```

<br>
<br>

*To insert at the beginning of the list:*
Call ```pushFront()``` method and pass in the data to be inserted. 

*NB: ```pushFront()``` does not work on empty list*
<br>

*Time complexity: O(n)*
```#include "sLinkedList.h"
int main(void)
{
    sLinkedList Ages;
    
    Ages.pushBack(10); //Add 10 to end of list
    Ages.pushBack(25); //Add 25 to end of list

    Ages.pushFront(2); //Add 2 to beginning of list

    Ages.printList();

    return 0;
}
```
Output:
```[2, 10, 25] ```
<br><br>

*To insert after a given node or data*
Call ```pushAfter()``` method and pass in the previous node or data and the new data to be inserted. 
<br>

*Time complexity: O(n)*
```#include "sLinkedList.h"
int main(void)
{
    sLinkedList Ages;
    
    Ages.pushBack(10); //Add 10 to end of list
    Ages.pushBack(25); //Add 25 to end of list

    Ages.pushFront(2); //Add 2 to beginning of list

    Ages.pushAfter(10,9) //Inserts 9 after 10 in the list

    Ages.printList(); //Print items in list

    return 0;
}
```
Output:
```[2, 10, 9, 25] ```
<br>
<br>
<br>
<br>

***2. Deletion***
*To remove a node from the end of the list*
Call ```popBack()``` method 
<br>

*Time complexity: O(n)*
```#include "sLinkedList.h"
int main(void)
{
    sLinkedList Ages;
    
    Ages.pushBack(11); //Add 11 to end of list
    Ages.pushBack(17); //Add 17 to end of list
    Ages.pushBack(19); //Add 19 to end of list
    Ages.printList();

    Ages.popBack(); //Removes 19 from end of list
    Ages.printList();

    Ages.popBack(); //Removes 17 from end of list
    Ages.printList();

   

    return 0;
}
```
Output:
```[11, 17, 19]
   [11, 17]
   [11]
 ```

<br>
<br>

*To remove a node from the beginning of the list*
Call ```popFront()``` method 
<br>

*Time complexity: O(1)*
```#include "sLinkedList.h"
int main(void)
{
    sLinkedList Ages;
    
    Ages.pushBack(11); //Add 11 to end of list
    Ages.pushBack(17); //Add 17 to end of list
    Ages.pushBack(19); //Add 19 to end of list
    Ages.printList();

    Ages.popFront(); //Removes 11 from end of list
    Ages.printList();

    Ages.popFront(); //Removes 17 from end of list
    Ages.printList();

   

    return 0;
}
```
Output:
```[11, 17, 19]
   [17, 19]
   [19]

 ```

<br>
<br>

*To remove a node anywhere in the list*
Call ```pop()``` method and pass in the node or data to be removed
<br>


*Time complexity: O(n)*
```#include "sLinkedList.h"
int main(void)
{
    sLinkedList Ages;
    
    Ages.pushBack(11); //Add 11 to end of list
    Ages.pushBack(17); //Add 17 to end of list
    Ages.pushBack(19); //Add 19 to end of list
    Ages.pushFront(22) //Add 22 to beginning of list
    Ages.printList();

    Ages.pop(17); //Removes 17 from end of list
    Ages.printList();

    Ages.pop(19); //Removes 19 from end of list
    Ages.printList();

   

    return 0;
}
```
Output:
```[22, 11, 17, 19]
   [22, 11, 19]
   [22,11]

 ```
<br>
<br>

*To remove all nodes from in the list(free the list)*
Call ```deleteList()``` method on the list
<br>

*Time complexity: O(n)*
```#include "sLinkedList.h"
int main(void)
{
    sLinkedList Ages;
    
    Ages.pushBack(11); //Add 11 to end of list
    Ages.pushBack(17); //Add 17 to end of list
    Ages.pushBack(19); //Add 19 to end of list
    Ages.pushFront(22) //Add 22 to beginning of list
    Ages.printList();

    Ages.deleteList(); //Removes all elements from the list
    Ages.printList();
   

    return 0;
}
```
Output:
```[22, 11, 17, 19]
   []
 ```

<br>
<br>
<br>

***3. Searching***
*To find an data in the list*
Call ```find()``` method and pass in the data to find
Returns pointer to the data which you can dereference to get the data

*Time complexity: O(n)*
```#include "sLinkedList.h"
int main(void)
{
    sLinkedList Ages;
    
    Ages.pushBack(11); //Add 11 to end of list
    Ages.pushBack(17); //Add 17 to end of list
    Ages.pushBack(19); //Add 19 to end of list
    Ages.pushFront(22) //Add 22 to beginning of list
    Ages.printList();

    int *ptr = Ages.find(22);//assinging the memory location of 22 to ptr
    

   std::cout << prt << std::endl; //printing memory loc of 22
   std::cout << *ptr <<std::endl; //dereferencing ptr


    return 0;
}
```
Output:
```[22, 11, 17, 19]
   0x713ae2321b0
   22
 ```
 <br>
 <br>
 <br>

***3. Updating***
*To update data in the list*
Call ```find()``` method and pass in the data to find
Derefence the returned pointer and update the value pointed to
<br>

*Time complexity: O(n)*
```#include "sLinkedList.h"
int main(void)
{
    sLinkedList Ages;
    
   
    Ages.pushBack(17); //Add 17 to end of list
    Ages.pushBack(19); //Add 19 to end of list
    Ages.pushFront(22) //Add 22 to beginning of list
    Ages.printList();

    int *ptr = Ages.find(17);//assinging the memory location of 17 to ptr
    
    *ptr = 55; //Derefencing and updating data pointed to by ptr with 14
   
    Ages.printList;


    return 0;
}
```
Output:
```
[11, 17, 19]
[11, 55,19]
```









References:

Introduction to Singly Linked List - GeeksforGeeks. (n.d.). GeeksforGeeks. https://www.geeksforgeeks.org/data-structures/linked-list/singly-linked-list/

What is a singly linked list? (n.d.). Educative: Interactive Courses for Software Developers. https://www.educative.io/answers/what-is-a-singly-linked-list

Types of Linked List and Operation on Linked List. (n.d.). Types of Linked List and Operation on Linked List. https://afteracademy.com/blog/types-of-linked-list-and-operation-on-linked-list