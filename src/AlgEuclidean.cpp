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
        double Hn = calculateEuclideanDistance(temp); // Update Hn using Euclidean distance
        double search_cost = Gn + Hn; // maybe format the decimal places of Hn and search cost
        priority.push(make_pair(search_cost, temp));
    }
    
    while(!curr_Queue->empty()){
        Node * temp = curr_Queue->front();
        curr_Queue->pop();

        int Gn = temp->getGn();
        double Hn = calculateEuclideanDistance(temp); // Update Hn using Euclidean distance
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

double AlgEuclidean::calculateEuclideanDistance(Node* node) {
    int currentRow = -1;
    int currentCol = -1;
    int goalRow = -1;
    int goalCol = -1;
    
    // Find the positions of the current node and the goal node
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (node->getTile(i, j) == 0) {
                currentRow = i;
                currentCol = j;
            }
            if (goalState[i][j] == 0) {
                goalRow = i;
                goalCol = j;
            }
        }
    }

    // Calculate Euclidean distance
    int dRow = currentRow - goalRow;
    int dCol = currentCol - goalCol;
    double squaredDistance = (dRow * dRow) + (dCol * dCol);
    double distance = sqrt(squaredDistance);
    
    return distance;
}

AlgEuclidean::AlgEuclidean() {
}
