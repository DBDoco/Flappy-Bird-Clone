#include <sstream>
#include "SplashState.h"
#include "DEFINITIONS.h"
#include "MainMenuState.h"

#include <iostream>

namespace Dominik
{
	//Konstruktor
	SplashState::SplashState(GameDataRef data) : _data(data)
	{

	}

	void SplashState::Init()
	{
		//Ucitavanje texture za pozadinu uz pomoc assets managera
		this->_data->assets.LoadTexture("Splash State Background", SPLASH_SCENE_BACKGROUND_FILEPATH);

		_background.setTexture(this->_data->assets.GetTexture("Splash State Background"));
	}

	void SplashState::HandleInput()
	{
		//Pritisak x gumba na gornjem desnom rubu prozora igre gasi igru
		sf::Event event;

		while (this->_data->window.pollEvent(event))
		{
			if (sf::Event::Closed == event.type)
			{
				this->_data->window.close();
			}
		}
	}

	void SplashState::Update(float dt)
	{
		//Provjera koliko je sekudni proslo od pokretanja splash state-a
		if (this->_clock.getElapsedTime().asSeconds() > SPLASH_STATE_SHOW_TIME)
		{
			//Prelazak na Main menu state
			this->_data->machine.AddState(StateRef(new MainMenuState(_data)), true);
		}
	}

	void SplashState::Draw(float dt)
	{
		//Stvaranje prozora
		this->_data->window.clear(sf::Color::Red);

		//Cratnje po prozoru
		this->_data->window.draw( this->_background );

		//Prikaz prozora
		this->_data->window.display();
	}
}