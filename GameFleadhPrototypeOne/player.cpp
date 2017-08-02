#include "player.h"

Player::Player() :
	m_pos{ 640, 360 },
	m_speed(1),
	m_health(100),
	m_isMoving(false)
{
	m_body.setPosition(m_pos);
	m_body.setRadius(32);
	m_body.setOrigin(32, 32);
	m_body.setFillColor(PURPLE);
}
void Player::update(sf::Vector2i mousePos)
{
	move(mousePos);
	die();
	healthUp();
	healthDown();
}
void Player::render(sf::RenderWindow &window)
{
	window.draw(m_body);
}
void Player::setMoving(bool newMoving)
{
	m_isMoving = newMoving;
}
void Player::move(sf::Vector2i mousePos)
{
	if (m_isMoving)
	{
		if (m_pos.x < mousePos.x && m_pos.x < BORDER_RIGHT)
		{
			m_pos.x += m_speed;
		}
		if (m_pos.x > mousePos.x && m_pos.x > BORDER_LEFT_TOP)
		{
			m_pos.x -= m_speed;
		}
		if (m_pos.y < mousePos.y && m_pos.y < BORDER_BOTTOM)
		{
			m_pos.y += m_speed;
		}
		if (m_pos.y > mousePos.y && m_pos.y > BORDER_LEFT_TOP)
		{
			m_pos.y -= m_speed;
		}
		m_body.setPosition(m_pos);
	}
}

void Player::die()
{
}

void Player::healthUp()
{
}

void Player::healthDown()
{
}
