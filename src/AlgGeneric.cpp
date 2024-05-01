#include "../headers/AlgGeneric.h"

using namespace std;

Node *AlgGeneric::GeneralSearch(Problem* p) {
    queue<Node*> nodes;
    nodes.push(p->getInitialState());

    while(!nodes.empty()){
        Node* node = nodes.front();
        nodes.pop();

        if(node->isEqual(p->getGoalState())) {
            return node;
        }

        nodes = queingFunction(nodes, *node->expand(p));
    }
    // no node found, no possible solution exists
    return nullptr;
}

queue<Node *> AlgGeneric::queingFunction(queue<Node *>, queue<Node *>) {
    return queue<Node *>();
}

