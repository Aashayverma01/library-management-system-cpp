# library-management-system-cpp
A C++-based library management system implementing DSA concepts for efficient book record handling, search, and issue/return operations.


# Library Management System (C++)

## Overview
 This project simulates a basic library system where books can be added, searched, issued, and returned. It demonstrates fundamental Data Structures and Object-Oriented Programming concepts in C++.

## Objective
 
Understand how data structures are applied in real-world scenarios
Implement a structured system using classes and dynamic storage
Simulate real-life library workflows in a simplified environment

## Features
Simple and intuitive interface
Efficient data handling using vectors
Clear separation of logic using classes
Error handling for invalid operations

## Concepts Used

1. Object-Oriented Programming (OOP)
   - Classes and objects are used to model real-world entities
   - Book class represents individual books
   - Library class manages the collection of books

2. Encapsulation
   - Data (book details) and functions are grouped together
   - Improves code organization and security

3. Dynamic Array (Vector)
   - vector<Book> is used to store books dynamically
   - Allows flexible memory usage and easy data handling

4. Linear Search Algorithm
   - Used to search books by ID
   - Traverses the list sequentially
   - Time Complexity: O(n)

5. Boolean State Management
   - Each book has a boolean variable (isIssued)
   - Tracks whether a book is available or issued

6. Modular Programming
   - Functions like addBook(), searchBook(), issueBook()
     divide the program into smaller reusable parts

7. Conditional Statements
   - Used for decision-making (issue/return logic)

8. Menu-Driven Program
   - User interacts with the system through a loop-based menu
   - Enhances usability and interaction

## How to Run
```bash
g++ library.cpp -o output
.\output.exe
