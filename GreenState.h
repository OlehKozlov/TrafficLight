#ifndef GREENSTATE_H
#define GREENSTATE_H
#include "State.h"
class GreenState: public State{
public:
	GreenState();
	virtual ~GreenState();
	virtual void run();
	virtual State* getNextState();
	virtual void print();	
private:
	const int TIME;	
};
#endif