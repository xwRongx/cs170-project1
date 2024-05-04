#ifndef NODE
#define NODE

#include <queue>
#include "Problem.h"
#include "Display.h"
using namespace std;

class Node
{
private:
    friend class Display;

    // represents board state as 2D array
    /* board[row][column]
          columns
    row 1 |1 2 3|
    row 2 |4 5 6|
    row 3 |7 8 0|

    Empty tile is represented by 0
    */
    int board[3][3];

    //relational nodes in tree
    Node* parent = nullptr;
    Node* childLeft = nullptr; //if empty is moved left
    Node* childRight = nullptr; //if empty is moved right
    Node* childUp = nullptr; //if empty is moved up
    Node* childDown = nullptr; //if empty is moved
    
    //information for algorithms 
    int gn; //g(n), # steps from initial state 
    int hn; //h(n), heuristic calculation to goal state
    int fn; //for A* misplaced search, f(n) = g(n) + h(n)

    // for A* Euclidean search we may receive a decimal value
    float hn_euclidean;  // Euclidean heuristic
    
public:
    //Node() no args makes goal state
    Node();
    //Node(array<array<int, 3>, 3>) takes a 2d array and makes it a node
    Node(array<array<int, 3>, 3> b);
    //takes parent node and duplicates that board state, sets parent ptr, increments gn
    Node(Node* parentNode);
    ~Node();

    //setters
    void setParent(Node* parent);
    void setChildLeft(Node* left);
    void setChildRight(Node* right);
    void setChildUp(Node* up);
    void setChildDown(Node* down);
    //needs row and col location on board, and value to set it to
    void setTile(int row, int col, int value);
    void setGn(int i);
    void setHn(int i);
    void setFn(int i);
    void setHnEuclidean(float euclideanDistance);
    // void setFnEuclidean(int i);

    //getters
    // return tile at location on board
    int getTile(int row, int col); 
    Node* getParent() const;
    Node* getChildLeft() const;
    Node* getChildRight() const;
    Node* getChildUp() const;
    Node* getChildDown() const;
    int getGn();
    int getHn();
    int getFn();
    
    float getHnEuclidean(); // s
    string path = ""; //stores the paths taken for each node


    //checks if nodes have same board state
    bool isEqual(Node* n);
    //returns vector of new nodes created via using valid operators 
    queue<Node*>* expand(Problem* p);
    
};

#endif
