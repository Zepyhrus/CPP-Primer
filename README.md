# Cpp Primer
This a implementation of some of the exercises from the book: C++ Primer. And also some notes from the book.

## Getting Started


## Prerequisites
Ubuntu 18.04 LTS
gcc/g++: 5.5
vscode: 1.35.0, x64

# Notes
## 1.4 Flow of control
### 1.4.1 The *While* statement
```
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


# Part I
# Chapter 2 Varibales and Basic Types
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

### **Signed an Unsigned Types**
The types `int`, `short`, `long`, `long long` are all signed. The type `unsigned int` may be abbreviated as `unsigned`.

There are 3 distinct basic character types: `char`, `unsigned char`, `signed char`. Which of the other two character representatinos is equivalent to `char` depends on the compiler. 

IN an unsigned type, all the bits represent the value. An 8-bit `unsigned` char can hold the values from 0 through 255 inclusize. An 8-bit `signed` char is guaranteed to be able to hold values from -127 through 127. Most modern machines use representations that allow values from -128 through 127. 

* Do not use plain `char` or `bool` in arithmetic expressions. Use them *only* to hold characters or thuth values. Computtations using `char` are especially problematic because `char` is signed on some machines and `unsigned` on others.
* Use `double` for floating-point computatins. `float` usually odes not have enough precision and the cosst of double-percision calculations versus single-precision is negligible. In fact, on some machines, **double-precision operations are faster than single**[P34]. 


# Acknowledgmets
* With all respect to Mr. Zeng Xianliang, my colleague, who introduced this stunning book to me which he himself never really read it thoughly;
* Full respect to the author of the book: Cpp Primer, Stanley B. Lippman, Josee Lajoie, Barbara E. Moo. Their great works perserves;
* Didn't came up who else is helping me with it at current stage.