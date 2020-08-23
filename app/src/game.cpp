#include "game.h"



// void Game::Draw(Game *game) {
//     system("clear");

//     for (int i = 0; i <= game->m_width; i++) {
//         cout << "#";
//     }
//     cout << endl;
//      for (int i = 0; i <= game->m_height; i++) {
//          for (int j = 0; j <= game->m_width; j++)
//          {
//             if (j == 0 || j == game->m_width - 1)
//                 cout << "#";
//             if (i == game->m_sy && j == game->m_sx)
//                 cout << "0";
//             else if (i == game->m_fy && j == game->m_fx)
//                 cout << "f";
//             else
//                 cout << " ";
//          }
//         cout << endl;
//     }
//     for (int i = 0; i <= game->m_width; i++) {
//         cout << "#";
//     }
//     cout << endl;
// }

// eDir Game::Input(eDir dir, Game &game) {
//     int ch = getch();

//     switch (ch)
//     {
//         case KEY_LEFT:
//             dir = LEFT;
//             break;
//         case KEY_RIGHT:
//             dir = RIGHT;
//             break;
//         case KEY_UP:
//             dir = UP;
//             break;
//         case KEY_DOWN:
//             dir = DOWN;
//             break;
//         case KEY_REPLACE :
//             game.m_gameover = true;
//             break;
//     }
//     return dir;
// }

// void Game::Logic(eDir dir, Game &game) {
//     switch (dir)
//     {
//         case LEFT:
//             game.m_sx--;
//             break;
//         case RIGHT:
//             game.m_sx++;
//             break;
//         case UP:
//             game.m_sy++;
//             break;
//         case DOWN:
//             game.m_sy--;
//             break;
//     }
// }
