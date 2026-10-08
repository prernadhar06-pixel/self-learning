//understand
#include <iostream>
#include <stack>
#include <stdexcept>

class QueueUsingStacks {
private:
    std::stack<int> s1; // S1: Used only for insertion
    std::stack<int> s2; // S2: Elements inserted into S2 when S2 is empty

    // Helper to transfer elements from S1 to S2 when S2 is empty
    void transfer() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
    }

public:
    // 1. Push into S1
    void enqueue(int x) {
        s1.push(x);
    }

    // 1. If both S1 & S2 are empty, underflow
    // 2. If S2 empty: move all elements from S1 to S2
    // 3. Pop from S2
    int dequeue() {
        if (s1.empty() && s2.empty()) {
            throw std::underflow_error("Queue Underflow");
        }
        transfer();
        int val = s2.top();
        s2.pop();
        return val;
    }

    // 1. If both empty, underflow
    // 2. If S2 empty: move all elements from S1 to S2
    // 3. Peek top of S2
    int peek() {
        if (s1.empty() && s2.empty()) {
            throw std::underflow_error("Queue Underflow");
        }
        transfer();
        return s2.top();
    }

    bool empty() const {
        return s1.empty() && s2.empty();
    }
};

int main() {
    QueueUsingStacks q;

    // Following operations from your table:
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    std::cout << "peek(): " << q.peek() << std::endl;         // Output: 20
    std::cout << "dequeue(): " << q.dequeue() << std::endl;   // Output: 20
    std::cout << "peek(): " << q.peek() << std::endl;         // Output: 30

    q.enqueue(20);
    std::cout << "dequeue(): " << q.dequeue() << std::endl;   // Output: 30
    std::cout << "peek(): " << q.peek() << std::endl;         // Output: 40

    return 0;
}