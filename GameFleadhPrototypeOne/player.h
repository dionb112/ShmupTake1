#pragma once
#include "globals.h"
class Player
{
public:
	Player();
	void update(sf::Vector2i mousePos);
	void render(sf::RenderWindow &window);
	void setMoving(bool newMoving);
private:
	void move(sf::Vector2i mousePos);
	void die();
	void healthUp();
	void healthDown();
	sf::CircleShape m_body;
	sf::Vector2f m_pos;
	float m_speed;
	int m_health;
	bool m_isMoving;
};