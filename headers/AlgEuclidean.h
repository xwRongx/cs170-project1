#ifndef ALGEUCLIDEAN
#define ALGEUCLIDEAN

#include "AlgGeneric.h"
#include <cmath>

using namespace std;

class AlgEuclidean : public AlgGeneric {
private:

// Function to calculate the Euclidean distance between current position and goal state position
double calculateEuclideanDistance(Node* node) {
    int goalState[3][3] = {{1,2,3}, {4,5,6},{7,8,0}};
    // Get the positions of the current node and the goal node
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


    // Calculate manhattan distance betwen current node and goal node
    int dRow = currentRow - goalRow;
    int dCol = currentCol - goalCol;
    
    double squaredDistance = (dRow * dRow) + (dCol * dCol);
    
    double distance = sqrt(squaredDistance);
    
    return distance; // Returns the Euclidean distance
}

public:
    queue<Node*>* queuingFunction(queue<Node*>*, queue<Node*>*) override;
    AlgEuclidean();
};

#endif