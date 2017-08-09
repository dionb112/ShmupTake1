#pragma once
#include "globals.h"
class Bullet
{
public:
	Bullet();
	void update(sf::Vector2f playerPos);
	void render(sf::RenderWindow &window);
	void fire(sf::Vector2f mousePos);
	bool getAlive();
private:
	void move();
	void offScr(); 
	sf::CircleShape m_body;
	sf::Vector2f m_pos;
	float m_speed;
	bool m_alive;
	bool m_shooting;
	sf::Vector2f m_normalFirePosVector;
};