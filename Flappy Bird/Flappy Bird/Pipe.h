#pragma once

#include <SFML/Graphics.hpp>
#include "Game.h"
#include <vector>

namespace Dominik
{
	class Pipe
	{
	public:
		Pipe(GameDataRef data);

		//Metoda za stvaranje donje cijevi
		void SpawnBottomPipe();
		//Metoda za stvaranje gornje cijevi
		void SpawnTopPipe();
		//Metoda za stvaranje nevidljive cijevi (sluzi kod collision-a)
		void SpawnInvisiblePipe();
		//Metoda za stvaranje cijevi koja broji score
		void SpawnScoringPipe();
		//Metoda za pomicanje cijevi
		void MovePipes(float dt);
		void DrawPipes();
		//Metoda za stvaranje randomiziranih cijevi
		void RandomisePipeOffset();

		const std::vector<sf::Sprite> &GetSprites() const;
		std::vector<sf::Sprite> &GetScoringSprites();

	private:
		GameDataRef _data;
		//Vector za spremanje svih cijevi koje su nastale
		std::vector<sf::Sprite> pipeSprites;
		std::vector<sf::Sprite> scoringPipes;

		//Varijable
		int _landHeight;
		int _pipeSpawnYOffset;

	};
}