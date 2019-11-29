#ifndef STOPPEDSTATE_H
#define STOPPEDSTATE_H

#include <State.h>


class stoppedState : public State
{
    using State::State;

    public:
        stoppedState();
        virtual ~stoppedState();

        void onPlay();
        void onStop();
    protected:

    private:
};

#endif // STOPPEDSTATE_H
