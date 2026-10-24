# 🧐 Types-CPP06 ![Static Badge](https://img.shields.io/badge/Barcelona-black?style=for-the-badge&logo=42&logoColor=%23FFFFFF)
![Static Badge](https://img.shields.io/badge/C++-blue?style=flat&logo=cplusplus)
![Static Badge](https://img.shields.io/badge/Makefile-green?style=flat&logo=AnkerMake)
![Static Badge](https://img.shields.io/badge/status-completed-green?style=flat)

This project introduces **type conversion, serialization, and runtime type identification** in C++.

It is divided into three exercises, each exploring a different concept.

## Exercises

### ex00 — Scalar Converter

This exercise converts a string representation of a value into different C++ scalar types: `char`, `int`, `float`, and `double`.

**Classes and functions:**
- **ScalarConverter:** A class with a static `convert()` function that processes the input and displays its conversions to the four types.
- **isPrintableChar():** Checks whether the input can be represented as a printable character.
- **isInt():** Converts the input to an integer.
- **isFloat():** Converts the input to a float.
- **isDouble():** Converts the input to a double.

The program also handles invalid inputs and special values such as `nan` and `inf`.

### ex01 — Serializer

This exercise demonstrates how to convert a pointer into an integer representation and then convert it back into a pointer.

**Classes and structures:**
- **Serializer:** Provides two static functions:
  - `serialize()` converts a `Data*` pointer into a `uintptr_t` value.
  - `deserialize()` converts the integer back into a `Data*` pointer.
- **Data:** A structure used to store data and test the serialization process.

The goal is to verify that serializing and then deserializing a pointer preserves the original address.

### ex02 — Identify Types

This exercise explores **inheritance, polymorphism, and RTTI** (Run-Time Type Information).

**Classes:**
- **Base:** An abstract-looking base class for the type hierarchy, with a virtual destructor. In the provided code, it is not technically abstract because it has no pure virtual functions.
- **A, B, and C:** Derived classes used to represent three possible types. Their definitions are included through `ABC.hpp`.
- **generate():** Randomly creates an object of type `A`, `B`, or `C` and returns it as a `Base*`.
- **identify(Base* p):** Uses `dynamic_cast` to identify the derived type through a pointer.
- **identify(Base& p):** Uses `dynamic_cast` with references and catches `std::bad_cast` when a cast fails.

The program generates several objects and identifies their types using both pointers and references.

## How the Concepts Work Together

Each exercise focuses on a different C++ feature:

- **Type conversion:** `ScalarConverter` interprets an input string and displays its value in different scalar types.
- **Serialization:** `Serializer` converts a pointer to an integer and back while preserving its address.
- **Runtime type identification:** `Base`, `A`, `B`, and `C` form an inheritance hierarchy that allows the program to identify an object's actual type at runtime.

Together, these exercises demonstrate how C++ handles conversions, memory addresses, and polymorphic objects.

## Instructions

Each exercise has its own directory and should be compiled separately using its corresponding Makefile.

Navigate to the exercise directory and compile:

```bash
make
```

Run the generated executable. The executable name depends on the exercise's Makefile.

Clean the object files:

```bash
make clean
```

Remove the object files and executable:

```bash
make fclean
```

The project is written in **C++98** and uses **Makefiles** for compilation.