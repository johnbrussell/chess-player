#include "board.h"

#include <iostream>


Board::Board()
{
}

Board::Board(int x_size, int y_size)
{
    board_size_x = x_size;
    board_size_y = y_size;
}

bool Board::is_location_on_board(std::string desired_location)
{
    // Simplifying assumption: board size <= 9
    // Simplifying assumption: ASCII
    if(desired_location.length() != 2)
        return false;
    return true;
}
