#ifndef piece
#define piece

#include <iostream>


class Piece
{
    public:


    private:
        std::string type;
        Location    location;
        *Pawn       pawn;
        *Rook       rook;
        *Knight     knight;
        *Bishop     bishop;
        *King       king;
        *Queen      queen;
};
