#include "stdafx.h"
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include "State.h"
#include "Logger.h"


State::State(): START('s'), PAUSE('p'), EXIT('e') 
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 8);
}

State::~State()
{
}

void State::run()
{		
}

void State::timer(const int& TIME)
{
	char state = START;		
	long time = clock() + TIME;
	long secondTime = 0;

	while (clock() <= time) {		
		if (_kbhit()) { 
			char c = _getch(); 
			switch (c) {
				case 'p' : {
				state = PAUSE;
				std::cout << "Pause\n";
				log("Pause");
				secondTime = time - clock();
				break;
				}
				case 'e' : {
				state = EXIT;
				std::cout << "Exit\n";
				log("Exit");
				break;
				}
				case 's' : {
				state = START;
				std::cout << "Start\n";		
				log("Start");
				break;
				}
			}
		}		
		if (state == PAUSE)
			time = clock() + secondTime; 
		if (state == EXIT) 
			exit(1); 			
	}

}

State* State::getNextState()
{
	return NULL;
}

void State::printCircle()
{
	char s = 0x2A;
	std::cout << "  " << s << s << std::endl 
		<< " " << s << s << s << s << std::endl
		<< s << s << s << s << s << s << std::endl
		<< " " << s << s << s << s << std::endl
		<< "  " << s << s << std::endl;
}

void State::log(std::string ch)
{
	Logger logger;
	logger.log(ch);
}