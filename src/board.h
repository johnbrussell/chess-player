#ifndef board
#define board

#include <iostream>


class Board
{
    public:
        Board();
        Board(int x_size, int y_size);
        bool is_location_on_board(std::string location);

    private:
        bool set_piece();
        int  board_size_x;
        int  board_size_y;
};

#endif
