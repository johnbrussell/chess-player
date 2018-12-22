#include "game.h"

#include <iostream>


Game::Game()
{
    moves_since_capture = 0;
    is_white_turn = white_moves_first;
}


void Game::play_game()
{
    std::cout << board_size_x << "," << board_size_y << "\n";
    std::cout << is_white_turn << ", " << moves_since_capture << "\n";
}
