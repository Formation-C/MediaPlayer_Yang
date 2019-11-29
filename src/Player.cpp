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
}

Player::~Player()
{
    delete trackList;
}
