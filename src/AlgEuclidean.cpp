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

        float euclideanDistance = calculateEuclideanDistance(temp); 
        temp->setHnEuclidean(euclideanDistance);

        float search_cost = Gn + euclideanDistance; 
        priority.push(make_pair(search_cost, temp));
    }
    
    while(!curr_Queue->empty()){
        Node * temp = curr_Queue->front();
        curr_Queue->pop();
        
        int Gn = temp->getGn();

        float euclideanDistance = calculateEuclideanDistance(temp); 
        temp->setHnEuclidean(euclideanDistance);

        float search_cost = Gn + euclideanDistance; 
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

AlgEuclidean::AlgEuclidean() {
    int tile = 1;
    int board_size = SIZE*SIZE;
    //initialize board to goal state
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if(tile < board_size){
                goalState[i][j] = tile;
                tile++; 
            }
            else{
                goalState[i][j] = 0;
            }
        }
    }
}
