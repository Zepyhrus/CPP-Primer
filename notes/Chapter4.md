---
title: 'CPP Primer Chapter 4: Expressions'
date: 2019-08-27 09:18:11
tags:
---

# Expressions

## 4.1 Fundamentals

There ar both *unary operators* and *binary operators*.
1. Unary operators: address-of (&) and dereference (*), act on one operand;
2. Binary operators: equality (==) and multiplication (*), act on two operands;
3. Tenrary operator: takes three operands;
4. Function call: takes unlimited number of operands;

**Operand Conversions**: The small integral type operands (e.g., `bool`, `char`, `short`, etc) are generally **promoted** to a larger integraltype, typically int.

**Overloaded Operators**:The IO library >> and << operators we used with `strings`, `vectors`, and iterators are all overloaded operators.

**Lvalue and Rvalue**: Iherited from C. Some lvalues, such as `const` objects, may not be the left-hand operand of an assignment. Moreover, some expression yield objects but return them as rvalues, not lvalues.

Roughly speaking:
* When we use an object as an rvalue, we use the object`s value (its content);
* When we use an object as an lvalue, we use the object's identity (its location in memory);

**Important**: We can use an lvalue when an rvalue is required, but we ccannot use an rvalue when an lvalue (i.e.., a location) is required.

* Assignment requiers a lvalue as itts left-hand operand and yields its left-hand operand as an lvalue;
* The address-of operator requiers an lvalue operand and returns a pointer to its operand as an rvalue;
* The built-in dereferenect and subscript operators and the iterator dereference and `string` and `vector` subscript operators all yield lvalues;
* The built-in and iterator increment and decrement operators require lvalue operands and the prefix versions also yield lvalues.
* When we apply `decltype` to an expression, the result is a reference type if the expression yields an lvalue.

### 4.1.2 Precedence and Associativity

Table 4.12 (p. 166) lists all the operators organized into segmentes separated by double lines.

### 4.1.3 Order of Evaluation

In most cases, the order of how the operands are evaluated is largely unspecified. There are four operators that do guarantee the order in which operands are evaluated. 
* The logical AND (&&)  guarantees thta its left-hand operand is evaluated first. It is also guaranteed that the right -hand operand is evaluated only if the left-hand operand is true.
* The logical OR (||);
* The condition (? :) operator, the tenary operator;
* The comma (,) operator;

## 4.3 Logical and Relational Operatiors

**Short-circuit evaluation**: The logical AND and OR operators always evaluate their left operand before the right. Moreover, the right operands is evalutaed *if and only if* the left operand does not determine the result:
* The right side of an && is evalutaed if and only if the left side is true;
* The right side of an || is evaluated if and only if the left side is false;

## 4.4 Assignment Operatiors

The left-hand operand of an assignment operator must be a modifiable lvalue.

```cpp
  1024 = k;     // error: literals are rvalues
  i + j = k;    // error: arithmetic expressions are rvalues
  ci = k;       // error: ci is a const (nonmodifiable) lvalue
```

**Assignment Is Right Associative**: Unlike the other binary operators, assignment is right associative.

```cpp
  int i;
  // a better way to write the loop---what the condition does is now clearer
  while ((i = get_value()) != 42) {
    // do something...
  }
```

**Compound Assignment Operators**: There are compound assignments for each of these operators.

```cpp
    +=    -=    *=    /=    %=;    // arithmetci operators
    <<=   >>=   &=    ^=    |=;    // bitwise operators
```

Each compound operator is essentially equivalent to `a = a op b`.

## 4.5 Increment and Decrement Operators

There are two forms of these operators: prefix and postfix. 
* prefix: increments its operand and yields the *changed* object as its result;
* postfix: yield a copy of the original, *unchanged* object as its result;

**Advice**: Use postfix operators only when necessary.

**Combinig Dereference and Increment in a Single Expression**: The postfix versions of ++ and -- are used when we want to use the current value of a variable and increment it in a single compound expression.

```cpp
  auto pbeg = v.begin();
  // print elements up to the first negative value
  while (pbeg != v.end() && *pbeg >= 0)
    cout << *pbeg++ << endl;  // print the current value and advance pbeg
