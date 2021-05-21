#pragma once

//Klasa za sve stateove, svaki state je dijete ove klase

namespace Dominik
{
	class State
	{
	public:
		//Sluzi za inicijalizaciju stateova
		virtual void Init() = 0;

		//Sluzi za upravljanje inputom kojeg korisnik unosi
		virtual void HandleInput() = 0;

		//Sluzi za azuriranje varijabli npr. sto se dogadja s igrom ako korinsik unese input
		virtual void Update(float dt) = 0;

		//Sluzi za crtanje aplikacije (dt je frame difference koji sluzi kao optimizacija framerate-a)
		virtual void Draw(float dt) = 0;

		//Poziva se kada se igra pauzira ili ponovno pokrece
		virtual void Pause() { }
		virtual void Resume() { }
	};
}