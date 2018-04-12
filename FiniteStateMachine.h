//File finitestatemachine.h

#ifndef FINITESTATEMACHINE_H
#define FINITESTATEMACHINE_H

#include <iosfwd>

class FiniteStateMachine
	{
		protected:
			friend std::ostream &operator<< (std::ostream &, FiniteStateMachine const &);
			
		public:
			FiniteStateMachine();
			virtual FiniteStateMachine *changeState() const = 0;
		//	virtual char const *toString() const = 0;
			virtual ~FiniteStateMachine();
			
	};
	
class ON : public FiniteStateMachine
	{
		private:
		
		public:
			ON();
			FiniteStateMachine *changeState() const;
			//char const *toString() const;
			
			

					
	};
	
class OFF : public FiniteStateMachine
	{
		private:		

		public:
			OFF();
			FiniteStateMachine *changeState() const;
		//	char const *toString() const;

	};
	
#endif
