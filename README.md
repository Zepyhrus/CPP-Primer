---
title: CPP-Primer-Notes
date: 2019-07-23 10:05:28
tags:
---

## Cpp Primer Notes

This a implementation of some of the exercises from the book: C++ Primer. And also some notes from the book. The github source could be found [here](https://github.com/Zepyhrus/CPP-Primer).

## Prerequisites

Ubuntu 18.04 LTS
gcc/g++: 5.5
vscode: 1.35.0, x64

## 1.4 Flow of control

### 1.4.1 The *While* statement

```c
int b = ++a;  // a + 1 before assigned to b, cal after a + 1;
int c = a++;  // a + 1 after assigned to c, cal before a + 1;
```

### 1.4.3 Reading an Unknown Number of INputs

* The end of input is CTRL + d;
* It is a good practice to recompile the code after each fix -- or after making at most a small number of obvious fixes. This is called *edit-compile-debug*.
* exercise at input_if.cc

## 1.5 Introducing Classes

1. Memeber function: a function that is defined as part of a class, sometimes referred to as **methods**;
2. `()`: the `call` operator;

* Uninitialized variables are a rich source of bugs;

## Chapter 2 Varibales and Basic Types

Some languages, such as Smalltalk and Python, check types at run time. In contrast, C++ is a statically typed language: type checking is done at compile time.
As a consequence, the compiler must know the type of every name used in the program.

**Types determine** the meaning of the data and operations in our programs.

## 2.1 Primitive Built-in Types

Includes **arithmetic types** and `void`. The `void` type has no associated values and can be used in only a few circumestances.

### 2.1.1 Arithmetic Types

Includes **integral types** and **floating-point types**. The standard guarantees minimum sizes of different type. Different compiler are allowed to use larger sizes for these tyes.  

* Q: What is significant digits?
* A: Effective decimal numbers
  * **float** has 6 significant digits minimum;
  * **double** has 10 signifiicant digits minimum;

A `char` is the same size as a single machine `byte`. A "word" si referred to a small number of bytes. Most computers a byte contains 8 bits and a word is either 32 or 63 bits, that is, 4 or 8 bytes.

The **Type** determins how many bits are used and how to interpret those bits.

**Signed an Unsigned Types**
The types `int`, `short`, `long`, `long long` are all signed. The type `unsigned int` may be abbreviated as `unsigned`.

There are 3 distinct basic character types: `char`, `unsigned char`, `signed char`. Which of the other two character representatinos is equivalent to `char` depends on the compiler.  

IN an unsigned type, all the bits represent the value. An 8-bit `unsigned` char can hold the values from 0 through 255 inclusize. An 8-bit `signed` char is guaranteed to be able to hold values from -127 through 127. Most modern machines use representations that allow values from -128 through 127.

* Do not use plain `char` or `bool` in arithmetic expressions. Use them *only* to hold characters or thuth values. Computtations using `char` are especially problematic because `char` is signed on some machines and `unsigned` on others.
* Use `double` for floating-point computatins. `float` usually odes not have enough precision and the cosst of double-percision calculations versus single-precision is negligible. In fact, on some machines, **double-precision operations are faster than single**[P34].

### 2.1.2 Type Conversions

1. non`bool` arithmetic types to a `bool` object, the result is `false` if the value is 0 and `true` otherwise;
2. `bool true` is 1 and `bool false` is 0;
3. Assigning a floating-point value to an object of integral type, the value is truncated.
4. When an integral value to an object of floating-point type, the frational part is zero. Precision may be lost ifg the integer has more bits than the floating-point object can accommodate.  
5. OOR (out-of-range) value to unsigned type, the result is the remainder of the value modulo the number of values the target type can hold.
6. OOR value to signed type, the reult is **undefined**. Undefined behavior results from errors that the compiler is not requierd to detect.

### 2.1.3 Literals

**Integer and Floating-Point Literals**：

* decimal: You should know what a decimal is you stpuid fuck;
* octal: Integer literals that begin with 0, for example 024;
* hexadecimal: Integer literals that begin with 0x or 0X;

**Note**: For a negative decimal literal, -42, the minus sign is *not* part of the literal, the minus sign is an operator that negates the value of its (literal) operand.

**Character and Character String Literals**：
The compiler appends a null character (`\0`) to every string literal. Thus the actual size of a string literal is one more than its apparent size.

**Escape Sequences**：An **escape sequence** begins with a backslash.  

**Specifying the Type of a Literal**
We can override the default type of an integer, floating-point, or character lietral by supylying a suffix or prefix from Table 2.2 [P40];

```c
42ULL     // unsigned integer litearal, type is unsigned long long
```

**Boolean and Pointer Literals**:

```c
bool test = false;  // true or false are literals of type bool;
```

## 2.2 Variables

### 2.2.1 Variable Definitions

Most generally, an object is a region of memory that can contain data and has a type.

**Initilaizer**: An object gets the specified value at the moment it is created.

The initialization an d assignment are different operations in C++. Initialization happens when a variable is given a value when it is created. Assignment obliterates an object's current value and replaces that value with a new one.

**List Initialization**:

```c
int units_sold = {0};
int units_sold{0};
```

The curly braces for initializeation was introduced as part of the new standard, which is referred to as **list initalization**.

**Import**: this form of initialization will not be allowed if the initializer might lead to the loss of information by compiler.

**Default INitialization**:
When a varibale is defined without an initializer, it is **default initialized**. One excpetion, variables of built-in type defined inside a function are **uninitialized**.

### 2.2.2 Variable Declarations and Definitions

Use `extern` to explict declare variable without defination. It is an error to provide an initializer on an `extern` inside a function. `extern` with an initializer is an defination.  

```c
extern int i;  // declares but does not define i
int j;         // declares and defines j
```

**Note**: Varibales must be defined exactly once but can be declared many times.

### 2.2.3 Identifiers

* The identifier in programs may not contain two consective underscores;
* Nor can an identifier begin with an underscore followed immediately by an uppercase letter;
* Identifiers defined outside a function may not begin with an underscore.

### 2.2.4 Scope of a Name

**Nested Scopes**: The global scope has no name, hence when the scope operator has an empty left-hand side, it is a request to fetch the name on the right-hand side from the global scope.

## 2.3 Compound Types

A **compound type** is a type thas is defined in terms of another type, including **references** and **pointers**.
A declaration is a **base type** followed by a list of **declarators**.

### 2.3.1 References

*Reference* refers to "lvalue reference", instead of "rvalue reference" introduced in new standard. A **reference** defines an alternative name for an object.

```c
int ival = 1024;
int &refVal = ival;
int &refVal2;
```

**A Reference Is an Alias**
The reference is **bound** to its initializer, and there is no way to rebind a reference to refer to a different object. A reference *must* be initialized.
A reference is just another name for an already existing object.
After a reference has been defined, *all* operations on that reference are actuall operations on the object to which the reference is bound.

**Reference Denfinitions**
With 2 exceptions that will be covered in S 2.4.1 and 15.2.3, the type of reference and the obect to which the reference refers must match exactly. A reference may be bound only to an object, not to a literal or to the result of a more general experession.
[cmake]  

### 2.3.2 Pointers

A **Pointer** is a compound type that "points to" another type.

```c
int *ip1, *ip2;
double dp, *dp2;
```

**Taking the Address of an Object**
A poiter holds the address of another object. We get the address of an object by usin the address-of operator (the **& operator**).

```c
int ival = 42;
int *p = &ival;  // p holds the address of ival; p is a pointer to ival
```

With 2 excpetion will be covered in S:2.4.2 and S:15.2.3, the typees of the pointer and the object ot which it points must muatch.

```c
double dval;
double *pd = &dval;
double *pd2 = pd;
int *pi = pd;
pi = &dval;
```

**Point Value**
The walue (i.e., the address) stored in a pointer can be in one of four states:

1. An object;
2. The location just immediately past the end of an object;
3. A unll pointer, indicating that is is not bound to any object;
4. Invalid, values other than the preceding three are invalid.

**Using a Pointer to Access an Object**
Ust the dereference operator (the **\*** operator) to access the object:

```c
int ival = 42;
int *p = *ival;
std::cout << *p;
```

Dereferencoing a pointer yields the object ot which the pointer points.

**Note**: Some symbols have multiple meannings

```c
int i = 42;
int &r = i;
int *p;
p = &i;         //  & used as the address-of operation
*p = i          //  * used as dereference operation
int &r2 = *p;   //  & as part of the declaration, * as derefernec operation
```

**Null Pointer**:

```c
int *p1 = nullptr;
int *p2 = 0;

/* must #include cstdlib */
int *p3 = NULL;
```

Older programs sometimes use a **preprocessor variable** named `NULL`, which the `cstdlib` header defines as 0. A **preprocessor** is a program that runs before the compiler. Preprocessor varibales are managed by the preprocessor, and are not part of the `std` namespace.

**Assignment and Pointers**
A reference is not an object.  

**Other Pointer Operations**
Any nonzero pointer evalutaes as `true`. Two pointers are equal if they hold the same address or both are null pointers. In continously memory, a pointer one past the end of a different object ot heldo the same ddress as a pointer to an object.

**`void*` Pointers**
The type `void*` is a special pointer type that can hold the address of any object, it holds an address but the type of the object at that address is unknown. Generally, a `void*` pointer is used to dieal with memory as memory, rather than using the pointer to access the object stored in that memory.

### 2.3.3 Understanding Compound Type Declarations

**Defining Multiple Variable**: It could be really confusing, put whitespace between the type modifier and the name being declared. Use **First Style** to declare variables.

```c
int* p1, p2;  //  p1 is a pointer to int; p2 is an int
```

**Pointer to Pointers**: We indicate each pointer level by its own \*. \*\* for a pointer to a pointer, \*\*\* for a pointer to a pointer to a pointer.

```c
int ival = 1024;
int * pi = &ival;   //  pi points to an int
int **ppi = &pi;    //  ppi points to a pointer points to an int

cout << "The value of ival\n"
     << "direct value: " << ival << "\n"
     << "indirect value: " << *pi << "\n"
     << "doubly indirect value: " << **ppi  // deference twice
     << endl;
```

**Reference to Pointers**: A reference is not an object. Hence we may not have a pointer to a reference. But we can define a reference to a pointer.

```c
int val = 42;
int *pi;
int *&r = pi; //  r is a reference to pi
r = &val; // r is a reference, assign to r equals to assigning to pi
*r = 0; //  dereference r yields i, this is assigning i to be 0
```

**Notes**: As illustrate above, you can use `**pi` to indicate a pointer pointing to a pointer, but you can't use `&&p` to indicate a reference refering to a reference, cause reference is not a project.

## `const` Qualifier

Since wo can't change the value of `const`, it must be initialized.

**By Default, `const` Objects Are Local to a File**: When a `const` object is initialized from a compile-time constant, the compiler will usually repalce uses of the varibale with its corresponding value during compilation. When we define a `const` with the same name in multiple files, it is as if we had written definitions for separate variables in each file. If a single instance of a `const` variable, we use the keyword `extern` on both its definition and declaration(s).

e.g., if you what to share `const` accross different files, you must define the varibale as `extern`.

### 2.4.1 Reference to `const`

A reference to `const` cannot be used to change the object to which the reference is bound.
**TERMINOLOGY**: `const` Reference is a reference to `const`.

**Initialization and References to `const`**: One of the 2 exceptions to the rule that the type of a reference must match the type  of the object to which it refers: we can initialize a reference to `const` from any expression that can be converted to the type of the reference.

```c
int i = 42;
const int &r1 = i;        //  we can bind a const int& to a plain
const int &r2 = 42;       //  ok: r1 is a reference to const
const int &r3 = r1 * 2;   //  ok: r3 is a reference to const
int &r4 = r1 * 2;         //  error: r4 is a nonconst reference
```

**Important: AReference to `const` May Refer to an Object That is Not `const`**:

```c
int i = 42;
int &r1 = i;        //  r1 bound to i
const int &r2 = i;  //  r2 also bound to i; but connot be used to change i;
r1 = 0;             //  r1 is not const; i is now 0
r2 = 0;             //  error: r2 is a reference to const
```

### 2.4.2 Pointers and `const`

Like a reference to `cost`, a pointer to const may not be used to change the object to which the pointer points.
**Important**: There is no guarantee that an object pointed to by a pointer to `const` won't change.

**`const` Pointers**: We indicate that the pointer is `const` by putting the `const` after \*.

```c
int errNumb = 0;
int *const curErr = &errNumb;     //  curErr will always point to errNumb
const double pi = 3.14159;
const double *const pip = &pi;    //  pip is a const pointer to a const object
```

### 2.4.3 Top-level `const`

The term **top-level const** to indicate that the pointer itself is a const. When a pointer can point to a const object, we refer to that const as a low-level const.

### 2.4.4 `constexpr` and Constant Expressions

A **constant expression** is an expression whose value cannot change tnd that can be evalutaed at compile time.

```c
const int max_files = 20;         //  this is const expression
const int limit = max_files + 1;  //  this is const expression
int staff_size = 27;        //  not a constant expression
cnost int sz = get_size();  //  not a constant because it is not known util run time
```

**C++ 11**: Under new standard, we can aske the compiler to verify that a varibale is a constant expression by declaring the varibale in a `constexpr` declaration. Also a function simple enough to be evaluate at compile time could also be used as `constexpr`.

**Literal Types**: The types that we can use in a `constexpr` are known as "literal types" because they are simple enough to have literal values.

**Pointers and `constexpr`**: When we define a pointer in a `constexpr` declaration, the `constexpr` specifier applies to the pointer, not the type to which the pointer points.

## 2.5 Dealing with Types

### 2.5.1 Type Aliases

A type alias is a name that is a synonym for another type, whichi simplyfing complicated type definitions, making those types easier to use.

```c
typedef double wages;
typedef wages base, *p;
```

The new standard introduced a second way to define a type alias, via an alias declaration:

```c
using SI = Sales_item;
```

**Pointers, `const`, nad Type Aliases**:

```c
typedef char *pstring;
const pstring cstr = 0;
const char *cstr = 0;   //  this is illegal
```

### 2.5.2 The `auto` Type Specifier

```c
auto item = val1 + val2;
```

## Acknowledgmets

* With all respect to Mr. Zeng Xianliang, my colleague, who introduced this stunning book to me which he himself never really read it thoughly;
* Full respect to the author of the book: Cpp Primer, Stanley B. Lippman, Josee Lajoie, Barbara E. Moo. Their great works perserves;
* Didn't came up who else is helping me with it at current stage.
