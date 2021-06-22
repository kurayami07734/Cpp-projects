#ifndef LIST_HPP
#define LIST_HPP
#include <iostream>
#include <exception>
struct node 
{
public:
    int data;
    node *next;
};

class list 
{
private:
    node *head{nullptr},*tail{nullptr};
    size_t length{0};
public:
    //constructors
    list(int[],size_t);
    list(const list&);
    
    //member methods
    void insert_node(node*,size_t);
    void delete_node(size_t);
    void swap_node(node*,node*);
    void sort();
//    void sort_by_node_swap();
    void reverse();
    size_t size();
    
    //operators
    int operator[](size_t);
    friend std::ostream& operator << (std::ostream &out,const list &l);
    
    //Destructor
    ~list();
};

class list_error : public std::exception 
{
private:
    const char* error_m;
public:
    list_error(char* msg) noexcept 
    {
        error_m = msg;        
    }
    virtual const char* what() const noexcept 
    {
        return error_m;
    }
    ~list_error() 
    {
        delete error_m;
    }
};

#endif // LIST_HPP
