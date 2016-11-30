#include "stdafx.h"
#include "Logger.h"
#include <ctime>
#include "State.h"


Logger::Logger()
{
}

Logger::~Logger()
{
}

void Logger::log(std::string ch)
{
	std::ofstream logFile ("logfile.txt", std::ios_base::app | std::ios_base::out);	
	time_t t;
	struct tm buf;
	char str[26];
	t = time(0);
	localtime_s(&buf,&t);
	asctime_s(str, sizeof(str), &buf);
	State state;
	for(int i = 0; i < sizeof(str)-2; i++)
		logFile << str[i];	
	logFile << ": " << ch << std::endl;
	logFile.close();
}
