#ifndef ALGEUCLIDEAN
#define ALGEUCLIDEAN

#include "AlgGeneric.h"
#include <cmath>


using namespace std;

class AlgEuclidean : public AlgGeneric {
private:

/* 
determine the lowest f(n) among the frontier nodes
push that node to the front of the priority queue
pop the node once the tile is moved

functions:
calculateEuclideanDistance() - calculates the h(n) from the current node to goal state position

*/

struct Node {
    int x, y;
};

// Function to calculate the Euclidean distance between two nodes
double calculateEuclideanDistance(Node currentNode, Node goalNode) {
    // Calculate the differences in x and y coordinates
    int dx = currentNode.x - goalNode.x;
    int dy = currentNode.y - goalNode.y;
    
    double squaredDistance = (dx * dx) + (dy * dy);
    
    double distance = sqrt(squaredDistance);
    
    return distance;
}

public:
    queue<Node*>* queuingFunction(queue<Node*>*, queue<Node*>*) override;
    AlgEuclidean();
};

#endif