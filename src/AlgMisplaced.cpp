#include "../headers/AlgMisplaced.h"
queue<Node *>* AlgMisplaced::queuingFunction(queue<Node*> *q1, queue<Node*> *q2) {
    priority_queue<Node*, vector<Node*>, decltype(&compareNodeByFn)> pq1(compareNodeByFn), pq2(compareNodeByFn);
    queue<Node *> *mergedQueue = new queue<Node *>();

    while (!q1->empty()) {
        pq1.push(q1->front());
        q1->pop();
    }
    while (!q2->empty()) {
        pq2.push(q2->front());
        q2->pop();
    }

    while (!pq1.empty() || !pq2.empty()) 
    {
        if (!pq1.empty() && !pq2.empty()) 
        {
            if (!compareNodeByFn(pq1.top(), pq2.top())) 
            {
                mergedQueue->push(pq1.top());
                pq1.pop();
            } 
            else 
            {
                mergedQueue->push(pq2.top());
                pq2.pop();
            }
        } 
        else if (!pq1.empty()) 
        {
            mergedQueue->push(pq1.top());
            pq1.pop();
        } 
        else if (!pq2.empty()) 
        {
            mergedQueue->push(pq2.top());
            pq2.pop();
        }
    }

    return mergedQueue;
}
AlgMisplaced::AlgMisplaced() {

}
