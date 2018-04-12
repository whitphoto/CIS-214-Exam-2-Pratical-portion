//File light.h
#ifndef LIGHT_H
#define LIGHT_H

#include <iosfwd>
#include "finitestatemachine.h"

class Light
	{
		private:
			//friend std::ostream &operator<< (std::ostream &, Light const&);
			//FiniateStateMachine *state;
			FiniteStateMachine *state = new OFF; //defaults to OFF
		public:
			Light();
			~Light();
			FiniteStateMachine &turnKnob(FiniteStateMachine);
		
			
	};
	#endif
