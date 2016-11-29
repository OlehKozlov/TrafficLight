#include "stdafx.h"
#include "Logger.h"


Logger::Logger()
{
}

Logger::~Logger()
{
}

void Logger::log(char* ch)
{
	std::ofstream logFile ("logfile.txt", std::ios_base::app | std::ios_base::out);	
	logFile << ch << std::endl;	
	logFile.close();
}
