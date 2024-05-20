# SOLID Principles
The SOLID principles are a set of design principles in object-oriented programming (OOP) that help create more maintainable, scalable, and robust software.
## Single Responsibility Principle
A class should have only one reason to change, meaning it should have only one job or responsibility. This principle helps to keep classes focused and manageable, making them easier to understand and maintain. When a class has a single responsibility, it is less likely to be affected by changes in other parts of the system.
## Open-Closed Principle
Software entities (classes, modules, functions, etc.) should be open for extension but closed for modification. This principle encourages developers to write code that can be extended without changing its existing behavior, which reduces the risk of introducing bugs when requirements change.
## Liskov Substitution Principle
Objects of a superclass should be replaceable with objects of a subclass without affecting the correctness of the program. This principle ensures that a subclass can stand in for its superclass without causing errors or unexpected behavior, promoting the reliability of polymorphism
## Interface Segregation Principle
Users should not be forced to depend on interfaces they do not use. This principle encourages the creation of smaller, more specific interfaces rather than large, general-purpose ones. This makes the code more modular and easier to maintain.
## Dependency Inversion Principle
High-level modules should not depend on low-level modules. Both should depend on abstractions. Additionally, abstractions should not depend on details. Details should depend on abstractions. This principle reduces the dependency between high-level and low-level modules by introducing abstractions, leading to more flexible and reusable code.

## Requirements
* C++ 14 or higher

## Instructions to compile and run
* For example:
```
g++ singleResponsibilityPrinciple.cpp -o srp
./srp
```
similiar respective commands to run other principles!
