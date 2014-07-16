#pragma once

#include <vector>
#include <SFML\Graphics.hpp>

class world
{
public:
	world(void);
	world(sf::RenderWindow *);
	~world(void);

	void initMap();
	void draw();	

private:
	sf::RenderWindow *pWindow;
	bool displayGrid;

	std::vector<std::vector<int> > tiledMap;
	sf::Vector2i tileSize;
	sf::Vector2i tileCount;
	
};

