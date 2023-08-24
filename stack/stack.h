#ifndef STACK_H_
#define STACK_H_

#include <vector>
#include <iostream>

/**
 * class Stack - A generic stack data structure.
 * @top: The index of the top element.
 * @_size: The current size of the stack.
 * @_stack: The vector used to store the stack elements.
 * @emptyValue: The value representing an empty slot in the stack.
 * @dataType: The type of data stored in the stack
 */

template<class dataType>
class Stack {
private:
    int top; 
    int _size;
    std::vector<dataType> _stack;
    dataType emptyValue;

public:
    /**
     * Stack Constructor - Initializes a stack with a given size and empty value.
     * @size: The maximum size of the stack.
     * @emptyVal: The value representing an empty slot.
     */
    Stack(int size, dataType emptyVal) : top{ -1 }, _size{ 0 }, _stack(size, emptyVal),
        emptyValue{ emptyVal } {
    }

    /**
     * isEmpty - Checks if the stack is empty.
     * Return: True if the stack is empty, otherwise false.
     */
    bool isEmpty() {
        return _size == 0;
    }

    /**
     * isFull - Checks if the stack is full.
     * Return: True if the stack is full, otherwise false.
     */
    bool isFull() {
        return top == int(_stack.size() - 1);
    }

    /**
     * push - Pushes data onto the stack.
     * @data: The data to be pushed onto the stack.
     * @throws: std::out_of_range if the stack is already full.
     */
    void push(dataType data) {
        if (!isFull()) {
            _stack.at(top + 1) = data;
            _size++;
            top++;
        }
        else throw std::out_of_range("Stack Overflow");
    }

    /**
     * pop - Pops the top element from the stack.
     * @throws: std::out_of_range if the stack is empty.
     */
    void pop() {
        if (!isEmpty()) {
            _stack.at(top) = emptyValue;
            top--;
            _size--;
        }
        else throw std::out_of_range("Stack is Empty");
    }

    /**
     * display - Displays the contents of the stack.
     */
    void display() {
        std::cout << "[";
        if (!isEmpty()) {
            for (size_t i = 0; i < _stack.size(); i++) {
                std::cout << _stack.at(i);
                if (i != _stack.size() - 1)
                    std::cout << ", ";
            }
        }
        std::cout << "]" << std::endl;
    }

    /**
     * size - Gets the current size of the stack.
     * Return: The size of the stack.
     */
    size_t size() {
        return this->_size;
    }
};

#endif
