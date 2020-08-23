#pragma once
#include <cstdlib>
#include <iostream>

using namespace std;
enum eDir {
    STOP = 0,
    LEFT,
    RIGHT,
    UP,
    DOWN
};



class Game {
    public :
        bool m_gameover;
        int m_width, m_height;
        int m_fx, m_fy, m_sx, m_sy;
        int m_w_width, m_w_height;
        Game(bool gameover, int height, int width, int fx, int fy, int sx, int sy, int w_height, int w_width) {
            m_fx = fx;
            m_fy = fy;
            m_gameover = gameover;
            m_height = height;
            m_width = width;
            m_sx = sx;
            m_sy = sy;
            m_w_height = w_height;
            m_w_width = w_width;
        }
        void Draw(Game *game);
        eDir Input(eDir dir, Game &game);
        void Logic(eDir dir, Game &game);
        void setGameover(bool gameover) {
            m_gameover = gameover;
        }
};
