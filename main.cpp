#include <time.h>
#include "gameloop.h"

int main() {
    srand(time(0));

    GameLoop gameLoop;

    gameLoop.start();


}



