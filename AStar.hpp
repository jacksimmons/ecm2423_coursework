#include <vector>
#include <deque>
#include <tuple>

#include "Vector2.hpp"
#include "CostNode.hpp"
#include "CostNode.hpp"
#include "Maze.hpp"

// Function templates

// Sets up and starts the A* search algorithm.
void runAStar(char, bool);

// Runs the A* search algorithm.
std::tuple<Path, int> astar(char, Vector2*, Vector2*, char*);

// Carries out one pass of an insertion sort, to get a priority queue structure for potential_list.
std::deque<CostNode *> insertionSortByCost(std::deque<CostNode *> &list);

// Returns true if the first argument is higher up in the parent hierarchy.
// Meaning if the first argument is a parent, grandparent, etc. of the second.
bool isNodeParentOf(CostNode *potential_parent, CostNode *potential_child);

// Carries out isNodeParentOf for an entire deque.
bool isAnyNodeParentOf(std::deque<CostNode *> &nodes, CostNode *node);

// Returns true if the node, or any of its children, have traversed the provided Vector2 (*getPos() == *vec).
bool hasNodeExplored(CostNode *node, Vector2 *vec);

// Returns true if the Vector2* is present in the vector<Vector2*>.
bool isPosInVector(Vector2 *pos, Path &vecs);