#ifndef STACK_HPP
#define STACK_HPP
#include <iostream>
namespace Stack {
struct StackNode {
    char data{0};
    StackNode *next{nullptr};
    StackNode(char value, StackNode *ptr = nullptr) {
        data = value;
        next = ptr;
    }
};

class Stack {
   public:
    Stack();
    Stack(const std::string &s);
    char pop();
    void push(char c);
    bool is_empty();
    void empty();
    char at_top();
    size_t size() const;
    friend std::ostream &operator<<(std::ostream &out, const Stack &s);
    ~Stack();

   private:
    size_t length{0};
    StackNode *top{nullptr};
};

}  // namespace Stack

#endif  // STACK_HPP
