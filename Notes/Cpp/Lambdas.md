# Lambda Expressions

1. They were introduced in C++11
2. As a more manageable alternative to function objects
3. They are mainly used in tandem with STL algorithms

## Structure of lambda expression

```c++
[] () ->  return_type specifiers {}
```

1. [] defines the capture list of the lambda
2. Capture list defines the context in which the lambda will be executed
3. () is the parameter list of the lambda
4. return_type is the return type of the lambda and can omitted (the compiler will deduce it)
5. specifiers - **mutable** and **constexpr**
6. **auto** is used to tell compiler to deduce the type of the variable(it is commonly used with lambdas)

## Examples of stateless lambdas (_with an empty capture list_)

```c++
//unnamed lambda being defined and called in single statement
[] () {std::cout << "Unnamed lambda\n";}();

auto hello = [] () {std::cout << "Hello\n";};
hello(); // prints hello to the console


auto multiply = [] (int x, int y) -> int {return x*y;};
std::cout << multiply(10, 30); // prints 300 to the console
```
