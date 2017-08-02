#ifndef GAME
#define GAME
#include <SFML\Graphics.hpp>
#include <iostream>
#include "globals.h"

class Game
{
private:
	sf::RenderWindow m_window;
	void init();
	void render();
	void update(sf::Time);
	void processEvents();
	void processKeyPress(sf::Event event);
	void setupText();

	sf::Text m_instructions;
	sf::Font m_font;

public: 
	Game();
	void run();
};
#endif 