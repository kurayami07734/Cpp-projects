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
};

class PriorityQueue
{
    //Implementing via min binary heap
private:
    std::vector<PQNode> pq;

public:
    PriorityQueue() = default;
    void enqueue(std::string &s, int priority);
    void enqueue(std::vector<PQNode> &v);
    std::string &dequeue();
};

#endif // PRIORITY_QUEUE_HPP