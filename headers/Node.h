#ifndef NODE
#define NODE
class Node
{
private:
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
    Node* parent;
    Node* childLeft; //if empty is moved left
    Node* childRight; //if empty is moved right
    Node* childUp; //if empty is moved up
    Node* childDown; //if empty is moved down
    
public:
    //Node() no args makes goal state
    Node();
    Node(int b[3][3]);
    ~Node();

    //setters
    void setParent(Node* parent);
    void setChildLeft(Node* left);
    void setChildRight(Node* right);
    void setChildUp(Node* up);
    void setChildDown(Node* down);
    void setTile(int row, int col, int value);

    //return tile at location on board
    int getTile(int row, int col);
    
    
};



Node::~Node()
{
}

#endif