#include "pausedState.h"

pausedState::~pausedState()
{
    //dtor
    std::cout << "Deleting Pause State" << std::endl;
}


void pausedState::onPlay()
{
    player->Setstate(new PlayingState(player));
    std::cout << player->startPalyback() << std::endl;
    delete this;
}

void pausedState::onStop()
{
    player->Setstate(new stoppedState(player));
    std::cout << player->stopPalyback() << std::endl;
    delete this;
}
