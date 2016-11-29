#ifndef GREENSTATE_H
#define GREENSTATE_H
#include "State.h"

class StateMachine{
public:
	StateMachine();
	~StateMachine();
	void run();	
	void setCurrentState(State* state);	
private:
	State* currentState_;	
};

#endif