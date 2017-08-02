#ifndef GAME
#define GAME
#include <iostream>
#include "globals.h"
#include "player.h"

class Game
{
private:
	Player player;
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