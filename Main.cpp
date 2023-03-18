#include "AStar.h"
#include "DFS.h"
#include "Constants.h"

Vector2 *LEFT = new Vector2(-1, 0);
Vector2 *UP = new Vector2(0, -1);
Vector2 *RIGHT = new Vector2(1, 0);
Vector2 *DOWN = new Vector2(0, 1);
Vector2 *ZERO = new Vector2(0, 0);

int main()
{
    //runDFS();
    runAStar();

    delete UP;
    delete DOWN;
    delete LEFT;
    delete RIGHT;
    delete ZERO;
}