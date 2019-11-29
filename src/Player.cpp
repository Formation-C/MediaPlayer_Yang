#include "Player.h"

#include<iostream>
#include<vector>
Player::Player()
{
    Setplaying(false);
    trackList = new std::vector<std::string>{};
    for (int i = 0; i < 12; i++)
    {
//        std::ostringstream oss;
        trackList->push_back("Track " + std::to_string(i));
    }

    Setstate(new stoppedState(this));
}

Player::~Player()
{
    delete trackList;
}

std::string Player::startPalyback()
{
    return "Playing" + trackList->at(currentTrack);
};

std::string Player::pausePalyback()
{
    return "Paused" + trackList->at(currentTrack);
};

std::string Player::stopPalyback()
{
    currentTrack = 0;
    return "Stopped";
};

std::string Player::nextTrack()
{
    currentTrack++;
    currentTrack %= trackList->size();
    return "Playing" + trackList->at(currentTrack);
};

std::string Player::previousTrack()
{
    currentTrack--;
    currentTrack %= trackList->size();
    return "Playing" + trackList->at(currentTrack);
};
