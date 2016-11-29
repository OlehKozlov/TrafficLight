#include <iostream>
#include <fstream>

class Logger{
public:
	Logger();
	virtual ~Logger();
	virtual void log(char* ch);
};