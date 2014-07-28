#include "player.h"

#include <iostream>
#include <SFML/Graphics.hpp>

player::player(void)
{
	position=sf::Vector2f(100, 100);
	vitesse=sf::Vector2f(0, 0);
}

player::~player(void)
{
}

player::player(sf::RenderWindow *p){
	position=sf::Vector2f(100, 100);
	vitesse=sf::Vector2f(0, 0);
	pWindow=p;
}

player::player(const std::string &filePath, sf::IntRect subRect, sf::Vector2f position, int width, int height)
: myWidth(width), myHeight(height)
{
    if (!myImage.loadFromFile(filePath)) // Si le chargement a �chou�
    {
        std::cerr<<"Error during import "<<filePath<<std::endl;
    }
    else // Si le chargement de l'image a r�ussi
    {
        myImage.createMaskFromColor(sf::Color::White); // Masque de couleur
        myTexture.loadFromImage(myImage);
        mySprite.setTexture(myTexture);
        mySprite.setTextureRect(subRect); // Sous rectangle
        mySprite.setPosition(position);
    }
}
/*
player::player(const std::string &filePath, sf::IntRect subRect, sf::Vector2f position, int width, int height,sf::RenderWindow *p)
: myWidth(width), myHeight(height)
{
    if (!myImage.loadFromFile(filePath)) // Si le chargement a �chou�
    {
        std::cerr<<"Error during import "<<filePath<<std::endl;
    }
    else // Si le chargement de l'image a r�ussi
    {
        myImage.createMaskFromColor(sf::Color::White); // Masque de couleur
        myTexture.loadFromImage(myImage);
        mySprite.setTexture(myTexture);
        mySprite.setTextureRect(subRect); // Sous rectangle
        mySprite.setPosition(position);
    }
    vitesse=sf::Vector2f(0, 0);
    pWindow=p;
}
*/



sf::Sprite player::GetSprite()
{
    return mySprite;
}


void player::MoveRight(){

	position.x+=1;
    mySprite.move(2, 0);
  /*  	if(vitesse.x<2)
		vitesse.x++;
	else
		vitesse.x=2;
*/
}

void player::MoveLeft(){

	position.x-=1;
    mySprite.move(-2, 0);

}

void player::draw(){
	sf::CircleShape circle(5);
	circle.setFillColor(sf::Color::Red);
	circle.setPosition(sf::Vector2f(position.x+2.5, position.y+2.5));
	pWindow->draw(circle);
}
/*
void jump(){
	
	if(isInAir==false)
		vitesse.y=10;
}*/

