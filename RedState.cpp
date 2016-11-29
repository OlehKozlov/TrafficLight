
#include "stdafx.h"
#include <windows.h>
#include "RedState.h"
#include "YellowState.h"

RedState::RedState(): TIME(2000)
{	
}

RedState::~RedState()
{
}

void RedState::run()
{	
	log("Red light is active");
	print();
	timer(TIME);
}

State* RedState::getNextState()
{
	log("Change to yellow light");
	return new YellowState();
}

void RedState::print()
{
	system("cls");	
	std::cout << "Press 's' to start, press 'p' to pause or press 'e' to exit:\n"; 
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, COLOR_RED);
	printCircle();
	SetConsoleTextAttribute(hConsole, COLOR_GREY);
	printCircle();
	printCircle();
}