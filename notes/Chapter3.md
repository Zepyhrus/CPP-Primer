---
title: 'CPP Primer: Chapter 3 String, Vectors, and Arrays'
date: 2019-08-26 11:11:53
tags:
---


# Strings, Vectors, And Arrays

The standard library defines a number of additiaonal types of a higher-level nature that computer hardware usually does not implement directly.

## 3.1 Namespace using Declarations

**Headers Should Not Include `using` Declarations**: The contents of a header are copied into the including program's text. If a header has a `using` declaration, then it will pollute all scope with such `using` statement.

## 3.2 Library `string`

### 3.2.1 Defining and Initializeing `strings`

```cpp
string s4(10, 'c'); //  s4 is cccccccccc
```

**Direct and Copy Forms of Initialization**:

```cpp
string s5 = "hiya"; //  copy initialization
string s6("hiya");  //  direct initialization
string s7(10, 'c'); //  direct initialization
```

#### 3.2.2 Operations on `string`s

**Table: String Operations**: On page. 86.
```cpp
getline(is, s); //  Reads a line of input from is into s, returns is.
s.empty();      //
s.size();       //  Returns the number of characters in s
s[n];           //  returns a reference to the char at position n in s.
s1 + s2;        //
s1 = s2;        //
s1 == s2;       //
<, <=, >, >=;   //  Comparisions are case-sensitive and use dictionary ordering
```

**Using `getline` to Read an Entire Line**: if you want to take the input and keep the whitespace in input:
```cpp
int main()
{
  string line;
  while (getline(cin, line))
    cout << line << endl; //  we need endl to end the current line and flush the buffer
  return 0;
}
```

**The string::size_type Type**: `string::size_type` returns a size_type value. If n ins an int that holds a negative value, then s.size() < n will almost surely evaluate as true. It yields true because the negative value in n will convert to a large unsigned value.

**Adding Literals and strings**: When we mix strings and string or character literals, at least one operand to each + operator must be of string type.

```cpp
string s5 = "hello" + ", ";   //  error: no string operand
string s7 = "hello" + ", " + s2;    //  error: can't add string literals
```

### 3.2.3 Dealing with the Characters in a string

**Advice**: Use the C++ version of C Library Headers. Headers in C have names of the form name.h. The C++ version of these headers are named cname--they remove the .h suffix and precede the name with the letterc. The c indicates that the header is part of the C library.
`cctype` has the same contents as `ctype.h`, but in a form that is approprate for C++ programs. In particular, the names defined in the `cname` headers are defined inside the `std` namespace, whereas those defined in the .h versions are not.

**Note**:
* `string.h` contains old functions like `strcpy`, `strlen` for C style null-terminated strings, use `cstring` instead.
* `string` primarily contains the `std::string`, `std::wstring` and other classes.

**Use Range-Based for to process every Character**: Introduced in C++ 11, while the `expression` should represent a sequence.
```cpp
for (declaration : expression)
  statement

string str("some string");

// fprint the characters in str one character to a line
for (auto c : str)
  cout << c << endl;
```

Example code:
```cpp
string s("Hello world!!!");
// punct_cunt has the same type that s.size returns;
decltype(s.size()) punct_cnt = 0;

// count the number of punctutation characters in s
for (auto c : s)
  if (ispunct(c))
    ++punct_cnt;

cout << punct_cnt
  << " punctiuation characters in " << s << endl;

for (auto &c :s)
  if (isalpha(c))
    c = toupper(c);

cout << s << endl;
/* cctype Functions
  * isalnum(c): true if c is a letter or a digit
  * isalpha(c): true if c is a letter
  * iscntrl(c): true if c is a control character
  * isdigit(c): true if c is a digit
  * isgraph(c): true if c is not a space but is printable
  * islower(c): true if c is a lowercase letter
  * isprint(c): true if c is a printable character (i.e., a space or a character that has a visible representation)
  * ispunct(c): true if c is a punctutation charcter
  * isspace(c): true if c is a space
  * isupper(c): true if c is an uppercase letter
  * isxdigit(c): true if c is a hexadecimal digit
  * tolower(c): convert c to its lowercase equivalent if c is a letter
  * toupper(c): convert c to its uppercase equivalent if c is a letter
  */
```

**Process Only Some Characters**: We can use a subscript or an iterator. Note that the subscript will be converted to unsigned int.

**Using a Subscript for Random Access**:
```cpp
const string hexdigits = "0123456789ABCDEF";

cout << "Enter a series of numbers between 0 and 15"
      << " separated by spaces. Hit ENDTER when finished: "
      << endl;

string result;

string::size_type n;
while (cin >> n)
  if (n < hexdigits.size())
    result += hexdigits[n];

cout << "Your hex number is: " << result << endl;
```

## 3.3 Library vector Type

A vector is a class template. C++ has both class and function templates.The process that the compiler uses to create classees or functions from templates is called **Instantiation**. 
**Note**: vector is a template, not a type. Types generated from vector must include the element type, for example, `vector<int>`. Some compilers may require the old-style declarations for a vector of vectors, for example, `vector<vector<int> >`.

