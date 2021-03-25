---
title: 'CPP Primer: Chapter 1 Getting Started'
date: 2019-08-26 11:17:26
tags:
---

# Cpp Primer Notes

This a implementation of some of the exercises from the book: C++ Primer. And also some notes from the book. The github source could be found [here](https://github.com/Zepyhrus/CPP-Primer).

## Prerequisites

Ubuntu 18.04 LTS
gcc/g++: 5.5
vscode: 1.35.0, x64

## Chapter 1 Getting Started

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