```

**Remember that operands can be evaluated in any order**: Most operators give no guarantee as to the order in which operands will be evaluated.

```cpp
  // the behavior of the following loop is undefined!
  while (beg != s.end() && !isspace(*beg))
    \*beg = touper(\*beg++);

  // which could be evaluated as:
  *beg = toupper(\*beg);
  *(beg + 1) = toupper(\*beg);
```

Or it might evaluate it in yet some other way.

## 4.6 The Member Access Operators

Th dereference has a lower precedence than dot operator (member access operator).


## 4.7 The conditional Operator

```cpp
  // cond ? expr1 : expr2
  string grade = (grade < 60) ? "fail" : "pass";
```

**Nesting Conditional Operations**: We can nest one conditional operator inside another.

```cpp
  string grade = (grade > 90) ? "high"
                              : (grade < 60) : "fail" : "pass";
```
## 4.8 The bitwise Operator

The bitwise operators take operands of integral type that they use as a collection of bits. Because there are no guarantees for how the sign bit is handled, we strongly recommend using `unsigned` types with the bitwise operators.

```cpp
  unsigned char bits = 0233;  // char (8 bits, 1 byte)

  bits << 8;  // bits promoted to int (32 bits, 4 bytes) and then shifted left by 8 bits

  bits << 31; // left shift 31 bits, left-most bits discarded

  bits >> 3;  // rigth shift 3 bits, 3 right-most bits discards
```

A bitwise operation example:

```cpp
  quiz1 |= 1UL << 27;     // set the 27th number of quiz1 to be 1
  quiz1 &= ~(1UL << 27);  // set the 27th number of quiz1 to be 0
```

**Shift Operatiors (aka IO operators) Are Left Associative**: The expression:

```cpp
  cout << "hi" << " there" << endl;
  ( (cout << "hi") << " there" ) << endl;
```

## 4.9 The sizeof Operator

The sizeof operator returns the size, in bytes, of an expression or a type name. Under the new standard, we can use the scope operator to ask for the size of a member of a class type.

```cpp
  sizeof Sales_data::revenue;
```

Because sizeof returns the size of the entire array, we can determine the number of elements in an array by dividing the array size by the element size.

```cpp
  constexpr size_t sz = sizeof(ia)/sizeof(*ia);
  int arr2[sz];
```

## 4.10 Comma Operator

The comma operator takes two operands, which it evaluates frmo left to rigtht.

## 4.11 Type Conversions

**Implicit conversions**: Some conversions are carried out automatically without programmer intervention--and sometimes without programmer knowledge. 

Conwerting a `double` to an `int` truncates the `double`'s value, discarding the decimal portin.

**When Implicit Conversions Occur**

* In arithmetic and relational expressions with operands of mixed types, the types are converted to a common type;
* Conversions also happen during function calls;

### 4.11.1 The Arithmetic Conversions

Nothing much, never mind.

### 4.11.2 Other Implicit Conversions

**Array to Pointer Conversions**: In most expressions, when we use an array, the array is automatically converted to a pointer.

**Pointer Conversions**: There are several other pointer conversions.

### 4.11.3 显式转换

(I'm so fucking tired of taking English notes, English should be my helper not the obstacle)

**NOTES** 虽然有时不得不使用强制类型转换，但是这种方法本质上是十分危险的。

强制类型转换有如下形式：

*cast-name<type>(expression);*

*cast-name* 是`static_cast`，`dynamic_cast`，`const_cast`和`reinterpret_cast`中的 一种。

`static_cast`：任何具有明确定义的类型转换，只要不包含底层`const`，都可以用`static_cast`。

`const_cast`：只能改变运算对象的底层`const`，即去`const`性质。常用于有函数重载的上下文中。

`reinterpret_cast`：通常为运算对象的位模式提供较低层次上的重新解释。

**WARNING** 与命名的强制类型转换相比，旧式的强制类型转换从表现形式上来说不那么清晰明了，容易被看漏，所以一旦转换过程出现问题，追踪起来也更加困难。


