#include "world.h"
#include <iostream>


world::world(void)
{
	displayGrid=1;
	tileSize=sf::Vector2i(40, 40);
	tileCount=sf::Vector2i(30, 30);
}

world::world(sf::RenderWindow *p)
{
	displayGrid=1;
	pWindow=p;
	tileSize=sf::Vector2i(40, 40);
	tileCount=sf::Vector2i(30, 30);
}

world::~world(void)
{
}

void world::initMap(){
	for(int i=0;i<30;i++){
		for(int j=0;j<30;j++){
			tiledMap[i][j]=0;
		}	
	}
}

void world::draw(){

	if(displayGrid){		
		for(int i=0;i<tileCount.x;i++){
			sf::RectangleShape line( sf::Vector2f(2, tileCount.y*tileSize.y) );		
			line.setFillColor(sf::Color::White);
			line.setPosition(sf::Vector2f(i*tileSize.x, 0) );
			pWindow->draw(line);
		}
		for(int i=0;i<tileCount.y;i++){
			sf::RectangleShape line( sf::Vector2f( tileCount.x*tileSize.x, 2) );
			line.setFillColor(sf::Color::White);
			line.setPosition(sf::Vector2f(0, i*tileSize.y) );
			pWindow->draw(line);

		}
	}
}
