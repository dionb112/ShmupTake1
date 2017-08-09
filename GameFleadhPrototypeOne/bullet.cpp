#include "bullet.h"
Bullet::Bullet() :
	m_alive{ false },
	m_shooting{ false },
	m_pos{},
	m_speed(100)
{
	m_body.setRadius(8);
	m_body.setOrigin(8, 8);
	m_body.setFillColor(RED);
}
void Bullet::update(sf::Vector2f playerPos)
{
	if (!m_alive)
	{
		m_pos = playerPos;
	}
	if (m_alive)
	{
		offScr();
		move();
	}
}
void Bullet::move()
{
	m_pos += m_normalFirePosVector * 10.0f;
	m_body.setPosition(m_pos);
}
void Bullet::offScr()
{
	if (m_pos.x > BORDER_RIGHT + 24 || m_pos.x < BORDER_LEFT_TOP - 24 || m_pos.y > BORDER_BOTTOM + 24 || m_pos.y < BORDER_LEFT_TOP - 24)
	{
		m_alive = false;
	}
}
void Bullet::render(sf::RenderWindow & window)
{
	if (m_alive)
	{
		window.draw(m_body);
	}
}
/// <summary>
/// here I am turning the mouse position into a vector from bullets pos (player pos ) to the mouse pos at time of fire, and normalising it so I can add it to bullet pos later
/// </summary>
/// <param name="mousePos"></param>
void Bullet::fire(sf::Vector2f mousePos)
{
	if (!m_alive)
	{
		mousePos -= m_pos;
		double length = std::sqrt(pow(mousePos.x, 2) + pow(mousePos.y, 2));
		if (length != 0) //to stop division of 0
		{
			mousePos.x = mousePos.x / length;
			mousePos.y = mousePos.y / length;
		}
		m_normalFirePosVector = mousePos;
		m_alive = true;
	}
}

bool Bullet::getAlive()
{
	return m_alive;
}
