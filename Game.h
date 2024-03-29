#pragma once
#include <SFML/Graphics.hpp> 
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>
/*
	Pseudo game engine
	Wrapper class
*/
class Game
{
private:
	//Variables
	
	//Window
	sf::RenderWindow* window;
	sf::Event ev;
	sf::VideoMode videoMode;
	//Private functions
	void initVariables();
	void initWindow();
public:
	Game();
	virtual ~Game();

	//Accesors
	const bool isRunning() const;
	//Functions
	void pollEvents();
	void update();
	void render();

};

