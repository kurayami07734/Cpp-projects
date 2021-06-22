#include "Stack.hpp"
Stack::Stack::Stack()
    : top(nullptr), length(0)
{
}

Stack::Stack::Stack(const std::string &s)
{
    length = s.size();
    for (size_t i = 0; i < length; i++)
    {
        StackNode *ptr = new StackNode(s.at(i));
        if (top == nullptr)
            top = ptr;
        else
        {
            ptr->next = top;
            top = ptr;
        }
    }
}

size_t Stack::Stack::size() const
{
    return this->length;
}

bool Stack::Stack::is_empty()
{
    return (top == nullptr);
}

char Stack::Stack::at_top()
{
    return top->data;
}

void Stack::Stack::empty()
{
    top = nullptr;
    return;
}

char Stack::Stack::pop()
{
    if (top == nullptr)
        return -1;
    char value = top->data;
    top = top->next;
    length--;
    return value;
}

void Stack::Stack::push(char c)
{
    StackNode *ptr = new StackNode(c);
    if (top == nullptr)
    {
        top = ptr;
        ptr->next = nullptr;
        length++;
    }
    else
    {
        ptr->next = top;
        top = ptr;
        length++;
    }
}

std::ostream &Stack::operator<<(std::ostream &out, const Stack &s)
{
    StackNode *ptr = s.top;
    if (ptr == nullptr)
        out << "Stack is empty\n";
    while (ptr != nullptr)
    {
        out << "|" << ptr->data << "|\n";
        ptr = ptr->next;
    }
    out << std::endl;
    return out;
}

Stack::Stack::~Stack()
{
    delete top;
}
