#pragma once

//Ovaj header file sluzi samo za definirianje kljucnih varijabli kao i ucitavanje textura i fontova u igru

//Definicija velicine prozora igre
#define SCREEN_WIDTH 768
#define SCREEN_HEIGHT 1024

//Vrijeme prikaza splash screena u sekundama
#define SPLASH_STATE_SHOW_TIME 2.0

//Ucitavanje backgrounda za sve stateove
#define SPLASH_SCENE_BACKGROUND_FILEPATH "Resources/res/Splash Background.png"
#define MAIN_MENU_BACKGROUND_FILEPATH "Resources/res/sky.png"
#define GAME_BACKGROUND_FILEPATH "Resources/res/sky.png"
#define GAME_OVER_BACKGROUND_FILEPATH "Resources/res/sky.png"

//Ucitavanje logo naslova igre i gumba za pocetak igre
#define GAME_TITLE_FILEPATH "Resources/res/title.png"
#define PLAY_BUTTON_FILEPATH "Resources/res/PlayButton.png"

//Ucitavanje cijevi ili pipeova 
#define PIPE_UP_FILEPATH "Resources/res/PipeUp.png"
#define PIPE_DOWN_FILEPATH "Resources/res/PipeDown.png"
#define SCORING_PIPE_FILEPATH "Resources/res/InvisibleScoringPipe.png"

//Ucitavanje zemlje ili landa
#define LAND_FILEPATH "Resources/res/land.png"

//Ucitavanje ptice
#define BIRD_FRAME_1_FILEPATH "Resources/res/bird-01.png"
#define BIRD_FRAME_2_FILEPATH "Resources/res/bird-02.png"
#define BIRD_FRAME_3_FILEPATH "Resources/res/bird-03.png"
#define BIRD_FRAME_4_FILEPATH "Resources/res/bird-04.png"

//Ucitavanje fonta
#define FLAPPY_FONT_FILEPATH "Resources/fonts/FlappyFont.ttf"

//Ucitavanje game over logo-a i prikaza score-a
#define GAME_OVER_TITLE_FILEPATH "Resources/res/Game-Over-Title.png"
#define GAME_OVER_BODY_FILEPATH "Resources/res/Game-Over-Body.png"

//Brzina i ucestalost cijevi
#define PIPE_MOVEMENT_SPEED 200.0f
#define PIPE_SPAWN_FREQUENCY 1.5f

//Brzina animacije ptice
#define BIRD_ANIMATION_DURATION 0.4f

//Definicija stateova ptice (Still - na pocetku dok igra jos nije pocela, Falling - dok ptica pada tj. dok se ne pritisne gumb misa, Flying - dok ptica leti tj. dok se pritisne gumb misa)
#define BIRD_STATE_STILL 1
#define BIRD_STATE_FALLING 2
#define BIRD_STATE_FLYING 3

//Brzina padanja i letenja ptice
#define GRAVITY 350.0f
#define FLYING_SPEED 350.0f
#define FLYING_DURATION 0.25f

//Brzina rotiranja ptice dok leti ili pada
#define ROTATION_SPEED 100.0f

enum GameStates
{
	eReady,
	ePlaying,
	eGameOver
};

//Brzina flash screena koji se dogodi dok ptica padne
#define FLASH_SPEED 1500.0f

//Brzina game over screeena koji se pojavi dok se ptica zaleti u pipe ili zemlju
#define TIME_BEFORE_GAME_OVER_APPEARS 1.5f