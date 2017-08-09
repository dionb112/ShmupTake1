#ifndef GAME
#define GAME
#include <iostream>
#include "globals.h"
#include "player.h"
#include "bullet.h"

class Game
{
private:
	Player player;
	Bullet bullets[10];
	sf::RenderWindow m_window;
	void init();
	void render();
	void update(sf::Time);
	void processEvents();
	void processKeyPress(sf::Event event);
	void setupText();

	sf::Text m_instructions;
	sf::Font m_font;
	int m_counter;
	int m_bulletCount;
public: 
	Game();
	void run();
};
#endif 