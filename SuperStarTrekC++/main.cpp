//
//  Kyle Samson
//  C++ Programming II
//  Super Star Trek Main
//

#include "starTrek.hpp"

int main()
{
    StarTrek* ptrStarTrekGame = new StarTrek();
    ptrStarTrekGame->play();
    delete ptrStarTrekGame;

    return 0;
}