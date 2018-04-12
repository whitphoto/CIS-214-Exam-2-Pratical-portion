#include <iosfwd>
#include "FiniteStateMachine.h"
#include "Light.h"

using namespace std;

Light::Light()
	{
	
		
	}//end Light constructor

FiniteStateMachine Light::&turnKnob(FiniteStateMachine *state)
	{
		if (*state == OFF)
			{
				FiniteStateMachine *state = new ON;
				return *state;
				
			}
			
			else
				{
					FiniteStateMachine *state = new OFF;
				return *state
				}
	}//end turnKnob()


