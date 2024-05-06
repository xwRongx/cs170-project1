#include "../headers/AlgMisplaced.h"
queue<Node *>* AlgMisplaced::queuingFunction(queue<Node*> *q1, queue<Node*> *q2) {
    queue<Node *> *mergedQueue = new queue<Node *>();
    
    vector<Node*> vec1;

    while (!q1->empty()) {
        Node* currNode = q1->front();
        q1->pop();
        currNode->setHn(numberMisplacedTiles(currNode));
        currNode->setFn(currNode->getHn() + currNode->getGn());
        vec1.push_back(currNode);
    }

    while (!q2->empty()) {
        Node* currNode = q2->front();
        q2->pop();
        currNode->setHn(numberMisplacedTiles(currNode));
        currNode->setFn(currNode->getHn() + currNode->getGn());
        vec1.push_back(currNode);
    }

    priority_queue<Node*, vector<Node*>, CompareNodeFn> pq(vec1.begin(), vec1.end());

    while (!pq.empty()) {
        Node* currNode = pq.top();
        mergedQueue->push(currNode);
        pq.pop();
    }

    return mergedQueue;
}
AlgMisplaced::AlgMisplaced() {
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
