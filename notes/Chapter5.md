---
title: CPP Primer Chapter 5 Statements
date: 2019-11-16 11:51:12
tags:
---


# Chapter 5 语句

和大多数语言一样，C++提供了条件执行语句、重复执行相同代码的循环语句和用于中断当前控制流的跳转语句。

## 5.1 简单语句

**空语句**

**BEST PRACTICE**：使用空语句时最好是加上注释，从而令独这段代码的人知道该语句是有意省略的。

**WARNING**：多余的空语句并非总是无害的。

**复合语句（块）**

复合语句块是指被`{}`括起来的语句和声明序列，也被成为block。

## 5.2 语句作用域

## 5.3 条件语句

**悬挂else**：C++规定`else`与离它最近的尚未匹配的`if`匹配。

### 5.3.2  `switch` 语句

**switch 内部的控制流**：如果某个`case`匹配成功，将错哦你该标签开始往后顺序执行所有`case`分支，除非程序显式地中断了这一过程。

```cpp
unsigned vowelCnt = 0;

switch (ch)
{
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    ++vowelCnt;
    break;
}
```

`case` 标签之后不一定非得换行。

```cpp
switch (ch) {
  case 'a': case 'e': case 'i': case 'o': case 'u':
    ++vowelCnt;
    break;
}
```

**WARNING**：常见的错觉是程序只执行匹配成功的那个`case`分支语句。因此在每个标签后写上`break`，是最好的应用。这样新增加新的分支也不用在前面加上`break`了。

**default 标签**：当没有任何一个`case`标签能匹配上`switch`表达式的值时，程序将执行紧跟在`default`后面的语句。每一个`switch`语句。

## 5.4 迭代语句

### 5.4.3 范围`for`语句

**序列**：可以返回迭代器`begin`和`end`的成员。采用范围`for`语句时，在迭代过程中修改序列结果，可能会导致循环体的尾指针失效。

## 5.5 跳转语句

C++ 提供了4种跳转语句：`break`、`continue`、`goto`、`return`。

### 5.5.1 `break`语句

`break`语句的作用范围仅限于最近的循环或者`switch`。

### 5.5.2 `continue`语句

`continue`语句只出现在`for`、`while`、`do while`循环内，或者嵌套在此类循环的语句或块的内部。

### 5.5.3 `goto`语句

hmmmm，没什么可说的。

## 5.6 `try`语句

* `throw`表达式；
* `try`语句块；
* 一套**异常**类。

### 5.6.1 `throw`表达式

见练习5.22.cpp。

### 5.6.2 `try`语句块



