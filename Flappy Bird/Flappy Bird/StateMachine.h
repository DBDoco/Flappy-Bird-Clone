#pragma once

#include <memory>
#include <stack>
#include "State.h"

//State machine je klasa za upravljanje stateovima ili screenovima igre kao sto su Main Menu, Game state...

namespace Dominik
{
	typedef std::unique_ptr<State> StateRef;

	class StateMachine
	{
	public:
		//Konstruktor i destruktor
		StateMachine() { }
		~StateMachine() { }

		//Metoda koja dodaje novi state ili screen na stog (sluzi za odredjivanje aktivnog state-a)
		void AddState(StateRef newState, bool isReplacing = true);
		//Metoda za brisanje state-a
		void RemoveState();

		//Ova metoda se pokrece prilikom svakog loop-a u Game Stateu
		void ProcessStateChanges();

		//Vraca state koji se treba pokrenuti ili je vec pokrenut
		StateRef &GetActiveState();

	private:

		std::stack<StateRef> _states;
		StateRef _newState;

		bool _isRemoving;
		bool _isAdding;
		bool _isReplacing;
	};
}