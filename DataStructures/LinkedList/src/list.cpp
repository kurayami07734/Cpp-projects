#include "../include/list.h"
#include <iostream>
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

list::list(int a[], size_t size)
{
    length = size;
    for (size_t i = 0; i < size; i++)
    {
        node *ptr = new node;
        ptr->data = a[size - 1 - i];
        if (head == nullptr)
        {
            head = tail = ptr;
            ptr->next = nullptr;
        }
        else
        {
            ptr->next = head;
            head = ptr;
        }
    }
}

list::list(const list &l)
{
    head = l.head;
    tail = l.tail;
}

void list::insert_node(node *ptr, size_t pos)
{
    if (pos >= 0 && pos <= length)
    {
        length++;
        if (pos == 1)
        {
            ptr->next = head;
            head = ptr;
        }
        else
        {
            node *pre, *cur;
            cur = head;
            for (size_t i = 0; i < pos; i++)
            {
                pre = cur;
                cur++;
            }
            ptr->next = cur;
            pre->next = ptr;
            delete pre;
            delete cur;
        }
    }
    else
        throw list_error("Out of bounds");
}

void list::delete_node(size_t pos)
{
    if (pos >= 0 && pos <= length)
    {
        length--;
        if (pos == 1)
        {
            head = head->next;
        }
        else
        {
            node *pre, *cur;
            cur = head;
            for (size_t i = 0; i < pos; i++)
            {
                pre = cur;
                cur = cur->next;
            }
            pre->next = nullptr;
            delete pre;
            delete cur;
        }
    }
    else
        throw list_error("Out of bounds");
}

void list::sort() //selection sort
{
    node *i{this->head}, *j{nullptr}, *min{nullptr};
    while (i != nullptr)
    {
        j = i->next;
        min = i;
        while (j != nullptr)
        {
            if (min->data > j->data)
                min = j;
            j = j->next;
        }
        swap(i->data, min->data);
        i = i->next;
    }
    //    delete i;
    //    delete j;
    //    delete min;
}
// ! This function is not implemented completely yet
void list::swap_node(node *first, node *second)
{
    if (first == head && second == tail)
    {
        node *temp = head;
        head = tail;
        head->next = nullptr;
        tail = temp;
        tail->next = temp->next;
    }
    else if (first == head and second != tail)
    {
        node *prev_second = head;
        while (prev_second->next != second)
            prev_second = prev_second->next;

        prev_second->next = first;
        node *temp = first->next;
        first->next = second->next;
        second->next = temp;
        head = second;
        temp = nullptr;
        prev_second = nullptr;
    }
    else if (first != head and second == tail)
    {
        node *prev_first{head}, *prev_second{head};

        while (prev_first->next == first)
            prev_first = prev_first->next;

        while (prev_second->next == second)
            prev_second = prev_second->next;

        prev_first->next = second;
        second->next = first->next;
        first->next = nullptr;
        prev_second->next = first;
        tail = first;

        prev_first = nullptr;
        prev_second = nullptr;
    }
    else
    {
        node *prev_first{head}, *prev_second{head};

        while (prev_first->next != first)
            prev_first = prev_first->next;

        while (prev_second->next != second)
            prev_second = prev_second->next;

        prev_first->next = second;
        prev_second->next = first;
        node *temp = first->next;
        first->next = second->next;
        second->next = temp;

        prev_first = nullptr;
        prev_second = nullptr;
        temp = nullptr;
    }
}

void list::reverse()
{
    //iterative approach
    // if you have head and tail pointers just swap them
    // that'll also reverse the linked list
    node *pre{nullptr}, *cur{head}, *next{nullptr};
    tail = head;
    while (cur != nullptr)
    {
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    head = pre;
    //    std::cout << head;
    //    delete pre;
    //    delete cur;
    //    delete next;
}

size_t list::size()
{
    return this->length;
}

int list::operator[](size_t index)
{
    if (index >= 0 && index <= length)
    {
        node *ptr = head;
        for (size_t i = 0; i < index; i++)
            ptr = ptr->next;
        return ptr->data;
    }
    else
        throw list_error("Out of bounds");
}

std::ostream &operator<<(std::ostream &out, const list &l)
{
    node *ptr = l.head;
    while (ptr != nullptr)
    {
        if (ptr->next == nullptr)
            out << ptr->data;
        else
            out << ptr->data << " --> ";

        ptr = ptr->next;
    }
    out << std::endl;
    return out;
}

list::~list()
{
    delete head;
    delete tail;
}
