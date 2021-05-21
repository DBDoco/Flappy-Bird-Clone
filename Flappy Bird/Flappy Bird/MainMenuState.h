#pragma once

#include <SFML/Graphics.hpp>
#include "State.h"
#include "Game.h"

namespace Dominik
{
	class MainMenuState : public State
	{
	public:
		MainMenuState(GameDataRef data);

		//Metoda za inicijalizaciju
		void Init();

		//Metoda za upravljanje user inputa
		void HandleInput();
		void Update(float dt);
		void Draw(float dt);

	private:
		GameDataRef _data;

		sf::Sprite _background;
		sf::Sprite _title;
		sf::Sprite _playButton;
	};
}