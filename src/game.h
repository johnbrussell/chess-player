#ifndef game
#define game

#include "board.h"

#include <iostream>
#include <string>

const int   board_size_x =                      8;
const int   board_size_y =                      8;
const float moves_since_capture_for_stalemate = 50;
const bool  white_moves_first =                 true;

struct Move
{
    int x_from;
    int y_from;
    int x_to;
    int y_to;
};

class Game
{   
    public: 
        // Constructor
        Game();
        
        // Functions
        void play_game();

    private: 
        // Functions
        bool        move();
        Move        ask_for_move();
        std::string ask_for_location_on_board(std::string description);
        bool        is_location_on_board(std::string desired_location);
        Move        parse_move(std::string move_string_origin, std::string move_string_destination);

        // Variables
        Board game_board;
        float moves_since_capture;
        bool  is_white_turn;
};

#endif
