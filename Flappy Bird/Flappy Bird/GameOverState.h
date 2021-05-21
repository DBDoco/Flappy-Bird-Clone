#pragma once

#include <SFML/Graphics.hpp>
#include "State.h"
#include "Game.h"

namespace Dominik
{
	class GameOverState : public State
	{
	public:
		GameOverState(GameDataRef data, int score);

		//Metoda za inicijalizaciju
		void Init();

		//Metoda upravljanje user inputom (exit i play again)
		void HandleInput();
		void Update(float dt);
		void Draw(float dt);

	private:
		GameDataRef _data;

		sf::Sprite _background;

		sf::Sprite _gameOverTitle;
		sf::Sprite _gameOverContainer;
		sf::Sprite _retryButton;

		sf::Text _scoreText;

		int _score;
	};
}