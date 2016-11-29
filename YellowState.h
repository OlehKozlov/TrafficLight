#ifndef YELLOWSTATE_H
#define YELLOWSTATE_H
#include "State.h"
class YellowState: public State{
public:
	YellowState();
	virtual ~YellowState();
	virtual void run();
	virtual State* getNextState();
	virtual void print();
	virtual void printGrey();	
private:
	const int TIME;
};
#endif