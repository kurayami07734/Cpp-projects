#ifndef PRIORITY_QUEUE_HPP
#define PRIORITY_QUEUE_HPP
#include <iostream>
#include <string>
#include <vector>
struct PQNode
{
    std::string value;
    int priority;
    PQNode() = default;
    PQNode(std::string &val, int priority)
        : value(val), priority(priority)
    {
    }
    friend std::ostream& operator<<(std::ostream& out, const PQNode &p)
    {
        out << "Name " << p.value << "\nPriority " << p.priority << "\n";
        return out;
    }
    void operator=(const PQNode &p)
    {
        value = p.value;
        priority = p.priority;
    }
};

class PriorityQueue
{
    //Implementing via min binary heap
private:
    std::vector<PQNode> pq;

public:
    PriorityQueue() = default;
    void enqueue(std::string &s, int priority);
    std::string dequeue();
    void display();
};

#endif // PRIORITY_QUEUE_HPP