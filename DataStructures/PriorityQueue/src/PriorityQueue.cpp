#include "../include/PriorityQueue.hpp"

void PriorityQueue::enqueue(std::string &s, int priority)
{
    PQNode node = PQNode(s, priority);
    pq.push_back(node);
    if (pq.size() == 1)
        return;
    else
    {
        size_t child_index = pq.size() - 1;
        size_t parent_index = (child_index - 1) / 2;
        while (pq.at(parent_index).priority > pq.at(child_index).priority)
        {
            std::swap(pq.at(parent_index), pq.at(child_index));
            child_index = parent_index;
            parent_index = (child_index - 1) / 2;
        }
    }
}
void PriorityQueue::enqueue(std::vector<PQNode> &v)
{
    for(auto node : v)
        enqueue(node.value, node.priority);
}
std::string &PriorityQueue::dequeue()
{
}
