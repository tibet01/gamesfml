#include "Game.h"
void Game::initWindow()
{
	this->window = new sf::RenderWindow(sf::VideoMode(800,600),"Swaglords of Space - Game 3",sf::Style::Close | sf::Style::Titlebar);
}
Game::Game()
{
	this->initWindow();
}
Game::~Game()
{
	delete this->window;
}
void Game::run()
{
	while (this->window->isOpen())
	{
		this->update();
		this->render();
	}
	
	
}
void Game::update()
{
	sf::Event e;
	while (this->window->pollEvent(e))
	{

	}
}
void Game::render()
{
	this->window->clear();
	this->window->display();
}