#include <iostream>
#include <fstream>
#include <string>

class Logger{
public:
	Logger();
	virtual ~Logger();
	virtual void log(std::string ch);
};