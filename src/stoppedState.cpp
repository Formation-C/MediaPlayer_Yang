#include "stoppedState.h"

stoppedState::~stoppedState()
{
    //dtor
}

void stoppedState::onPlay()
{
    player->Setstate(new PlayingState(player));
    std::cout << player->startPalyback() << std::endl;
}

void stoppedState::onStop()
{
    std::cout << "ERROR, already Stopped" << std::endl;
}
