#ifndef STACK_H_
#define STACK_H_
#include <vector>
#include <iostream>

/**
 *
*/

template<class dataType>
class Stack {
private:
    int top;
    int _size;
    std::vector<dataType> _stack;
    dataType emptyValue;

public:
    Stack(int size, dataType emptyVal) : top{ -1 }, _size{ 0 }, _stack(size, emptyVal),
        emptyValue{ emptyVal } {
    }

    bool isEmpty() {
        return _size == 0;
    }



    bool isFull() {
        return top == int(_stack.size() - 1);
    }



    void push(dataType data) {
        if (!isFull()) {
            _stack.at(top + 1) = data;
            _size++;
            top++;
        }
        else throw std::out_of_range("Stack Overflow");
    }



    void pop() {
        if (!isEmpty()) {
            _stack.at(top) = emptyValue;
            top--;
            _size--;
        }
        else throw std::out_of_range("Stack is Empty");
    }


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


    size_t size() {
        return this->_size;
    }
};

#endif

