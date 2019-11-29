#ifndef PLAYER_H
#define PLAYER_H

#include<iostream>
#include<vector>

class Player
{
    public:
        Player();
        virtual ~Player();

        bool Getplaying() { return playing; }
        void Setplaying(bool val) { playing = val; }
        std::vector<std::string>* GettrackList() { return trackList; }
        void SettrackList(std::vector<std::string>* val) { trackList = val; }
        int GetcurrentTrack() { return currentTrack; }
        void SetcurrentTrack(int val) { currentTrack = val; }
        //State Getstate() { return state; }
        //void Setstate(State val) { state = val; }

    protected:

    private:
        bool playing;
        std::vector<std::string>* trackList;
        int currentTrack;
        //State state;
};

#endif // PLAYER_H
