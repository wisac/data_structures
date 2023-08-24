#ifndef STACK_H_
#define STACK_H_

#include <vector>
#include <iostream>
#include <stdexcept>

/**
 * @brief A templated stack implementation.
 * @tparam dataType The type of data stored in the stack.
 */
template<class dataType>
class Stack {
private:
    int top; /**< Index of the top element. */
    int _size; /**< Current size of the stack. */
    std::vector<dataType> _stack; /**< The underlying container for the stack. */
    dataType emptyValue; /**< Value indicating an empty slot in the stack. */

public:
    /**
     * @brief Constructor for the Stack class.
     * @param size The maximum size of the stack.
     * @param emptyVal The value representing an empty slot.
     */
    Stack(int size, dataType emptyVal) : top{ -1 }, _size{ 0 }, _stack(size, emptyVal),
        emptyValue{ emptyVal } {
    }

    /**
     * @brief Checks if the stack is empty.
     * @return True if the stack is empty, false otherwise.
     */
    bool isEmpty() {
        return _size == 0;
    }

    /**
     * @brief Checks if the stack is full.
     * @return True if the stack is full, false otherwise.
     */
    bool isFull() {
        return top == int(_stack.size() - 1);
    }

    /**
     * @brief Pushes data onto the stack.
     * @param data The data to be pushed onto the stack.
     * @throw std::out_of_range if the stack is already full.
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
     * @brief Pops the top element from the stack.
     * @throw std::out_of_range if the stack is empty.
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
     * @brief Displays the contents of the stack.
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
     * @brief Gets the current size of the stack.
     * @return The size of the stack.
     */
    size_t size() {
        return this->_size;
    }


    /**
     * @brief Gets the current element on top of the stack.
     * @return The current element on top of stack.
    */
    dataType peek() {
        if (!isEmpty()) return _stack.at(top);
        throw std::out_of_range("Stack is empty");
    }

    /**
     * @brief Removes all elements from the stack and initialize the stack with empty values
    */
    void clear() {
        _stack.clear();
        _stack.resize(_stack.capacity(), emptyValue);
        _size = 0;
        top = -1;
    }

    /**
    * @brief Extends the size of the stack.
    * @param newSize The size of the stack after extension.
    */
    void resize(size_t newSize) {
        if (newSize < _stack.size()) {
            throw std::invalid_argument("New size cannot be less than current stack size.");
        }
        _stack.resize(newSize, emptyValue);
    }


};

#endif
