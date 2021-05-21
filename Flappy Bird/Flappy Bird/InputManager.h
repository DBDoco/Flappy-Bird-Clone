#pragma once

#include "SFML\Graphics.hpp"

namespace Dominik
{
	class InputManager
	{
	public:
		//Kosntruktor i destruktor
		InputManager() {}
		~InputManager() {}

		//Metoda koja provjerava da li je odredjeni sprite ili textura pritisnuta
		bool IsSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow &window);

		//Metoda koja vraca tocnu poziciju misa
		sf::Vector2i GetMousePosition(sf::RenderWindow &window);
	};
}