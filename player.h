#pragma once

#include <SFML/Graphics.hpp>

class player
{
public:
	player(void);
	~player(void);
	player(sf::RenderWindow *);
	player(const std::string & filePath, sf::IntRect subRect, sf::Vector2f position, int width, int height);	 

    void MoveRight();
    void MoveLeft();

	void draw();	

    sf::Sprite GetSprite();

private:
	sf::RenderWindow *pWindow;
	sf::Vector2f position;
	sf::Vector2f vitesse;//x,y

	sf::Image myImage;
    sf::Texture myTexture;
    sf::Sprite mySprite;

    int myWidth; // Largeur
    int myHeight; // Hauteu
};
