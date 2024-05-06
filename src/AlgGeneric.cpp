#include "../headers/AlgGeneric.h"
#include <queue>

using namespace std;

Node *AlgGeneric::GeneralSearch(Problem* p) {
    maxQueueNodes = 0;
    Display *d = new Display;
    queue<Node*>* nodes = new queue<Node*>;
    nodes->push(p->getInitialState());
    //p->resetMemoization();

    while(!nodes->empty()){
        Node* node = nodes->front();
        nodes->pop();

        if(node->isEqual(p->getGoalState())) {
            // found an answer
            return node;
        }

        nodes = queuingFunction(nodes, node->expand(p));

        maxQueueNodes = (maxQueueNodes > nodes->size()) ? maxQueueNodes : nodes->size();
        if (nodes == nullptr) {
            // If queuingFunction returns nullptr, exit the loop
            break;
        }
    }
    // no node found, no possible solution exists
    return nullptr;
}

queue<Node *>* AlgGeneric::queuingFunction(queue<Node *>*, queue<Node *>*) {
    return nullptr;
}
