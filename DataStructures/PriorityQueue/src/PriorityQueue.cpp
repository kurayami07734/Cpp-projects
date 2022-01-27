#include "../include/PriorityQueue.hpp"

void PriorityQueue::enqueue(std::string &s, int priority)
{
    PQNode node = PQNode(s, priority);
    pq.push_back(node);
    if (pq.size() == 1)
        return;
    else
    {
        int child = pq.size() - 1;
        int parent = (child - 1) / 2;
        while (pq.at(parent).priority > pq.at(child).priority && parent >= 0)
        {
            std::swap(pq.at(parent), pq.at(child));
            child = parent;
            parent = (child - 1) / 2;
        }
    }
}

std::string PriorityQueue::dequeue()
{
    // low priority number is considered higher priority
    std::string ans = pq.at(0).value;
    pq.at(0) = pq.back();
    if (pq.size() != 1)
    {
        int parent = 0;
        int l_child = 2 * parent + 1;
        int r_child = 2 * parent + 2;
        int min_child = std::min(pq.at(l_child).priority, pq.at(r_child).priority);
        while (pq.at(parent).priority > pq.at(min_child).priority)
        {
            std::swap(pq.at(parent), pq.at(min_child));
            parent = min_child;
            if (2 * parent + 1 < pq.size())
                l_child = 2 * parent + 1;
            if (2 * parent + 2 < pq.size())
                r_child = 2 * parent + 2;
            else
                break;
            min_child = std::min(pq.at(l_child).priority, pq.at(r_child).priority);
        }
    }
    pq.pop_back();
    return ans;
}

void PriorityQueue::display()
{
    for(auto node : pq)
        std::cout << node;
}
