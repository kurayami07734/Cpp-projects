#include <exception>
#include <iostream>
#ifndef QUEUE_HPP
#define QUEUE_HPP

// Queue is a linear data structure
// Insertion and Deletion works on FIFO
// First in First out

namespace Queue {
template <typename T>
struct QueueNode {
    T data;
    QueueNode<T>* next;
    QueueNode() : data(0), next(nullptr) {}
    QueueNode(T value, QueueNode<T>* ptr = nullptr) : data(value), next(ptr) {}
};

template <typename T>
class Queue {
   private:
    QueueNode<T>*front{nullptr}, *back{nullptr};
    size_t length{0};

   public:
    Queue() : length(0), front(nullptr), back(nullptr) {}
    Queue(T a[], size_t size) {
        for (size_t i = 0; i < size; i++) {
            QueueNode<T>* ptr = new QueueNode<T>(a[i]);
            if (front == nullptr) {
                front = ptr;
                back = ptr;
                length++;
            } else {
                back->next = ptr;
                back = ptr;
                length++;
            }
        }
    }
    bool is_empty() { return (front == nullptr && back == nullptr); }
    size_t size() const { return length; }
    void enqueue(T data) {
        QueueNode<T>* ptr = new QueueNode<T>(data);
        if (front == nullptr && back == nullptr) {
            front = ptr;
            back = ptr;
            length++;
        } else {
            back->next = ptr;
            back = ptr;
        }
    }
    T dequeue() {
        if (front == nullptr) return -1;
        //            throw QueueError("Underflow");
        else {
            length--;
            T value = front->data;
            front = front->next;
            return value;
        }
    }
    ~Queue() {
        delete front;
        delete back;
    }
    friend std::ostream& operator<<(std::ostream& out, const Queue<T>& q) {
        QueueNode<T>* ptr = q.front;
        while (ptr != nullptr) {
            out << ptr->data << " ";
            ptr = ptr->next;
        }
        out << "\n";
        return out;
    }
};

class QueueError : public std::exception {
   public:
    QueueError(char* msg) noexcept { error_m = msg; }

    virtual const char* what() const noexcept { return error_m; }

    ~QueueError() { delete error_m; }

   private:
    char* error_m;
};

}  // namespace Queue

#endif  // QUEUE_HPP
