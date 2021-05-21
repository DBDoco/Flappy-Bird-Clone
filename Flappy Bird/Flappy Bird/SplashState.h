#pragma once

#include <SFML/Graphics.hpp>
#include "State.h"
#include "Game.h"

namespace Dominik
{
	//SplashState je subklasa klase State
	class SplashState : public State
	{
	public:
		//Konstruktor
		SplashState(GameDataRef data);

		
		void Init();

		void HandleInput();
		void Update(float dt);
		void Draw(float dt);

	private:
		GameDataRef _data;

		//Mjerenje vremena koje je proslo od pokretanja splash screena
		sf::Clock _clock;

		sf::Sprite _background;
	};
}