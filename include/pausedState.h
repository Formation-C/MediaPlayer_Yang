#ifndef PAUSEDSTATE_H
#define PAUSEDSTATE_H


#include <State.h>


class pausedState : public State
{
    using State::State;

    public:
        pausedState(Player* _player);
        virtual ~pausedState();

        void onPlay();
        void onStop();

    protected:

    private:
};

#endif // PAUSEDSTATE_H
