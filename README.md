I hope to build out this repository so that it:
- knows the rules to chess
- allows two people to play each other
- can recommend moves for any state of the game

Notes on using this, mostly to help me: 
- to compile the code, use g++ like always. `g++ -Wall main.cpp src/*.cpp` should do the trick. 
- to run the code, simply hit ./a.out (unless you've used a `-o` g++ option).
- to compile the tests, use `g++ -Wall src/*.cpp test/*.cpp`. If you're not me, which you're not, you'll potentially have to install [Catch](https://github.com/catchorg/Catch2) and put the `catch.hpp` file in `./test/catch/catch.hpp`.
- to run the tests, also use `./a.out` (notwithstanding any `-o` tomfoolery).
