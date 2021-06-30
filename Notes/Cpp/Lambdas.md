# Lambda Expressions

## Index

1. [introduction](#intro)
2. [structure](#struct)
3. [Examples of stateless lambdas](#eg-stls)

## <a name="intro"> Introduction </a>

1. They were introduced in C++11
2. As a more manageable alternative to function objects
3. They are mainly used in tandem with STL algorithms

## <a name="struct"> Structure of lambda expression </a>

```c++
[] () ->  return_type specifiers {}
```

1. [] defines the capture list of the lambda
2. Capture list defines the context in which the lambda will be executed
3. () is the parameter list of the lambda
4. return_type is the return type of the lambda and can omitted (the compiler will deduce it)
5. specifiers - `mutable` and `constexpr`
6. `auto` is used to tell compiler to deduce the type of the variable(it is commonly used with lambdas)

## <a name="eg-stls">Examples of stateless lambdas (_with an empty capture list_)</a>

```c++
//unnamed lambda being defined and called in single statement
[] () {std::cout << "Unnamed lambda\n";}();

auto hello = [] () {std::cout << "Hello\n";};
hello(); // prints hello to the console

//parameters can be passed by value or reference
auto multiply = [] (int x, int y) -> int {return x * y;};
std::cout << multiply(10, 30); // prints 300 to the console


//writing STL like algorithm function which can take lambdas as input
//include <functional> for std::function
void filter_vector(std::vector<int> &v, std::function<bool(int)> func)
{
    //std::function<bool(int)> func is written in C++14 or higher
    //in C++20, auto func can written instead
	for (const int &i : v)
		if (func(i))
			std::cout << i << " ";
	std::cout << std::endl;
}

int add_if(std::vector<int> &v, std::function<bool(int)> func)
{
	int sum{0};
	for (const int &i : v)
		if (func(i))
			sum += i;
	return sum;
}

```

## Examples of Stateful Lambdas
