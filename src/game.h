#ifndef game
#define game

#include <iostream>

const int   board_size_x =                      8;
const int   board_size_y =                      8;
const float moves_since_capture_for_stalemate = 50;
const bool  white_moves_first =                 true;

class Game
{
    public: 
        Game();
        
        void play_game();

    private: 
        float moves_since_capture;
        bool  is_white_turn;
};
#endif
