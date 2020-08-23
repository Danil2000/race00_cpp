#include "src/game.h"
using namespace std;

int main(int argc, char **argv) {
    if (argc < 3)
    {
        cerr << "invalid arguments" << endl;
        return 1;
    }
    int width = atoi(argv[1]);
    int height = atoi(argv[2]);
    Game *game = new Game(false, height, width, rand() % width, rand() % height, width/2 - 1, height/2 - 1);
    eDir dir;
    int score = 0;
    dir = STOP;
    while (!game->m_gameover) 
    {
        game->Draw(game);
        dir = game->Input(dir, game);
        game->Logic(dir, game);
        sleep(1);
    }
}