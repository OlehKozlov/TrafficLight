
#include "stdafx.h"
#include <windows.h>
#include "GreenState.h"
#include "RedState.h"

GreenState::GreenState(): TIME(3000)
{
}

GreenState::~GreenState()
{
}

void GreenState::run()
{
	log("Green light is active");
	print();
	timer(TIME);
}

State* GreenState::getNextState()
{	
	log("Change to red light");
	return new RedState();
}

void GreenState::print()
{
	system("cls");	
	std::cout << "Press 's' to start, press 'p' to pause or press 'e' to exit:\n"; 
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, COLOR_GREY);
	printCircle();		
	printCircle();
	SetConsoleTextAttribute(hConsole, COLOR_GREEN);	
	printCircle();
	SetConsoleTextAttribute(hConsole, COLOR_GREY);
}
