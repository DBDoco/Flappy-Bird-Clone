#pragma once

#include <SFML/Graphics.hpp>
#include "Game.h"
#include <vector>

namespace Dominik
{
	class Land
	{
	public:
		Land(GameDataRef data);

		//Metoda za animaciju zemlje
		void MoveLand(float dt);
		void DrawLand();

		const std::vector<sf::Sprite> &GetSprites() const;

	private:
		GameDataRef _data;

		//Vector za spremanje tekstura zemlje
		std::vector<sf::Sprite>_landSprites;

	};
}