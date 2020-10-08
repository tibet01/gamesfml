#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
class Game
{
public:
	sf::RenderWindow* window;

	void initWindow();
public:
	Game();
	virtual ~Game();
	void run();
	void update();
	void render();
};

