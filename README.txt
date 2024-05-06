CS 170 Project 1: 8-tile Puzzle Solver
Github link: https://github.com/xwRongx/cs170-project1

class Problem: stores problem space of problem
class Node: stores board representation in 3x3 2D array
class Tree: keeps track of all expanded nodes
abstract class AlgGeneric: generic algorithm, contains generalSearch function which can be inherited and modified into any algorithm
class AlgUCS: inherits from AlgGeneric, queuingFunction queues by least g(n)
class AlgMisplaced: inherits from AlgGeneric, queuing function queues by least f(n) = g(n) + h(n), where h(n) is # of misplaced tiles
class AlgEuclidean: inherits from AlgGeneric, queuing function queues by least f(n) = g(n) + h(n), where h(n) is Euclidean distance from goal
class Display: helps with displaying nodes and solution path
main.cpp: runs everything, has user input 

Algorithms: 
* Uniform Cost Search
* A* algorithm with misplaced tile heuristic
* A* algorithm with Euclidean distanace heuristic
