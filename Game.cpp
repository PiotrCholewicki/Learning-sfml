#include "Game.h"

void Game::initVariables()
{
	this->window = nullptr;
	
}

void Game::initWindow()
{
	this->videoMode.width = 1080;
	this->videoMode.height = 720;
	this->videoMode.getDesktopMode; //for test
	this->window = new sf::RenderWindow(this->videoMode, "Szpigat", sf::Style::Titlebar | sf::Style::Close);
}

Game::Game()
{
	this->initVariables();
	this->initWindow();
}

Game::~Game()
{
	delete this->window;
}


//Functions

const bool Game::isRunning() const
{
	return this->window->isOpen();
}

void Game::pollEvents()
{
    while (this->window->pollEvent(this->ev)) {
        switch (this->ev.type) {
        case sf::Event::Closed: { //closing on clicking the top right corner "X"
            this->window->close();
            break;
        }
        case sf::Event::KeyPressed: { //close on clicking escape
            if (this->ev.key.code == sf::Keyboard::Escape) {
                this->window->close();
            }
            break;
        }

        }
    }
}

void Game::update()
{
    this->pollEvents();

}

void Game::render()
{
    /*
    - clear old frame
    - render objects
    - display frame in window

    */
    this->window->clear(sf::Color(230,100,100,255));

    //Draw game objects
    this->window->display();
}
