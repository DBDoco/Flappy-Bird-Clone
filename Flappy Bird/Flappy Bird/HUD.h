#pragma once

#include <SFML/Graphics.hpp>

#include "DEFINITIONS.h"
#include "Game.h"

namespace Dominik
{
	class HUD
	{
	public:
		HUD(GameDataRef data);
		~HUD();

		void Draw();
		void UpdateScore(int score);

	private:
		GameDataRef _data;

		sf::Text _scoreText;

	};
}