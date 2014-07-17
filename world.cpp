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
	
	std::vector<std::vector<int> > _tiledMap(50,std::vector<int>(50));
	tiledMap=_tiledMap;
	
	//map de base en dur
	int map0[50][50]={0};
	
	for(int i=0;i<30;i++){map0[i][10]=1;}
	map0[4][10]=0;
	for(int i=0;i<30;i++){map0[i][11]=1;}
	for(int i=0;i<30;i++){map0[i][12]=1;}
	for(int i=0;i<30;i++){map0[i][13]=1;}
	map0[6][9]=1;

	for(int i=0;i<30;i++){
		for(int j=0;j<30;j++){
			tiledMap[i][j]=map0[i][j];
			//tiledMap[i][j]=0;
		}	
	}	
}

void world::draw(){
		
	for(int i=0;i<tileCount.x;i++){
		for(int j=0;j<tileCount.y;j++){
			
			sf::RectangleShape tile( sf::Vector2f(tileSize.x,tileSize.y) );
			if(tiledMap[i][j]==0){tile.setFillColor(sf::Color::White);}
			else if(tiledMap[i][j]==1){tile.setFillColor(sf::Color::Black);}
			tile.setPosition(i*tileSize.x,j*tileSize.y);
			pWindow->draw(tile);
		}
	}

	if(displayGrid){		
		for(int i=0;i<tileCount.x;i++){
			sf::RectangleShape line( sf::Vector2f(2, tileCount.y*tileSize.y) );		
			line.setFillColor(sf::Color::Black);
			line.setPosition(sf::Vector2f(i*tileSize.x, 0) );
			pWindow->draw(line);
		}
		for(int i=0;i<tileCount.y;i++){
			sf::RectangleShape line( sf::Vector2f( tileCount.x*tileSize.x, 2) );
			line.setFillColor(sf::Color::Black);
			line.setPosition(sf::Vector2f(0, i*tileSize.y) );
			pWindow->draw(line);

		}
	}
}
