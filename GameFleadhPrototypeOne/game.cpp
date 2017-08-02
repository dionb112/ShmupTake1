#include "Game.h"

Game::Game() : 
	m_window(sf::VideoMode(1280, 720),"GF Prototype 1, Shoot = Move")
{
	init();
}
void Game::init()
{
	setupText();
}
void Game::setupText()
{
	if (!m_font.loadFromFile("ASSETS//FONTS//ARLRDBD.ttf"))
	{
		std::cout << "Error loading font" << std::endl;
	}

	m_instructions.setFont(m_font);
	m_instructions.setColor(BLACK);
	m_instructions.setCharacterSize(18);
	m_instructions.setPosition(10, 10);
	m_instructions.setString("The only control is this. Left mouse button to shoot and also to move.");
}
void Game::run()
{
	
	sf::Clock clock;
	sf::Time timePerFrame = sf::Time(sf::seconds(1.0f / 60.0f));
	sf::Time timeSinceUpdate = sf::Time::Zero;

	while (m_window.isOpen())
	{
		processEvents();
		timeSinceUpdate += clock.restart();
		while (timeSinceUpdate > timePerFrame)
		{
			timeSinceUpdate -= timePerFrame;
			processEvents();
			update(timePerFrame);
		}
		render();
	}
}
void Game::processEvents()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (sf::Event::Closed == event.type )
		{
			m_window.close();
		}
		if (event.KeyPressed)
		{
			processKeyPress(event);
		}
	}
}
void Game::processKeyPress(sf::Event event)
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		player.setMoving(true);
	}
	else
	{
		player.setMoving(false);
	}
}
void Game::update(sf::Time)
{
	sf::Vector2i mousePos = sf::Mouse::getPosition(m_window);
	player.update(mousePos);
}
void Game::render()
{
	m_window.clear(WHITE);
	player.render(m_window);
	m_window.draw(m_instructions);
	m_window.display();
}
