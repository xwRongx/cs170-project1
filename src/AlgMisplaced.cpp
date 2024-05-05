#include "../headers/AlgMisplaced.h"
queue<Node *>* AlgMisplaced::queuingFunction(queue<Node*> *q1, queue<Node*> *q2) {
    queue<Node *> *mergedQueue = new queue<Node *>();
    
    vector<Node*> vec1;

    while (!q1->empty()) {
        Node* currNode = q1->front();
        q1->pop();
        currNode->setHn(numberMisplacedTiles(currNode));
        currNode->setFn(currNode->getHn() + currNode->getGn());
        cout << currNode->getFn() << endl;
        vec1.push_back(currNode);
    }

    while (!q2->empty()) {
        Node* currNode = q2->front();
        q2->pop();
        currNode->setHn(numberMisplacedTiles(currNode));
        currNode->setFn(currNode->getHn() + currNode->getGn());
        cout << currNode->getFn() << endl;
        vec1.push_back(currNode);
    }

    
    int n = vec1.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (vec1[j]->getFn() < vec1[minIndex]->getFn()) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(vec1[i], vec1[minIndex]);
        }
    }

    for(int i = 0; i < vec1.size(); i++)
    {
        mergedQueue->push(vec1[i]);
    }    
    return mergedQueue;
}
AlgMisplaced::AlgMisplaced() {

}
