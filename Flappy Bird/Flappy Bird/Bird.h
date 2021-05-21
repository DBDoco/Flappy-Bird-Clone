#pragma once

#include <SFML/Graphics.hpp>

#include "DEFINITIONS.h"
#include "Game.h"

#include <vector>

namespace Dominik
{
	class Bird
	{
	public:
		Bird(GameDataRef data);
		~Bird();

		//Metoda za prikaz ptice na ekranu
		void Draw();

		//Metoda za animaciju
		void Animate(float dt);

		void Update(float dt);

		void Tap();

		const sf::Sprite &GetSprite() const;

	private:
		GameDataRef _data;

		sf::Sprite _birdSprite;
		//Vector za spremanje tekstura za pticu, tj. animaciju ptice
		std::vector<sf::Texture> _animationFrames;

		unsigned int _animationIterator;

		sf::Clock _clock;

		sf::Clock _movementClock;

		int _birdState;

		float _rotation;

	};
}