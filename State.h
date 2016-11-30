#ifndef STATE_H
#define STATE_H
#include <iostream>
#include <string>
class State{
public:
	State();
	virtual ~State();
	virtual void run();
	virtual void timer(const int& TIME);
	virtual State* getNextState();
	virtual void printCircle();
	virtual void log(std::string ch);		
protected:
	enum colors {COLOR_RED = 4, COLOR_YELLOW = 6, 
		COLOR_GREEN = 2, COLOR_GREY = 8};
private:	
	const char START;
	const char PAUSE;
	const char EXIT;	
};
#endif