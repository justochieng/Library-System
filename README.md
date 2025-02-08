# Online Library-System  

A simple **C++** project that allows users to manage a library with functionalities like adding, searching, borrowing, and returning books.

## Features  
- Add and remove books  
- Search books by title, author, or ISBN  
- Manage user accounts  
- Borrow and return books

## Design Choices
This project follows Object-Oriented Programming principles to ensure modularity, maintainability, and scalability. The system is designed with three main classes. Book, Library, and User to encapsulate relevant data and behavior. Encapsulation ensures that data is managed within appropriate classes, preventing unintended modifications. Abstraction is used to hide complex operations behind simple interfaces, making the system user-friendly. Polymorphism allows different search criteria (e.g., searching by title or author) to be handled through a common interface.

## Installation & Setup  
1. **Clone the repository**  
   ```sh
   git clone https://github.com/justochieng/Library-System.git

## Compiling and running the Program
g++ main.cpp -o library_system

./library_system

## Running Tests
1. Compile and run the test:
g++ test_cases.cpp -o test_cases  
./test_cases
 
