#include "AbstractState.h"
#include "FractureState.h"
#include "ExponentialState.h"
#include <cctype>

#ifndef DIGITSTATE_H
#define DIGITSTATE_H


class IntegralState : public AbstractState
{
    public:
        IntegralState();
        State next(std::string str,std::string curVal);
    protected:
    private:
};

#endif // DIGITSTATE_H
