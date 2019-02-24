#ifndef pawn
#define pawn

#include <iostream>


class Pawn
{
    public:
        bool push();
        bool double_push();
        bool take(std::string take_location)

    private:
        bool can_be_taken_en_passant;
        bool can_double_push;
        bool is_white;
};

#endif
