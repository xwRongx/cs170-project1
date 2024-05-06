#ifndef ALGEUCLIDEAN
#define ALGEUCLIDEAN

#include "AlgGeneric.h"
#include "Problem.h"
#include <cmath>

using namespace std;

class AlgEuclidean : public AlgGeneric {
private:
    int goalState[SIZE][SIZE];    
public:
    queue<Node*>* queuingFunction(queue<Node*>*, queue<Node*>*) override;
    
    float calculateEuclideanDistance(Node* node){
        int currentRow = -1;
        int currentCol = -1;
        int goalRow = -1;
        int goalCol = -1;
        
        // Find the positions of the current node and the goal node
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
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
        float squaredDistance = (dRow * dRow) + (dCol * dCol);
        float distance = sqrt(squaredDistance);
        
        return distance;
    }

    AlgEuclidean();
};

#endif
