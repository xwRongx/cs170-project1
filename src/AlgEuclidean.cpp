#include "../headers/AlgEuclidean.h"
#include "../headers/AlgGeneric.h"
#include <queue>
#include <cmath>


queue<Node *>* AlgEuclidean::queuingFunction(queue<Node *> *curr_Queue, queue<Node *> *newNodes) {
    if (newNodes == nullptr && curr_Queue == nullptr){
        cout << "Error: Both queues are null pointers!\n";
        return nullptr;
    }

    queue<Node*> *frontier = new ::queue<Node*>;
    priority_queue<pair<int, Node*>, vector<pair<int, Node*> >, greater<pair<int, Node*> > > priority;
    
    while(!newNodes->empty()){
        Node * temp = newNodes->front();
        newNodes->pop();

        int Gn = temp->getGn();
        double Hn = calculateEuclideanDistance(*temp, *temp); // Update Hn using Euclidean distance
        double search_cost = Gn + Hn; // maybe format the decimal places of Hn and search cost
        priority.push(make_pair(search_cost, temp));
    }
    
    while(!curr_Queue->empty()){
        Node * temp = curr_Queue->front();
        curr_Queue->pop();

        int Gn = temp->getGn();
        double Hn = calculateEuclideanDistance(*temp, *temp); // Update Hn using Euclidean distance
        double search_cost = Gn + Hn; // maybe format the decimal places of Hn and search cost
        
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

AlgEuclidean::AlgEuclidean(Node& _goalNode) : goalNode(_goalNode) {
    // Constructor implementation
}
