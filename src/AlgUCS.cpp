#include "../headers/AlgUCS.h"
#include "../headers/AlgGeneric.h"
#include "../headers/Node.h"
#include <queue>

queue<Node *>* AlgUCS::queuingFunction(queue<Node *> *curr_Queue, queue<Node *> *newNodes) {
    /*priority_queue<pair<int, int>, std::vector<pair<int,int>>, std::greater<pair<int,int>>> q;*/
    if (newNodes == nullptr && curr_Queue == nullptr) {
        cout << "Error: Both queues are null pointers!\n";
        return nullptr;
    }
    queue<Node*> *frontier = new ::queue<Node*>;
    priority_queue<pair<int, Node*>, vector<pair<int, Node*> >, greater<pair<int, Node*> > > priority;
    while(!newNodes->empty()){
        Node * temp = newNodes->front(); //setting temp to front of queue, doesn't affect expanded nodes
        newNodes->pop(); //popping out of queue
        int search_cost = temp->getGn();
        cout << "gn = " << search_cost << endl;
        priority.push(make_pair(search_cost, temp)); //creating int/Node pair which stores based on Gn cost in new priority queue
    }
    while(!curr_Queue->empty()){
        Node * temp = curr_Queue->front();
        curr_Queue->pop();
        int search_cost = temp->getGn();
        priority.push(make_pair(search_cost, temp));
    }
    if (priority.empty()) {
        return nullptr;
    }

    while(!priority.empty()){
        frontier->push(priority.top().second);
        priority.pop();
    }
    return frontier;
}

AlgUCS::AlgUCS() {
}
