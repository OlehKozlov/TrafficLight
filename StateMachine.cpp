#include <windows.h>
#include "stdafx.h"
#include "StateMachine.h"
#include "GreenState.h"
#include "RedState.h"
#include "YellowState.h"

StateMachine::StateMachine(): currentState_(new RedState())
{
}

StateMachine::~StateMachine()
{
	delete currentState_;
}

void StateMachine::run()
{	
	while (true){		
		currentState_->run();
		setCurrentState(currentState_->getNextState());
	}
}

void StateMachine::setCurrentState(State* state)
{	
	delete currentState_;
	currentState_ = state;
}




