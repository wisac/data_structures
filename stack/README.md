# Stack Data Structure

This folder contains a templated stack implementation in C++. The stack data structure follows the Last-In-First-Out (LIFO) principle and supports basic stack operations such as push, pop, peek, clear, resize, and more.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Getting Started](#getting-started)
- [Usage](#usage)

## Introduction

A stack is a fundamental data structure that allows you to store and retrieve elements in a last-in-first-out (LIFO) manner. This implementation provides a flexible stack that can be used with various data types. It includes methods for pushing and popping elements, checking if the stack is empty or full, and more.

## Features

- Templated stack implementation for flexibility with different data types.
- Basic stack operations such as push, pop, isEmpty, isFull, peek, clear, and resize.
- Customizable maximum capacity of the stack.
- Detailed error handling using C++ exceptions.

## Getting Started

1. Clone this repository to your local machine.
2. Include the `stack.h` header file in your C++ project.

## Usage

Here's an example of how to use the stack:

```cpp
#include "stack.h"

int main() {
    // Create a stack of integers with a maximum size of 10
    Stack<int> intStack(10, 0);

    intStack.push(42);
    intStack.push(15);
    intStack.push(30);

    std::cout << "Top element: " << intStack.peek() << std::endl;
    intStack.pop();

    intStack.display();

    intStack.clear();

    intStack.resize(20);

    return 0;
}
