#include "src/game.h"
#include "SFML/Graphics.hpp"

using namespace sf;

int main(int argc, char **argv) {
    // int width = atoi(argv[1]);
    // int height = atoi(argv[2]);
    // Game *game = new Game(false, height, width, rand() % width, rand() % height, width/2 - 1, height/2 - 1);
    eDir dir;

    RenderWindow window(VideoMode(800, 600), "Skyrim Snake!");
    Texture background, refresh, food, square;

    if (!background.loadFromFile("app/resources/ground.jpg"))
        std::cerr << "ERROR LOAD IMG\n";
    if (!refresh.loadFromFile("app/resources/snake.png"))
        std::cerr << "ERROR LOAD IMG\n";
    if (!food.loadFromFile("app/resources/fruit.jpg"))
        std::cerr << "ERROR LOAD IMG\n";
    if (!square.loadFromFile("app/resources/block.jpg"))
        std::cerr << "ERROR LOAD IMG\n";

    background.setSmooth(true);
    refresh.setSmooth(true);
    food.setSmooth(true);
    square.setSmooth(true);

    Sprite grass(background), snake(refresh), fruit(food), block(square);

    grass.setPosition(0, 0);
    snake.setPosition(0, 0);

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
            if (event.type == Event::KeyPressed) {
                // if (!game->m_gameover) {
                    if (event.key.code == Keyboard::Right && dir != LEFT) {
                        dir = RIGHT;
                        std::cout << "HOROSHO L\n";
                    }
                    else if (event.key.code == Keyboard::Left && dir != RIGHT) {
                        dir = LEFT;
                        std::cout << "HOROSHO R\n";
                    }
                    else if (event.key.code == Keyboard::Down && dir != UP) {
                        dir = DOWN;
                        std::cout << "HOROSHO U\n";
                    }
                    else if (event.key.code == Keyboard::Up && dir != DOWN) {
                        dir = UP;
                        std::cout << "HOROSHO U\n";
                    }
                // }
            }

        }
        window.clear();
        window.draw(grass);
        // window.draw(snake);
        // window.draw(fruit);
        // window.draw(block);
        window.display();
    }

    // int width = atoi(argv[1]);
    // int height = atoi(argv[2]);
    // Game *game = new Game(false, height, width, rand() % width, rand() % height, width/2 - 1, height/2 - 1);
    // eDir dir;
    // int score = 0;
    // dir = STOP;
    // while (!game->m_gameover) 
    // {
    //     game->Draw(game);
    //     dir = game->Input(dir, *game);
    //     game->Logic(dir, *game);
    //     //cout << dir << endl;
    //     //game->setGameover(true);
    // }
    return 0;

}
>>>>>>> e79755b75e42e8b46f5ab180e0d99e6f766b9f61
