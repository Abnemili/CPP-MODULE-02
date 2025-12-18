# 🎯 CPP Module 02 - Ad-hoc Polymorphism & Orthodox Canonical Form

```
███╗   ███╗ ██████╗ ██████╗ ██╗   ██╗██╗     ███████╗     ██████╗ ██████╗ 
████╗ ████║██╔═══██╗██╔══██╗██║   ██║██║     ██╔════╝    ██╔═████╗╚════██╗
██╔████╔██║██║   ██║██║  ██║██║   ██║██║     █████╗      ██║██╔██║ █████╔╝
██║╚██╔╝██║██║   ██║██║  ██║██║   ██║██║     ██╔══╝      ████╔╝██║██╔═══╝ 
██║ ╚═╝ ██║╚██████╔╝██████╔╝╚██████╔╝███████╗███████╗    ╚██████╔╝███████╗
╚═╝     ╚═╝ ╚═════╝ ╚═════╝  ╚═════╝ ╚══════╝╚══════╝     ╚═════╝ ╚══════╝
```

> *"In C++, we don't just write classes. We craft them with the precision of a Swiss watchmaker."* 🇨🇭⌚

## 📚 Table of Contents
- [Overview](#-overview)
- [What's Cooking](#-whats-cooking)
- [Exercises Completed](#-exercises-completed)
- [Compilation](#-compilation)
- [Key Concepts](#-key-concepts)
- [Resources](#-resources)

## 🌟 Overview

Welcome to **CPP Module 02**, where we dive deep into the mystical waters of **ad-hoc polymorphism**, **operator overloading**, and the sacred **Orthodox Canonical Form** (OCF). This module is all about making your classes behave like built-in types while maintaining proper resource management.

**Current Progress:** ⚡ 3/4 Exercises Complete

## 🍳 What's Cooking?

This module introduces:
- **Fixed-point numbers** - Because floats are too mainstream
- **Operator overloading** - Teaching old operators new tricks
- **Orthodox Canonical Form** - The four sacred methods every class should have
- **Binary Space Partitioning (BSP)** - Geometry meets C++ (Coming Soon™)

## ✅ Exercises Completed

### Exercise 00: My First Class in Orthodox Canonical Form
```cpp
Fixed fixed; // Default constructor
Fixed copy(fixed); // Copy constructor  
Fixed assigned = fixed; // Copy assignment operator
// Destructor called automatically
```
**Status:** ✅ **DONE**

Implemented the Orthodox Canonical Form (OCF) for a `Fixed` class that represents fixed-point numbers. This exercise teaches the foundation of proper class design in C++.

**Key Features:**
- Default constructor
- Copy constructor
- Copy assignment operator
- Destructor
- Private integer to store fixed-point value
- Static constant integer for fractional bits (8 bits)

---

### Exercise 01: Towards a More Useful Fixed-point Number Class
```cpp
Fixed a;
Fixed const b(10);
Fixed const c(42.42f);
Fixed const d(b);

std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
```
**Status:** ✅ **DONE**

Enhanced the `Fixed` class with constructors for different types and conversion functions.

**Key Features:**
- Integer constructor
- Float constructor
- `toInt()` member function
- `toFloat()` member function
- Overloaded insertion operator (`<<`) for output streams

---

### Exercise 02: Now We're Talking
```cpp
Fixed a;
Fixed const b(Fixed(5.05f) * Fixed(2));

std::cout << ++a << std::endl;
std::cout << a++ << std::endl;
std::cout << (a > b) << std::endl;
std::cout << Fixed::max(a, b) << std::endl;
```
**Status:** ✅ **DONE**

Went full operator overload mode! Implemented comparison, arithmetic, and increment/decrement operators.

**Operators Implemented:**
- **Comparison:** `>`, `<`, `>=`, `<=`, `==`, `!=`
- **Arithmetic:** `+`, `-`, `*`, `/`
- **Increment/Decrement:** `++`, `--` (both pre and post)
- **Static member functions:** `min()` and `max()`

---

### Exercise 03: BSP (Binary Space Partitioning)
**Status:** 🚧 **COMING SOON**

Will implement a function to determine if a point is inside a triangle using Binary Space Partitioning.

## 🔨 Compilation

Each exercise compiles independently:

```bash
# Exercise 00
cd ex00 && make && ./fixed

# Exercise 01
cd ex01 && make && ./fixed

# Exercise 02
cd ex02 && make && ./fixed

# Exercise 03 (when completed)
cd ex03 && make && ./bsp
```

**Compiler flags used:** `-Wall -Wextra -Werror -std=c++98`

## 🧠 Key Concepts

### Orthodox Canonical Form (OCF)
The four horsemen of proper C++ class design:
1. **Default Constructor** - Creates objects from thin air
2. **Copy Constructor** - Clones objects like Dolly the sheep
3. **Copy Assignment Operator** - Updates existing objects
4. **Destructor** - Cleans up the mess

### Fixed-point Arithmetic
Why use fixed-point when we have floats?
- **Predictable performance** - No floating-point surprises
- **Deterministic** - Same input = same output, always
- **Embedded systems friendly** - Some systems don't have FPUs

### Operator Overloading
Making custom types feel like native types:
```cpp
Fixed a(2), b(3);
Fixed c = a + b;  // Just like integers!
```

## 📖 Resources

- [Orthodox Canonical Form](https://www.francescmm.com/orthodox-canonical-class-form/)
- [Operator Overloading in C++](https://en.cppreference.com/w/cpp/language/operators)
- [Fixed-point Arithmetic](https://en.wikipedia.org/wiki/Fixed-point_arithmetic)

---

<div align="center">

**Made with ☕ and 💻 at 42 School**

*If this code compiles, it's a miracle. If it works, it's a bigger miracle.*

[![42 Profile](https://img.shields.io/badge/42-Profile-000000?style=for-the-badge&logo=42&logoColor=white)](https://profile.intra.42.fr/)

</div>