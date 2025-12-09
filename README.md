# TicTacToe

-Simple cross-platform  terminal based tic-tac-toe game
-Made in CMake
-It has not been tested on a mac
-Works on linux and windows

# Requirements

-CMake version 4.1.2 or higher
-C++ version 11 or higher

# Installation (linux)

-First clone the repo then:

mkdir build
cd build
cmake ..
make
./TicTacToe

# Instructions
                
-> Row: | | |
        -----
        | | |
        -----
        | | |
          ^
          |
        Column

-Player X starts first
-Firstly enter the row and then column 0 is the start of the row/column and 2 is the end
-For example:
    1 1
would take the center
-You can not take a space not empty
-All moves must be within 0-2
-The game will end if a player has filled 3 boxes with their letter either horizontally,vertically or diagonally
-It will also end in the result of a draw
-Only enter numbers for the moves

# Why I made this

-I made this for fun and to improve my C++ skills any feedback and suggestions are welcome
