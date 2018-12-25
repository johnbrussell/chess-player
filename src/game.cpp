#define CATCH_CONFIG_MAIN
#include "board.h"
#include "game.h"

#include <iostream>
#include <string>


Game::Game()
{
    moves_since_capture = 0;
    is_white_turn = white_moves_first;
}

void Game::play_game()
{
    move();
}

bool Game::move()
{
    Move move_to_play = ask_for_move();
    return true;
}

Move Game::ask_for_move()
{
    std::string move_string_origin;
    std::string move_string_destination;
    bool is_valid_move = false;

    while(!is_valid_move)
    {
        move_string_origin = ask_for_location_on_board("location of piece to move");
        move_string_destination = ask_for_location_on_board("location to move the piece");

        is_valid_move = true;
    }

    return parse_move(move_string_origin, move_string_destination);
}

std::string Game::ask_for_location_on_board(std::string description)
{
    std::string desired_location;
    bool location_is_on_board = false;
    
    while(!location_is_on_board)
    {
        std::cout << "Enter " << description << ": ";
        std::cin >> desired_location;
        
        location_is_on_board = game_board.is_location_on_board(desired_location);
    }
    
    return desired_location;
}

Move Game::parse_move(std::string move_string_origin, std::string move_string_destination)
{
    Move parsed_move;

    parsed_move.x_from = 0;
    parsed_move.x_to = 0;
    parsed_move.y_from = 0;
    parsed_move.y_to = 0;

    return parsed_move;
}
