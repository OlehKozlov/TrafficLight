#include "stdafx.h"
#include <windows.h>
#include "YellowState.h"
#include "GreenState.h"

YellowState::YellowState(): TIME(500)
{	
}

YellowState::~YellowState()
{
}

void YellowState::run()
{	
	log("Yellow light is active");

	const int CYCLE_COUNT = 4;
	for (int i = 0; i < CYCLE_COUNT; i++){
		print();
		timer(TIME);
		printGrey();
		timer(TIME);		
	}	
}

State* YellowState::getNextState()
{
	log("Change to green light");
	return new GreenState();
}

void YellowState::print()
{
	system("cls");	
	std::cout << "Press 's' to start, press 'p' to pause or press 'e' to exit:\n"; 
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, COLOR_GREY);
	printCircle();	
	SetConsoleTextAttribute(hConsole, COLOR_YELLOW);	
	printCircle();
	SetConsoleTextAttribute(hConsole, COLOR_GREY);	
	printCircle();
}

void YellowState::printGrey()
{
	system("cls");	
	std::cout << "Press 's' to start, press 'p' to pause or press 'e' to exit:\n"; 
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, COLOR_GREY);
	printCircle();		
	printCircle();	
	printCircle();
}
