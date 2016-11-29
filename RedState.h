#ifndef REDSTATE_H
#define REDSTATE_H
#include "State.h"
class RedState: public State{
public:
	RedState();
	virtual ~RedState();
	virtual void run();
	virtual State* getNextState();
	virtual void print();		
private:
	const int TIME;		
};
#endif