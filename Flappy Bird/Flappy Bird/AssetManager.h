#pragma once

#include <map>
#include <SFML/Graphics.hpp>

namespace Dominik
{
	class AssetManager
	{
	public:
		//Konstruktor i destruktor
		AssetManager() { }
		~AssetManager() { }

		//Meotoda za dodavanje teksture koja prima ime teksture i datoteku koju ubacujemo u igru
		void LoadTexture(std::string name, std::string fileName);
		sf::Texture &GetTexture(std::string name);

		//Meotoda za dodavanje fonta koja prima ime fonta i font koju ubacujemo u igru
		void LoadFont(std::string name, std::string fileName);
		sf::Font &GetFont(std::string name);

	private:
		//Mape u koje se spremaju teksture i fontovi nakon sto su uneseni u program
		std::map<std::string, sf::Texture> _textures;
		std::map<std::string, sf::Font> _fonts;
	};
}
