#include <iostream>
#include "../include/Stack.hpp"
int precedence(char c)
{
	int result{0};
	if (c == '^')
		result = 3;
	else if (c == '*' || c == '/')
		result = 2;
	else if (c == '+' || c == '-')
		result = 1;
	return result;
}

std::string infix_to_postfix(std::string infix)
{
	std::string postfix;
	Stack::Stack stk;
	for (size_t i = 0; i < infix.size(); i++)
	{
		if (isalpha(infix.at(i)))
			postfix += infix.at(i);

		else if (infix.at(i) == '(')
			stk.push('(');

		else if (infix.at(i) == ')')
		{
			while (stk.at_top() != '(')
				postfix += stk.pop();
			stk.pop();
		}
		else
		{
			while (!stk.is_empty() && precedence(infix.at(i)) <= precedence(stk.at_top()))
			{
				postfix += stk.at_top();
				stk.pop();
			}
			stk.push(infix.at(i));
		}
		//        std::cout << postfix << "\n";
	}
	while (!stk.is_empty())
	{
		postfix += stk.at_top();
		stk.pop();
	}

	return postfix;
}
int main(int argc, char *argv[])
{
	std::string a = "(P+Q*(R+S)/U+S*T)";
	Stack::Stack s(a);
	//    Stack::StackNode *ptr = new Stack::StackNode(5);
	//    s.push(ptr);
	//    s.pop();
	std::cout << infix_to_postfix(a) << "\n";
	// std::cout << s;
	// s.pop();
	// std::cout << s;

	return 0;
}
