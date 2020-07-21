# Accelerated-Cpp-Notes
#### Chapter 0 - Getting Started
* Angle brackets (<>) is used to call the standard library.
* In `main()` a return of 0 means success, any other value means failure.
* A namespace is a collection of related names.
* Directives begin with '#'.
* Standard library defines all of its names in a namespace called `std`.
* `std::cout` is an operand and `<<` is an operator.
* To the left of the scope operator (`::`) is a namespace called `std`, to the right is a name that is defined in the scope.
* Free form means that spaces are required only when they keep adjacent symbols from running together. 
* The three entities that are not free form.
    * string literals
    * #include name
    * // comment
* The standard library defines its names in headers, which programs access through `#include`.
    * The `<iostream>` header defines the library's input-output facilities.
#### Chapter 1 - Working with Strings
* A variable is an object that has a name.
* When reading strings, the library discards whitespace characters from the input.
* Input-output library saves its output in an internal data structure called a buffer.
* The library uses the buffer to accumulate the characters to be written, and flushes the buffer.
* Three events that cause the system to flush the buffer.
   * buffer is full, library will flush automatically
   * library is asked to read input, library immediately flushes the output buffer
   * buffer can be flushed explicitly 
* Operator is overloaded when an operator has different meanings for operands of different types.
* **Two string literals cannot be concatenated: that is `“hello” + “World” `is an invalid operation. Although a string and a string literal can be concatenated.**
#### Chapter 2 - Loops and counting
* `unsigned` is an integral type that contains only non-negative values.
* `size_t` is an unsigned integral type that can hold any objects size.
* `string::size_type` is an unsigned integral type that can hold the size of any string.
#### Chapter 3
*
#### General
* Almost always right to use double for float-point computations.