### 3.3.1 Deifining and Initializing vectors

```cpp
vector<T> v1;                   //  vector that holds objects of type T. Default initialization; v1 is empty
vector<T> v2(v1);               //  v2 has a copy of each element in v1.
vector<T> v2 = v1;              //  Equivalent to v2(v1)
vector<T> v3(n, val);           //  v3 has n elements with value val.
vector<T> v4(n);                //  v4 has n copipes of a value-initialized object
vector<T> v5{a, b, c, ...};     //  v5 has as manay elements as there are initializers; elements are initialized by corresponding initializers
vector<T> v5 = {a, b, c, ...};  //  Equivalent to v5{a, b, c, ...}
```

**Key Concept**: vectors grow efficiently: If differing element values are needed, it is usually more efficient to define an empty vector and add elements as the values we need become known at run time. Moreover, vector offers capabilityes to allow us to further enhance run-time performance when we add elements. Deifne a vector of a specific size could result in poorer performance.

**Warning**: The body of a range `for` must not change the size of the sequence over which it is iterating.

### 3.3.2 Other vector Operations

**Warning**: *buffer overflow* errors are the result of subscripting elements that don`t exst. Such bugs are the most common cause of security problems in PC and other applications.

## 3.4 Introducing Iterators

All of the library containers have iterators, but only a few of them support the subscript operator. `string` is not a container, but it supports most of the container operations, `string` also supports iterators.

### 3.4.1 Using Iterators

The iterator returned by end is often referred to as the off-the-end iterator or abbreviated as "the `end` iterator".

**Iterator Operations**: Iterator only supports a few operations.
```cpp
*iter;          // Returns a reference to the element denoted by the iterator iter.
iter->mem;      // Dereferences iter and fetches the member named mem from the underlying element, Equivalent to (*iter).mem
++iter;         // Increments iter to refer to the next element in the container
--iter;         // Decrements iter to refer to the previous element in the container
iter1 == iter2; //Compares two iterators for equaility. Two iterators are equal if they denote the same element or if they are the off-the-end iterator for the same container
```

**MMoving Iterators from One Element to Another**: Because the iterator returned from end does not denote an element, it may not be incremented or dereferenced.

**Key Concept: Generic Programming**: Only a few containers have the subscript operator. Most of thoes iterators do not have the < operator. So C++ programmers use `!=` operator in the loop instead of `<` operator.


**The `begin` and `end` Operations**: The default behavior is often not we want, return `iterator` for vector and `const_iterator` for const vector, while we usually want `const` type to read but not to write. It is suggested to use following new functions in new standard.

```cpp
  vector<int> v;

  auto it3 = v.cbegin();
```

### 3.4.2 Iterator Arithmetic

```cpp
  iter + n;         //
  iter - n;
  iter1 += n;
  iter1 -= n;
  iter1 - iter2;    // Substracting 2 iterators yiels the number that when added to the right-hande iterator yelds the left-head iterator.

  >, >=, <, <=;     // One iterator is less than another if it refers to an element that appears in the container before the one referred to by the other iterator.
```

**Arithmetic Operations on Iterators**: Compute an iterator te the element nearest the middle of a `vector`:

```cpp
  auto mid = vi.begin() + vi.size() / 2;
```

**Using Iterator Arithmetic**: A classic algorithm that uses iterator arithmetic is binary search.


## 3.5 Arrays

An array is a data structure that is similar to the library `vector` type but offers a different trade-off between performance and flexibility.

An array is a **compound type**, which is defined based on other type, like reference and pointer.

```cpp
  unsigned cnt = 42;
  constexpr unsigned sz = 42;

  int arr[10];
  int *parr[sz];
  string bad[cnt];
  string strs[get_size()];
```

By default, the elements in an array are default initialized. Arrays hold objects, thus , there are no arrays of references.

**Explicitly Initializing Array Elements**:

```cpp
  const unsigned sz = 3;
  int ia1[sz] = {0, 1, 2};
  int a2[] = {0, 1, 2};
  int a3[5] = {0, 1, 2};    // equivalent ot a3[] = {0, 1, 2, 0, 0}
  string a4[3] = {"hi", "bye"};
  int a5[2] = {0, 1, 2};    // error: too many arguments
```

**Character Arrays Are Special**: String literals end with a null character. That null character is copied into the array along with the characters in the literal.

```cpp
  char a1[] = {'C', '+', '+'};
  char a2[] = {'C', '+', '+', '\0'};    // list initialization, explicit null
  char a3[] = "C++";                    // null termintator added automatically
  char a4[6] = "Daniel";                // error: nospace for the null
```

**No Copi or Assignment**: We cannot initialize an array as a copi of another array, nor is it legal to assign one array to another.

**Complicated Array Declarations**: Read the declaration from inside out and then right to left.

```cpp
  int *ptrs[10];                    // ptrs is an array of ten pointers to int
  int &refs[10] = /* ? */;          // error: no arrays of references
  int (*Parray) [10] = &arr;        // Parray points to an array of ten ints
  int (&arrRef)[10] = arr;          // arrRef refers to an array of ten ints
  int *(&arry)[10] = ptrs;          // arry arry is a reference to an array of ten pointers
