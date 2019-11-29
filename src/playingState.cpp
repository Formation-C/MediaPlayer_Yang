#include "playingState.h"

playingState::~playingState()
{
    //dtor
}

void playingState::onPlay()
{
    std::cout << player->startPalyback() << std::endl;
}

void playingState::onStop()
{
    player->Setstate(new StoppedState(player));
    std::cout << player->stopPalyback() << std::endl;
}
