#include "../headers/AlgUCS.h"
#include "../headers/AlgGeneric.h"
#include <queue>

queue<Node *>* AlgUCS::queuingFunction(queue<Node *>* curr_Queue, queue<Node *>* newNodes) {
    /*priority_queue<pair<int, int>, std::vector<pair<int,int>>, std::greater<pair<int,int>>> q;*/
    priority_queue<pair<int, Node*>, vector<pair<int, Node*> >, greater<pair<int, Node*> > > priority;

    while(!newNodes->empty()){
        Node * temp = newNodes->front(); //setting temp to front of queue, doesn't affect expanded nodes
        newNodes->pop(); //popping out of queue
        int search_cost = temp->getGn();
        priority.push(make_pair(search_cost, temp)); //creating int/Node pair which stores based on Gn cost in new priority queue
    }
    while(!curr_Queue->empty()){
        Node * temp = curr_Queue->front();
        curr_Queue->pop();
        int search_cost = temp->getGn();
        priority.push(make_pair(search_cost, temp));
    }

    while(!priority.empty()){
        curr_Queue->push(priority.top().second);
        priority.pop();
    }
    return curr_Queue;
}

AlgUCS::AlgUCS() {


}
