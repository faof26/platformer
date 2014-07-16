#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>


#include "world.h"
#include "player.h"

// Size of map
const int Width = 2048;
const int Height = 2048;

// Main application
class Application
{
public:
	Application() {};

	// smart pointer
	static Application* GetSingleton()
	{
		if (pSingleton == NULL)
			pSingleton = new Application();
		return pSingleton;
	}

	// create a window and a view which allows to draw all bubbles on all the map
	sf::RenderWindow* createWindow(sf::FloatRect _viewPos, sf::VideoMode videoMode, char *pzWindowName)
	{
		Window = new sf::RenderWindow(videoMode, pzWindowName);
		Window->setVerticalSyncEnabled(false);
		Window->setFramerateLimit(0);
		Viewport = sf::View(_viewPos);
		return Window;
	}	

	// accessors
	sf::RenderWindow* GetWindow(){return Window;}

	// update and display
	void Update();
	void Display();	

	void Init();	

private:	

	sf::View Viewport;
	sf::RenderWindow* Window;
	static Application* pSingleton;

	world *_world;
	player *_player;
	
};
