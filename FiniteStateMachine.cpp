#include <iostream>
#include <string>
#include <iosfwd>
#include "FiniteStateMachine.h"

using namespace std;

FiniteStateMachine::FiniteStateMachine(){}
FiniteStateMachine::~FiniteStateMachine(){}

/*
ostream &operator<< (ostream &stream, FiniteStateMachine const fsm)
	{
		return stream << fsm.toString();
	}
*/

ON::ON() {}

FiniteStateMachine *ON::changeState() const
	{
		cout << "\n Turning on";
		return new ON();	
	}
	
/*	
char *ON::toString() const
	{
		return "ON";
	}
*/	
OFF::OFF()	{}
		
FiniteStateMachine *OFF::changeState() const
	{
		cout << "\n Turning Off";
		return new OFF();
	}

/*		
char *OFF::toString() const
	{
		return "OFF";
	}
*/
