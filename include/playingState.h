#ifndef PLAYINGSTATE_H
#define PLAYINGSTATE_H

#include <State.h>


class playingState : public State
{
    using State::State;

    public:
        playingState();
        virtual ~playingState();

        void onPlay();
        void onStop();

    protected:

    private:
};

#endif // PLAYINGSTATE_H