```

### 3.5.2 Accessing the Elements of an Array

Nothing much, you should be able to accesss elements in arrays like in vectors.

### 3.5.3 Pointers and Arrays

In C++, when we use an array, the compiler ordinarily converts the array to a pointer. The arrays have a special property--in most places when we use an array, the compiler automatically substitutes a poiter to the first elemet:

```cpp
  string nums[] = {"one", "two", "three"};

  string *p = &nums[0];     // p points the first element in nums

  string *p2 = nums;        // equivalent to p2 = &nums[0]
```

**Pointers Are Iterators**: In particular, pointers to array elements support the same operations as iterators on `vector` or `string`.

**The Libarary `begin` and `end` Functions**: `begin` returns a pointer to the first, and `end` returns a pointer one past the last element in the given array. These funcgtions are defined in the `iterator` header.

```cpp
  int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int *beg = begin(ia);
  int *last = end(ia);
```

**Pointer Arithmetic**: Pointers acn use all the iterator operations.

```cpp
  constexpr size_t sz = 5;
  int arr[sz] = {1, 2, 3, 4, 5};
  int *ip = arr;                    // equivalent to int *ip = &arr[0]
  int *ip2 = ip + 4;                // ip2 points to arr[4], the last element in arr

  // ok: arr is converted to a pointer to its first element; p points one past the end of arr
  int *p = arr + sz;                // do not dereference
  int *p2 = arr + 10;               // error: arr has only 5 elements; p2 has undefined value
```

The result of substracting two pointers is a library type named `ptrdiff_t`. Like `size_t`, the `ptrdiff_t` type is a machine-specific type and is defined in the `cstddef` header.

**Interaction between Dereference and Pointer Arithmetic**:

```cpp
  int ia[] = {0, 2, 4, 6, 8};
  int last = *(ia + 4);
```

**Subscripts and Pointers**: In most places when we use the name of an array, we are really using a pointer to the first element in that array. We can use the subscript operator on any pointer, as long as that pointer points to an element (or one past the last element) in an array.

```cpp
  int *p = &ia[2];      // p points to the element indexed by 2
  int j = p[1];         // p[1] is the same element as ia[3]
  int k = p[-2];        // p[-2] is the same element as ia[0]
```

**Warning**: Unlike subscripts for `vector` and `string`, the index of the built-in subscript operator is not an `unsigned` type.

### 3.5.4 C-Style Character Strings

**C Library String Functions**: Included in `cstring` header file.

```cpp
  strlen(p);        // Renturns the length of p, not cunting the null
  strcmp(p1, p2);   // Compares p1 and p2 for equality. Returns 0 if p1 == p2, a positive value if p1 > p2, a negative value if p1 < p2
  strcat(p1, p2);   // Appends p2 to p1. Returns p1.
  strcpy(p1, p2);   // Copies p2 into p1. Returns p1.
```

**Notes**: Remember that when we are comparing arraies, we are really using a pointer to the first element in the array.

**Caller Is Responsible for Size of a Destination String**: For most applications, in addition to being safer, it is also more efficient to use library strings rather than C-style strings.


### 3.5.5 INterfacing to Older Code

The `string` member funciton named `c_str` that we can often use to accomplish what we want.

**Using an Array to Initialize a `vector`**: We cannot initialize a built-in array from another array. But we can, and we only can initialize a `vector` using an array.

```cpp
  int int_arr[] = {0, 1, 2, 3, 4, 5};
  vector<int> ivec(begin(int_arr), end(int_arr));

  /* create a sub vector */
  vector<int> sub_vec(int_arr + 1, int_arr + 4);
```

## 3.6 Multidimensional Arrays

**Using a Ranf for with Multidimensional Arrays**: The range for loop could be done under the new standard.

```cpp
  size_t cnt = 0;
  for (auto &row : ia)
    for (auto &col : row){
      col = cnt;
      ++cnt;
    }      
```

**Notes**: To use a multidimensional array in a range for, the loop control variable for all but the innermost array must be references.

```cpp
  int *ip[4];     // array of pointers to int
  int (*ip)[4];   // pointer to an array of four ints

  // print the value of each element in ia, with each inner array on its own line
  // p points to an array of four ints
  for (auto p = ia; p != ia + 3; ++p) {
    // q points to the first element of an array of four ints; that is , q points to an int
    for (auto q = *p; q != *p + 4; ++q)
      cout << *q << '\t';
    cout << endl;
  }
```

## Defined Terms
* begin/end: included in `<iterator>`, return the pointers to an array`s begin and end;
* buffer overflow: When we use an index that is out-of-range for a container;
* difference_type: A `signed` integral type defined by `vector` and `string` that can hold the distance between any two iterators;
* ptrdiff_t/size_t: Machine-dependent signed integral type defined in the `cstddef` header that is large enough to held the difference between 2 pointers into the largest possible array;
